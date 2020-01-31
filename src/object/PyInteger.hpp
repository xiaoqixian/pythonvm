#ifndef PY_INTEGER_HPP
#define PY_INTEGER_HPP
#include "PyObject.hpp"
class PyInteger:public PyObject {
    private:
        int _value;
    
    public:
        PyInteger(int x);
        int value() {
            return _value;
        }
};

#endif
