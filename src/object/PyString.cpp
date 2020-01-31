#include "PyString.hpp"
#include <string.h>

PyString::PyString(const char *x) {
    _length = strlen(x);
    _value = new char[_length];
    strcpy(_value,x);
}

PyString::PyString(const char *x,const int length) {
    _value = new char[length];
    _length = length;

    //do not use strcpy here,otherwise there will be two '\0'
    for (int i = 0;i < length;i++) {
        _value[i] = x[i];
    }
}
