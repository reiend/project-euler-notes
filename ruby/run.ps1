Write-Host "Enter the problem solution you want to run: #" -NoNewline
$ProblemNumber = Read-Host

if ($ProblemNumber -eq 1) {
  Write-Host "Solution for Problem 1: Sum of Multiples of 3 and 5 upto 1000"
  # npm run solution-problem-${ProblemNumber}
  ruby .\app\00${ProblemNumber}-problem\main.rb
}
