@echo off
if exist .\build (
    echo removing build...
    rmdir /s /q .\build
    echo Done
)
