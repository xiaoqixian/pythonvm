#include "interpreter.hpp"
#include "object/PyString.hpp"
#include <string.h>

void Interpreter::run(CodeObject* codes) {
    int pc = 0;
    int code_length = codes->_bytecodes->length();//_bytecodes is pystring type

    //use arraylist to represent a stack
    ArrayList<PyObject*>* _stack = new ArrayList<PyObject*>(codes->_stack_size);
    ArrayList<PyObject*>*  _consts = codes->_consts;

    /*while (pc < code_length) {
        unsigned char op_code = codes->_bytecodes->value()[pc++];
        bool has_argument = (op_code & 0xFF) >= ByteCode::HAVE_ARGUMENT;

        int op_arg = -1;
        if (has_argument) {
            int byte1 = (codes->_bytecodes->value()[pc++] & 0xFF);
            op_arg = ((codes->_bytecodes->value()[pc++] & 0xFF) << 8) | byte1;
        }
        PyInteger *lhs, *rhs;
        PyObject *v, *w, *u, *attr;

        switch(op_code) {
            case ByteCode::LOAD_CONST:
                _stack->add(_consts->get(op_arg));
                break;
            case ByteCode::PRINT_ITEM:
                v = _stack->pop();
                v->print();
                break;
            case ByteCode::PRINT_NEWLINE:
                printf("\n");
                break;
            case ByteCode::BINARY_ADD:
                v = _stack->pop();
                w = _stack->pop();
                _stack->add(w->add(v));
                break;
            case ByteCode::RETURN_VALUE:
                _stack->pop();
                break;
            case ByteCode::COMPARE_OP:
                w = _stack->pop();
                v = _stack->pop();

                switch(op_arg) {
                    case ByteCode::GREATER:
                        _stack->add(v->greater(w));
                        break;
                    case ByteCode::LESS:
                        _stack->add(v->less(w));
                        break;
                    case ByteCode::EQUAL:
                        _stack->add(v->equal(w));
                        break;
                    case ByteCode::NOT_EQUAL:
                        _stack->add(v->not_eqaul(w));
                        break;
                    case ByteCode::GREATER_EQUAL:
                        _stack->add(v->ge(w));
                        break;
                    case ByteCode::LESS_EQUAL:
                        _stack->add(v->le(w));
                        break;
                    default:
                        printf("Error:unrecognized op_arg %d\n",op_arg);
                }
                break;

            case ByteCode::POP_JUMP_IF_FALSE:
                v = _stack->pop();
                if (((PyInteger*)v)->value() == 0)
                    pc = op_arg;
                break;

            case ByteCode::JUMP_FORWARD:
                pc += op_arg;
                break;

            default:
                printf("Error:unrecognized byte code %d\n",op_code);
                break;
        }
    }*/
}

