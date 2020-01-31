#include "interpreter.hpp"
#include "object/PyString.hpp"
#include <string.h>

void Interpreter::run(CodeObject* codes) {
    int pc = 0;
    int code_length = codes->_bytecodes->length();

    ArrayList<PyObject*>* _stack = new ArrayList<PyObject*>(codes->_stack_size);
    ArrayList<PyObject*>* _consts = codes->_consts;

    while (pc < code_length) {
        unsigned char op_code = codes->_bytecodes->value()[pc++];
        bool has_argument = (op_code & 0xFF) >= ByteCode::HAVE_ARGUMENT;
        int op_arg = -1;

        if (has_argument) {
            int byte1 = (code->_bytecodes->value()[pc++] & 0xFF);
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
                _stack->add(v->add(w));
                break;
            case ByteCode::RETURN_VALUE:
                _stack->pop();
                break;
            default:
                printf("Error:unrecognized bytecode %d\n",op_code);
        }
    }
}
