@echo off 
setlocal enabledelayedexpansion 

chcp 65001 > nul
echo 即将删除 .\ch* 目录下的以下文件类型：
echo *.exe *.obj *.pdb *.ilk *.aux *.fdb_latexmk *.fls *.log *.synctex.gz 
set /p confirm="确认删除？(y/n) "
if /i "%confirm%" neq "y" (
    echo 操作已取消 
    pause 
    exit /b 
)
 
set "pattern=ch*"
set "found=0"
 
for /d %%i in ("%pattern%") do (
    echo 正在扫描目录：%%i 
    set "found=1"
    del /s /q "%%i\*.exe" >nul 2>&1 
    del /s /q "%%i\*.obj" >nul 2>&1 
    del /s /q "%%i\*.pdb" >nul 2>&1 
    del /s /q "%%i\*.ilk" >nul 2>&1 
    del /s /q "%%i\*.aux" >nul 2>&1 
    del /s /q "%%i\*.fdb_latexmk" >nul 2>&1 
    del /s /q "%%i\*.fls" >nul 2>&1 
    del /s /q "%%i\*.log" >nul 2>&1 
    del /s /q "%%i\*.synctex.gz" >nul 2>&1 
)
if "!found!"=="0" (
    echo 未找到符合 %pattern% 的目录 
) else (
    echo 所有指定文件已清理完成 
)

echo ------------------------
echo 安全提示:
echo 1. 本操作不可逆，删除前请确认文件类型 
echo 2. 可先手动执行单个目录测试: del /s /q ".\ch1\*.exe"
pause 