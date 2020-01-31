#ifndef BYTE_CODE_HPP
#define BYTE_CODE_HPP

class ByteCode {
    public:
        static const unsigned char BINARY_ADD = 23;
        static const unsigned char PRINT_ITEM = 71;
        static const unsigned char PRINT_NEWLINE = 72;
        static const unsigned char RETURN_VALUE = 83;
        static const unsigned char HAVE_ARGUMENT = 90;
        static const unsigned char LOAD_CONST = 100;
        static const unsigned char COMPARE_OP = 107;
        static const unsigned char JUMP_FORWARD = 110;
        static const unsigned char POP_JUMP_IF_FALSE = 114;
        static const unsigned char POP_JUMP_IF_TRUE = 115;

        enum COMPARE {
            LESS = 0,
            LESS_EQUAL,
            EQUAL,
            NOT_EQUAL,
            GREATER,
            GREATER_EQUAL
};

#endif
