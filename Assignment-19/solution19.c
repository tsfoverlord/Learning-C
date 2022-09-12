#include <stdio.h>
#include <stdlib.h>
int main(){

    //casting malloc's return value = bad practice    
    char *ptr = malloc(4 * sizeof(char)); 
    if(ptr == NULL){
        printf("Failed to allocate memory");
        return 1;
    }
    printf("Memory allocated successfully");
    free(ptr);
    return 0;
}