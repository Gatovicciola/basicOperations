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

# Error cases
def test_divide_limit():
    assert basicOperations.divide(6.0, 0.0) == 0
def test_rootSquare_limit():
    assert basicOperations.rootSquare(-1.0) == 0

