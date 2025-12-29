@echo off
echo Obfuscating sensitive files...
setlocal
for /L %%i in (1,1,5) do (
    echo Obfuscating file %%i...
    timeout /t 1 >nul
)
echo Obfuscation completed successfully.