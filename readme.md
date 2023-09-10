# Installation
make sure to have cmake and python.

then you can 
```bash
cd ..
python -m pip install ./basicOperations
```
Then on python:
```python
import basicOperations as bo
print("\n first command")
bo.send_command("--help")

print("\n second command")
bo.send_command("--subt -a 1 -b 2")

#or
print("\n first command")
help(bo)

print("\n second command")
bo.subtract(1,2)
```

if it fails, you can run the tests
```bash
cd basicOperations
make 
make t
```
# References

- [pybind11](https://github.com/pybind/pybind11)
- [cmake](https://cmake.org/cmake/help/latest/guide/tutorial/A%20Basic%20Starting%20Point.html)
- [vim](https://doc.ubuntu-fr.org/vim)
- [openai](https://chat.openai.com/)
- [lyra](https://github.com/bfgroup/Lyra)
