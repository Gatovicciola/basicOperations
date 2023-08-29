- [pybind11](https://github.com/pybind/pybind11)
- [cmake](https://cmake.org/cmake/help/latest/guide/tutorial/A%20Basic%20Starting%20Point.html)
- [vim](https://doc.ubuntu-fr.org/vim)
- [openai](https://chat.openai.com/)

g++ -O3 -Wall -shared -std=c++11 -fPIC `python3 -m pybind11 --includes` basicOperations.cpp main.cpp -o basicOperations`python3-config --extension-suffix`
