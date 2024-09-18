#include <Python.h>

/* Function to print information about Python lists */
void print_python_list(PyObject *p) {
    Py_ssize_t i;
    PyObject *item;
    Py_ssize_t size, allocated;

    if (!PyList_Check(p)) {
        fprintf(stderr, "[ERROR] Invalid List Object\n");
        return;
    }

    size = PyList_Size(p);
    allocated = ((PyListObject *)p)->allocated;

    printf("[*] Python list info\n");
    printf("[*] Size of the Python List = %zd\n", size);
    printf("[*] Allocated = %zd\n", allocated);

    for (i = 0; i < size; i++) {
        item = PyList_GetItem(p, i);
        printf("Element %zd: %s\n", i, Py_TYPE(item)->tp_name);
        if (PyBytes_Check(item)) {
            printf("[.] bytes object info\n");
            printf("  size: %zd\n", PyBytes_Size(item));
            printf("  trying string: %s\n", PyBytes_AsString(item));
            printf("  first %zd bytes: ", PyBytes_Size(item) < 10 ? PyBytes_Size(item) : 10);
            for (Py_ssize_t j = 0; j < (PyBytes_Size(item) < 10 ? PyBytes_Size(item) : 10); j++) {
                printf("%02x ", (unsigned char)PyBytes_AsString(item)[j]);
            }
            printf("\n");
        }
    }
}

/* Function to print information about Python bytes objects */
void print_python_bytes(PyObject *p) {
    if (!PyBytes_Check(p)) {
        fprintf(stderr, "[ERROR] Invalid Bytes Object\n");
        return;
    }

    printf("[.] bytes object info\n");
    printf("  size: %zd\n", PyBytes_Size(p));
    printf("  trying string: %s\n", PyBytes_AsString(p));
    printf("  first %zd bytes: ", PyBytes_Size(p) < 10 ? PyBytes_Size(p) : 10);
    for (Py_ssize_t i = 0; i < (PyBytes_Size(p) < 10 ? PyBytes_Size(p) : 10); i++) {
        printf("%02x ", (unsigned char)PyBytes_AsString(p)[i]);
    }
    printf("\n");
}

