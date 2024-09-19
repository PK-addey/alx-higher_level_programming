#include <Python.h>
#include <stdio.h>

/**
 * print_python_bytes - Prints basic info about Python bytes objects
 * @p: PyObject bytes
 */
void print_python_bytes(PyObject *p)
{
    Py_ssize_t size, i;
    char *bytes_str;

    printf("[.] bytes object info\n");
    if (!PyBytes_Check(p))
    {
        printf("  [ERROR] Invalid Bytes Object\n");
        return;
    }

    size = PyBytes_Size(p);
    bytes_str = PyBytes_AsString(p);

    printf("  size: %zd\n", size);
    printf("  trying string: %s\n", bytes_str);
    printf("  first %zd bytes:", size < 10 ? size + 1 : 10);

    for (i = 0; i < size && i < 10; i++)
        printf(" %02x", (unsigned char)bytes_str[i]);

    printf("\n");
}

/**
 * print_python_list - Prints basic info about Python lists
 * @p: PyObject list
 */
void print_python_list(PyObject *p)
{
    Py_ssize_t size, allocated, i;
    PyObject **items;

    printf("[*] Python list info\n");
    if (!PyList_Check(p))
    {
        printf("  [ERROR] Invalid List Object\n");
        return;
    }

    size = PyList_Size(p);
    allocated = ((PyListObject *)p)->allocated;
    items = ((PyListObject *)p)->ob_item;

    printf("[*] Size of the Python List = %zd\n", size);
    printf("[*] Allocated = %zd\n", allocated);

    for (i = 0; i < size; i++)
    {
        PyObject *item = items[i];
        printf("Element %zd: %s\n", i, Py_TYPE(item)->tp_name);
        if (PyBytes_Check(item))
            print_python_bytes(item);  // Use print_python_bytes for bytes objects
    }
}

