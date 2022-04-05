Write-Host "Enter the problem solution you want to run: #" -NoNewline
$ProblemNumber = Read-Host

if ($ProblemNumber -eq 1)
{
  Write-Host ""
  Set-Location .\src\00${ProblemNumber}-problem\
  Write-Host "Compiling the program please wait ..."
  .\build.ps1
}
