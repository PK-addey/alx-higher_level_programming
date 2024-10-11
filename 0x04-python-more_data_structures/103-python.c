#include <Python.h>
#include <stdio.h>

/**
* print_python_list - Prints some basic info about Python lists
* @p: A PyObject list
*/
void print_python_list(PyObject *p)
{
if (!PyList_Check(p)) {
printf("[ERROR] Invalid List Object\n");
return;
}

PyListObject *list = (PyListObject *)p;
Py_ssize_t size = list->ob_base.ob_size;
Py_ssize_t allocated = list->allocated;

printf("[*] Python list info\n");
printf("[*] Size of the Python List = %ld\n", size);
printf("[*] Allocated = %ld\n", allocated);

for (Py_ssize_t i = 0; i < size; i++)
{
PyObject *item = list->ob_item[i];
printf("Element %ld: %s\n", i, item->ob_type->tp_name);
}
}

/**
* print_python_bytes - Prints some basic info about Python bytes objects
* @p: A PyObject bytes object
*/
void print_python_bytes(PyObject *p)
{
if (!PyBytes_Check(p)) {
printf("[ERROR] Invalid Bytes Object\n");
return;
}

PyBytesObject *bytes = (PyBytesObject *)p;
Py_ssize_t size = bytes->ob_base.ob_size;
char *bytes_str = bytes->ob_sval;

printf("[*] Python bytes info\n");
printf("[*] Size of the Python Bytes = %ld\n", size);
printf("[*] Trying string: %s\n", bytes_str);

printf("first %ld bytes: ", (size < 10 ? size : 10));
for (Py_ssize_t i = 0; i < size && i < 10; i++)
{
printf("%02x ", (unsigned char)bytes_str[i]);
}
printf("\n");
}

