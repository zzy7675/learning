@echo off
set BUILD_DIR=.\build
cmake -G Ninja -B %BUILD_DIR%  -S .
cmake --build %BUILD_DIR%
