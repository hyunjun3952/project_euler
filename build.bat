@echo off
if exist a.exe del a.exe

set /p filename=Type filename:
if /i not "%filename:~-4%"==".cpp" set filename=%filename%.cpp

g++ "%filename%" -o a.exe && a.exe
