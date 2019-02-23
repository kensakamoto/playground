#include <stdio.h>
#include <stdlib.h>
#include <err.h>
int
main(int argc, char *argv[])
{
    int *p = (int*)alloca(sizeof(int)*4);
    if (NULL == p) {
        err(EXIT_FAILURE, "can not alloca");
    }
    
    // alloca は、freeしない。
    exit(EXIT_SUCCESS);
}
