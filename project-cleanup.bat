@echo off
echo "Working Dir: %~dp0"

echo "Deleting Solution file and '.vs' folder..."
rmdir /s /q "%~dp0/.vs"

echo "Deleting 'Binaries' folder..."
rmdir /s /q "%~dp0/Binaries"

echo "Deleting 'DerivedDataCache' folder..."
rmdir /s /q "%~dp0/DerivedDataCache"

echo "Deleting 'Intermediate' folder..."
rmdir /s /q "%~dp0/Intermediate"

echo "Deleting 'Saved' folder..."
rmdir /s /q "%~dp0/Saved"

echo "Deleting Visual Studio Solution..."
del "%~dp0/*.sln"

pause