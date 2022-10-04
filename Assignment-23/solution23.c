#include <stdio.h>
struct temp {
 int x;
};

int main(){
    struct temp test;
    struct temp *ptr;
    ptr = &test;
    test.x = 10;
    printf("%d\n",test.x);
    (*ptr).x = 20;
    printf("%d\n", (*ptr).x);
    ptr -> x = 30;
    printf("%d\n", ptr->x);
    return 0;
}