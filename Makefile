all:
	cmake -B build
	cmake --build build
p:
	python3.11 -m pip install .
c:
	rm -rf build
t:
	python3.11 -m pytest

shellspec, s:
	python3.11 tests/send_operation.py
