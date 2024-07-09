#include <Python.h>

static PyObject * say_hello(PyObject *self, PyObject *args) {
	const char *name;
	if (!PyArg_ParseTuple(args, "s", &name))
		return NULL;
	PySys_WriteStdout("Hello, %s!", name);
	Py_RETURN_NONE;
}

static PyMethodDef HelloWorldMethods[] = {
	{"say_hello", say_hello, METH_VARARGS, "Say hello"},
	{NULL, NULL, 0, NULL}
};

static struct PyModuleDef hello_world_module = {
	PyModuleDef_HEAD_INIT,
	"helloworld",
	NULL,
	-1,
	HelloWorldMethods
};

PyMODINIT_FUNC PyInit_helloworld(void)
{
	return PyModule_Create(&hello_world_module);
}
