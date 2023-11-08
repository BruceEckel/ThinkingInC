# Create Thinking in C release

# Check if the required arguments are provided
if ($args.Count -lt 2) {
    Write-Host "Usage: .\release.ps1 [version_number] [release_title]"
    Write-Host "Example: .\release.ps1 v0.2 'Release Candidate'"
    exit
}

# Define the source directory and the name of the zip file
$srcDirectory = "src"
$zipFileName = "ThinkingInC.zip"

# Get the full path of the source directory
$srcDirectoryPath = Join-Path -Path (Get-Location) -ChildPath $srcDirectory

# Get the parent directory of the source directory
$parentDirectoryPath = Split-Path -Path $srcDirectoryPath -Parent

# Get the full path of the target zip file in the parent directory
$targetZipFilePath = Join-Path -Path $parentDirectoryPath -ChildPath $zipFileName

# Compress the source directory files into a zip file in the parent directory
Compress-Archive -Path "$srcDirectoryPath\*" -DestinationPath $targetZipFilePath -Force

# Get version number and release title from the command-line arguments
$versionNumber = $args[0]
$releaseTitle = $args[1]

# Create a release on GitHub using the zip file
gh release create $versionNumber $targetZipFilePath -n "$releaseTitle"

# Check if the release was created successfully before deleting the zip
if ($?) {
    # Remove the zip file
    Remove-Item $targetZipFilePath -Force
} else {
    Write-Host "The release was not created successfully. The zip file will not be deleted."
}
