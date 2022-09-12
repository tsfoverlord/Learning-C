#include <stdio.h>
#include <stdlib.h>

struct data {
    int a;
    char b;
    float c;
};
int main(){
    struct data d = {10,'A',0.5};
    printf("Struct member values %d %c %f",d.a,d.b,d.c);
    return 0;
}
