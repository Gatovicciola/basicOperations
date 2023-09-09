import os
basicOperationsExe_path = "build/basicOperationsExe"

os.system(f"{basicOperationsExe_path}  --help")
os.system(f"{basicOperationsExe_path}  --subt -a 1 -b 2")
# so we could use shellspec to test the "basicOperationsExe"
