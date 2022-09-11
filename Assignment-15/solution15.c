#include <stdio.h>
int main(){
    int var = 0;
    int *ptr = &var;
    
    printf("The value of int variable is: %d\n", var);
    printf("The value of the pointer to the int variable is: %d\n", ptr);
    printf("The memory address of the int variable is: %d\n", ptr);
    printf("The value held at the memory location that the pointer is pointing to is: %d\n", var);

    return 0;
}


