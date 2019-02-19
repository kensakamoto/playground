#include <stdio.h>
#include <malloc/malloc.h>
#include <stdlib.h>

int main( void ) {
    int* array;

    /* malloc returns the allocated memory starting address
     * Notice that its argument is the byte size, elements count multiplied
     * by element size */
    array = malloc( 10 * sizeof( int ));
    printf("array = %p\n", array);
    printf("array = %d\n", array);
    /* actions on array are performed here */

    free( array ); /* now the related memory region is deallocated */
    return 0;
}

