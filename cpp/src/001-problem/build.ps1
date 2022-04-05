cmake  -S . -B  build -G "MinGW Makefiles" 
# cmake -S . -B build -G "MinGW Makefiles" -DCMAKE_CXX_FLAGS=" -IC:\ProgramData\chocolatey\lib\mingw\tools\install\mingw64\include\c++\11.2.0" "C:\Devs\software\cpp"
Set-Location .\Build
cmake .. 
make

# Clear-Host
Write-Host "Running the program please wait ..."
Write-Host ""
Write-Host "Solution for Problem 1: Multiples of 3 and 5"
.\main.exe

Set-Location ..\..\..\
