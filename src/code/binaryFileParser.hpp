#ifndef BINARU_FILE_PARSER_HPP
#define BINATY_FILE_PARSER_HPP
#include <iostream>
#include "util/bufferedInputStream.hpp"
#include "util/arrayList.hpp"
#include "object/PyObject.hpp"
#include "object/PyInteger.hpp"
#include "object/PyString.hpp"
#include "code/codeObject.hpp"

class BinaryFileParser {
    private:
        int cur;
        ArrayList<PyString*> _string_table; //to save the strings so we can unread.
        BufferedInputStream* file_stream;
        
    public:
        BinaryFileParser(BufferedInputStream* stream);
        CodeObject* parse();
        PyString* get_byte_codes();
        PyString* get_no_table();
        int get_int();
        PyString* get_string();
        PyString* get_name();
        PyString* get_file_name();

        ArrayList<PyObject*>* get_consts();
        ArrayList<PyObject*>* get_names();
        ArrayList<PyObject*>* get_var_names();
        ArrayList<PyObject*>* get_free_vars();
        ArrayList<PyObject*>* get_cell_vars();
        ArrayList<PyObject*>* get_tuple();
        /*CodeObject* parse() {
            int magic_number = file_stream->read_int();
            printf("magic_number is 0x%x\n",magic_number);
            int moddate = file_stream->read_int();
            printf("moddate is 0x%x\n", moddate);

            char object_type = file_stream->read();
            return NULL;
        }*/
        CodeObject* get_code_object();
};

#endif
