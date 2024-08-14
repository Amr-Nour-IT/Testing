@echo off

:: Check if the source file exists
set SOURCE_FILE="C:\path\to\your\Source.cpp"
if not exist %SOURCE_FILE% (
    echo Source.cpp not found!
    pause
    exit /b 1
)

:: Remove old executable if it exists
if exist Source.exe (
    del Source.exe
)

:: Compile the source file
g++ %SOURCE_FILE% -o Source.exe

:: Check if compilation was successful
if %errorlevel% neq 0 (
    echo Compilation failed!
    pause
    exit /b 1
)

:: Run the compiled program
Source.exe

:: Keep the terminal open
echo Press any key to exit...
pause

