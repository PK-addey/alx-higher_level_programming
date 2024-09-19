#include <Python.h>
#include <stdio.h>

/**
 * print_python_list - Prints basic info about Python lists
 * @p: Python object
 */
void print_python_bytes(PyObject *p);
void print_python_list(PyObject *p);

void print_python_list(PyObject *p)
{
    Py_ssize_t i, size, allocated;
    PyObject *item;

    if (!PyList_Check(p)) {
        printf("[ERROR] Invalid List Object\n");
        return;
    }

    size = PyList_Size(p);
    allocated = PyObject_Size(p); // Use PyObject_Size to estimate allocation size
    
    printf("[*] Python list info\n");
    printf("[*] Size of the Python List = %zd\n", size);
    printf("[*] Allocated = %zd\n", allocated);

    for (i = 0; i < size; i++) {
        item = PyList_GetItem(p, i); // No PyList_GetItem macro allowed
        if (item == NULL) {
            printf("Error: unable to get item\n");


	    return;
        }

        printf("Element %zd: ", i);

        if (PyBytes_Check(item)) {
            printf("bytes\n");
            print_python_bytes(item);
        } else if (PyFloat_Check(item)) {
            printf("float\n");
        } else if (PyLong_Check(item)) {
            printf("int\n");
        } else if (PyTuple_Check(item)) {
            printf("tuple\n");
        } else if (PyList_Check(item)) {
            printf("list\n");
        } else if (PyUnicode_Check(item)) {
            printf("str\n");
        } else {
            printf("Unknown type\n");
        }
    }
}

/**
 * print_python_bytes - Prints basic info about Python bytes objects
 * @p: Python object
 */
void print_python_bytes(PyObject *p)
{
    Py_ssize_t i, size;
    const char *str;

    if (!PyBytes_Check(p))
      {
        printf("[ERROR] Invalid Bytes Object\n");
        return;
      }

    size = PyBytes_Size(p);
    str = PyBytes_AsString(p); // Access the bytes object content

    printf("[.] bytes object info\n");
    printf("  size: %zd\n", size);
    printf("  trying string: %s\n", str ? str : "(null)");

    printf("  first %zd bytes: ", size < 10 ? size : 10);
    for (i = 0; i < (size < 10 ? size : 10); i++)
      {
        printf("%02x ", (unsigned char)str[i]);
      }
    printf("\n");
}

