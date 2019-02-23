#include <stdio.h>
#include <stdlib.h>
#include <err.h>
int main(int argc, char *argv[])
{
    int *p = (int*)malloc(sizeof(int)*4);
    if (NULL == p) {
        err(EXIT_FAILURE, "can not malloc");
    }
    p[0] = 4;
    p[1] = 88;
    printf("%p\n", &p[0]);
    printf("%p\n", &p[1]);
    printf("%p\n", &p[2]);
    printf("%p\n", &p[3]);
    
    free(p);
    printf("%p\n", &p);
    exit(EXIT_SUCCESS);
}
