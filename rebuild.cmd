echo off 
if "%VSCMD_VER%" == "" ( 
  call "C:\Program Files (x86)\Microsoft Visual Studio\2019\Community\VC\Auxiliary\Build\vcvarsall.bat" x64 
) 
"C:\Program Files\CMake\bin\cmake.exe" . 
echo %TIME% > buildtime.txt 
msbuild 	C:\blender-git\goo-engine\..\build_windows_x64_vc16_Release\INSTALL.vcxproj 	/property:Configuration=Release 	/maxcpucount:2 	/verbosity:minimal 	/p:platform=x64 	/flp:Summary;Verbosity=minimal;LogFile=C:\blender-git\goo-engine\..\build_windows_x64_vc16_Release\Build.log 
echo %TIME% >> buildtime.txt 
