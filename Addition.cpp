#include <stdio.h>
int main()
{ 
    int num1, num2, result;
    
    printf("enter first number: ");
    scanf("%d", &num1);
    
    printf("enter second number: ");
    scanf("%d", &num2);
    
    result = num1 + num2;
    
    printf("sum = %d", result);
    
    return 0;
}
