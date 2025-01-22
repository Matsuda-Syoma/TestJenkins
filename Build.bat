@echo off
chcp 65001
"C:\Program Files\Microsoft Visual Studio\2022\Community\Msbuild\Current\Bin\MsBuild.exe" TestJenkins\testJenkins.sln /t:rebuild
cd TestJenkins\x64\Debug
TestJenkins.exe