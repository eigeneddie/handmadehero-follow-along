@echo off

mkdir ..\..\build
pushd ..\..\build
cl -Zi ..\handmadehero_folder\code\win32_handmade.cpp user32.lib
popd

