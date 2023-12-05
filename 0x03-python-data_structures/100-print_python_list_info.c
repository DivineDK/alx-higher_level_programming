#include <stdlib.h>
#include <stdio.h>
#include <Python.h>
/**
 * print_python_list_info - Prints basic information about Python lists
 * @p: Pointer to a Python list object
 *
 * This function retrieves and prints information about a Python list:
 * - Size of the list
 * - Allocated memory for the list
 * - Types of elements within the list
 */
void print_python_list_info(PyObject *p)
{
	int elem;

	printf("[*] Size of the Python List = %lu\n", Py_SIZE(p));
	printf("[*] Allocated = %lu\n", ((PyListObject *)p)->allocated);
	for (elem = 0; elem < Py_SIZE(p); elem++)
		printf("Element %d: %s\n", elem, Py_TYPE(PyList_GetItem(p, elem))->tp_name);
}
