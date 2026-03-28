#include <stdio.h>

int main() {
	int array[7] = {10, 20, 30, 40, 50, 60, 70};
	int i;
	
	printf("elements of the array are:\n");
	
	for(i = 0; i < 7; i++) {
	    printf("array[%d] = %d\n", i, array[i]); 
	}
	return 0;
}
