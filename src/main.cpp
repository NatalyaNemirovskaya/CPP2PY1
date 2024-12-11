#include <pybind11/pybind11.h>


int add(int x, int y)
{
    return x + y;
}

namespace py = pybind11;



PYBIND11_MODULE(cpp2py, m)
{
    m.doc() = R"pbdoc(
        Pybind11 test
        -------------
    )pbdoc";

    m.def("add", &add, R"pbdoc(add two numbers)pbdoc");
}
