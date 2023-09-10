import sys, pytest
sys.path.append("build")

import basicOperations

# Good cases
def test_add():
    assert basicOperations.add(5.0, 3.0) == 8.0
def test_subtract():
    assert basicOperations.subtract(5.0, 3.0) == 2.0
def test_multiply():
    assert basicOperations.multiply(5.0, 3.0) == 15.0
def test_divide():
    assert basicOperations.divide(6.0, 3.0) == 2.0
def test_rootSquare():
    assert basicOperations.rootSquare(25.0) == 5.0
def test_send_command_add():
    assert basicOperations.send_command("--add -a 5.0 -b 3.0") == 8.0
def test_send_command_subtract():
    assert basicOperations.send_command("--subt -a 5.0 -b 3.0") == 2.0
def test_send_command_multiply():
    assert basicOperations.send_command("--mult -a 5.0 -b 3.0") == 15.0
def test_send_command_divide():
    assert basicOperations.send_command("--divd -a 6.0 -b 3.0") == 2.0
def test_send_command_rootSquare():
    assert basicOperations.send_command("--sqrt -a 25.0") == 5.0

# Error cases
def test_divide_limit():
    assert basicOperations.divide(6.0, 0.0) == 1
def test_rootSquare_limit():
    assert basicOperations.rootSquare(-1.0) == 1

def test_send_command_divide_limit():
    assert basicOperations.send_command("--divd -a 6.0 -b 0.0") == 1
def test_send_command_rootSquare_limit():
    assert basicOperations.send_command("--sqrt -a -1.0") == 1

