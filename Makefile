all:
		cmake -B build
		cmake --build build

c:
		rm -rf build
