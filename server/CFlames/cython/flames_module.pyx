from libcpp.string cimport string

cdef extern from "flames.hpp" nogil:
    cdef string flames(string a,string b)

cpdef string PyFlames(string a,string b):
    cdef string relationship
    with nogil:
        relationship = flames(a,b)
    return relationship

