#include "PyInteger.hpp"
//#include "PyObject.hpp"
#include <stdio.h>

PyInteger::PyInteger(int x) {
    _value = x;
}

/*void PyInteger::print() {
    printf("%d",_value);
}

PyObject* PyInteger::add(PyObject* x) {
    return new PyInteger(_value + ((PyInteger*)x)->_value);
}

PyObject* PyInteger::greater(PyObject* x) {
    if (_value > ((PyInteger*)x)->_value) {
        return new PyInteger(1);
    }
    else return new PyInteger(0);
}

PyObject* PyInteger::less(PyObject* x) {
    if (_value < ((PyInteger*)x)->_value) {
         return new PyInteger(1);
    }
    else return new PyInteger(0);
}

PyObject* PyInteger::equal(PyObject* x) {
     if (_value == ((PyInteger*)x)->_value) {
          return new PyInteger(1);
     }   
     else return new PyInteger(0);
 }

PyObject* PyInteger::not_equal(PyObject* x) {
     if (_value != ((PyInteger*)x)->_value) {
          return new PyInteger(1);
     }   
     else return new PyInteger(0);
 }

PyObject* PyInteger::le(PyObject* x) {
     if (_value <= ((PyInteger*)x)->_value) {
          return new PyInteger(1);
     }
     else return new PyInteger(0);
 }

PyObject* PyInteger::ge(PyObject* x) {
     if (_value >= ((PyInteger*)x)->_value) {
          return new PyInteger(1);
     }
     else return new PyInteger(0);
 }*/

