#include <stdio.h>
#include <stdlib.h>
#include <err.h>
int
main(int argc, char *argv[])
{
    int *p = (int*)calloc(4, sizeof(int));
    if (NULL == p) {
        err(EXIT_FAILURE, "can not calloc");
    }
    p[0] = 4;
    p[1] = 88;
    printf("%p\n", &p);
    printf("%p\n", &p[1]);
    free(p);
    exit(EXIT_SUCCESS);
}
