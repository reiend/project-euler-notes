Write-Host "Enter the problem solution you want to run: #" -NoNewline
$ProblemNumber = Read-Host

if ($ProblemNumber -eq 1) {
  Write-Host "Solution for Problem 1: Multiples of 2 and 5"
  # npm run solution-problem-${ProblemNumber}
  babel-node .\src\00${ProblemNumber}-problem\index.js
}
