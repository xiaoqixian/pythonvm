#ifndef PY_STRING_HPP
#define PY_STRING_HPP

#include "PyObject.hpp"
class PyString:public PyObject {
    private:
        char *_value;
        int _length;

    public:
        PyString(const char *x);
        PyString(const char *x,const int length);

        const char *value() {return _value;}
        int length() {return _length;}

};

#endif
