/*******************************************************************************
 * Copyright 2009-2016 Jörg Müller
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 ******************************************************************************/

#include "plugin/PluginManager.h"

#include <windows.h>

AUD_NAMESPACE_BEGIN

std::unordered_map<std::string, void*> PluginManager::m_plugins;

void* PluginManager::openLibrary(const std::string& path)
{
	return reinterpret_cast<void*>(LoadLibrary(path.c_str()));
}

void* PluginManager::lookupLibrary(void *handle, const std::string &name)
{
	return reinterpret_cast<void*>(GetProcAddress(reinterpret_cast<HMODULE>(handle), name.c_str()));
}

void PluginManager::closeLibrary(void *handle)
{
	FreeLibrary(reinterpret_cast<HMODULE>(handle));
}

bool PluginManager::loadPlugin(const std::string& path)
{
	void* handle = openLibrary(path);

	if (!handle)
		return false;

	void (*registerPlugin)() = (void (*)())lookupLibrary(handle, "registerPlugin");
	const char* (*getName)() = (const char* (*)())lookupLibrary(handle, "getName");

	if(!registerPlugin || !getName)
	{
		closeLibrary(handle);
		return false;
	}

	registerPlugin();

	m_plugins[getName()] = handle;

	return true;
}

#define STATIC_PLUGIN_CLASS(name) class name { public: static void registerPlugin(); };
#define STATIC_PLUGIN_REGISTER(name) name::registerPlugin();

STATIC_PLUGIN_CLASS(FFMPEG)
STATIC_PLUGIN_CLASS(SndFile)
STATIC_PLUGIN_CLASS(OpenALDevice)
STATIC_PLUGIN_CLASS(SDLDevice)
STATIC_PLUGIN_CLASS(WASAPIDevice)


void PluginManager::loadPlugins(const std::string& path)
{
	STATIC_PLUGIN_REGISTER(FFMPEG)
	STATIC_PLUGIN_REGISTER(SndFile)
	STATIC_PLUGIN_REGISTER(OpenALDevice)
	STATIC_PLUGIN_REGISTER(SDLDevice)
	STATIC_PLUGIN_REGISTER(WASAPIDevice)


	std::string readpath = path;

	if(path == "")
		readpath = "plugins";

	WIN32_FIND_DATA entry;
	bool found_file = true;
	std::string search = readpath + "\\*";
	HANDLE dir = FindFirstFile(search.c_str(), &entry);

	if(dir == INVALID_HANDLE_VALUE)
		return;

	while(found_file)
	{
		const std::string filename = entry.cFileName;
		const std::string end = ".dll";

		if(filename.length() >= end.length() && filename.substr(filename.length() - end.length()) == end)
		{
			loadPlugin(readpath + "/" + filename);
		}

		found_file = FindNextFile(dir, &entry);
	}

	FindClose(dir);
}

AUD_NAMESPACE_END
