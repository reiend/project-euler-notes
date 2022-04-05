cmake  -S . -B  build -G "MinGW Makefiles" 
Set-Location .\Build
cmake .. 
make

# Clear-Host
Write-Host "Running the program please wait ..."
Write-Host ""
Write-Host "Solution for Problem 1: Multiples of 3 and 5"
.\main.exe

Set-Location ..\..\..\
