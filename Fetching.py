import os 
import subprocess
from concurrent.futures import ThreadPoolExecutor 

def download_files(repo_url, branch, folder_path):
    #command for achiving the folder
    command = f'git archive --remote = {repo_url} {branch} {folder_path} -o {folder_path.replace("/", "_")}.zip'
    subprocess.run(command, shell=True)


repo_url = "git@github.com:kautilya705/GRADINGASSIGNMENTS.git"
branch = "main"

#List of Folders to download
folders_to_download = [""]
