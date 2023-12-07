import ctypes

# Load the shared library
lib = ctypes.CDLL('./libPython.so')

# Define the argument types for the functions
lib.print_python_list.argtypes = [ctypes.py_object]
lib.print_python_bytes.argtypes = [ctypes.py_object]

# Example usage
s = b"Hello"
lib.print_python_bytes(s)

l = [b'Hello', b'World']
lib.print_python_list(l)

