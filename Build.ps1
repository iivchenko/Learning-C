$pattern = "*C:\MinGW\bin\*"
$g = "C:\MinGW\bin\"
$bin = ".\bin"

if (-not(Test-Path $g))
{
    Write-E "$g doesn't exists. The MinGW doesn't installed or the path is invalid"

    return;
}

$PATH = [Environment]::GetEnvironmentVariable("PATH", [EnvironmentVariableTarget]::Machine)

if(-not($PATH -like $pattern))
{
    [Environment]::SetEnvironmentVariable("PATH", "$PATH;$g", [EnvironmentVariableTarget]::Machine);
}

if (-not(Test-Path $bin))
{
    New-Item $bin -ItemType Directory
}

# BUILD ALL SAMPLES

Get-ChildItem .\src | % { gcc ".\src\$_" -o ".\bin\$_.exe" }