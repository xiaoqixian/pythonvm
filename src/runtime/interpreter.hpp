#ifndef INTERPRETER_HPP
#define INTERPRETER_HPP

#include "code/bytecode.hpp"
#include "code/codeObject.hpp"
#include "object/PyInteger.hpp"

class Interpreter {
    enum Status {
        IS_OK,
        IS_BREAK,
        IS_CONTINUE,
        IS_EXCEPTION,
        IS_RETURN,
        IS_YIELD,
    };

    public:
        void run(CodeObject* codes);
};

#endif
