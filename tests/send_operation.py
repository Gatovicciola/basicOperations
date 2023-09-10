import sys
sys.path.append("build")

import basicOperations as bo
bo.send_command(["","--help"])
bo.send_command(["","--subt", "-a 1", "-b 2"])