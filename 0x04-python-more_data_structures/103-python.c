#include <Python.h>
#include <stdio.h>

/**
 * print_python_bytes - Prints information about Python bytes objects
 * @p: PyObject pointer
 */
void print_python_bytes(PyObject *p)
{
    PyBytesObject *bytes;
    unsigned int i, size, max_print;

    printf("[.] bytes object info\n");

    if (!PyBytes_Check(p))
    {
        printf("  [ERROR] Invalid Bytes Object\n");
        return;
    }

    bytes = (PyBytesObject *)p;
    size = (unsigned int)PyBytes_GET_SIZE(p);
    max_print = size > 10 ? 10 : size;

    printf("  size: %u\n", size);
    printf("  trying string: %s\n", bytes->ob_sval);
    printf("  first %u bytes:", max_print);
    for (i = 0; i < max_print; i++)
        printf(" %02x", (unsigned char)bytes->ob_sval[i]);
    printf("\n");
}

/**
 * print_python_list - Prints information about Python lists
 * @p: PyObject pointer
 */
void print_python_list(PyObject *p)
{
    PyListObject *list;
    unsigned int i, size, allocated;
    PyObject *item;

    printf("[*] Python list info\n");

    if (!PyList_Check(p))
    {
        printf("[ERROR] Invalid List Object\n");
        return;
    }

    list = (PyListObject *)p;
    size = (unsigned int)PyList_GET_SIZE(p);
    allocated = (unsigned int)list->allocated;

    printf("[*] Size of the Python List = %u\n", size);
    printf("[*] Allocated = %u\n", allocated);

    for (i = 0; i < size; i++)
    {
        item = PyList_GET_ITEM(p, i);
        printf("Element %u: %s\n", i, Py_TYPE(item)->tp_name);

        if (PyBytes_Check(item))
            print_python_bytes(item);
    }
}
