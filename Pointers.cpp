#include <stdio.h>
int main() {

    int array[7] = {12, 07, 20, 07, 24, 94, 46};
    int *ptr;
    int i;
    
    ptr = array;
    printf("accessing array elements using pointers:\n");
    for(i = 0; i < 7; i++)
    {
    	printf("elements %d = %d\n", i, *(ptr + i));
    }
    
    return 0;
}
