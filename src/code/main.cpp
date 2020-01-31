#include "bufferedInputStream.hpp"
#include <stdio.h>
int main() {
    BufferedInputStream stream("hello.pyc");
    printf("magic number is 0x % x\n",stream.read_int());
    return 0;
}
