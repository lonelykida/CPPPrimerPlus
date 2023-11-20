#include <stdio.h>
#include <stdlib.h>
typedef struct {
    int a;
    int *b;
}A;
void test(){
    A sa = {1},bb;
    sa.b = (int*)malloc(sizeof(int));
    bb = sa;
    bb.a = 2;
    printf("sa的内存地址:%ld\n",&sa);
    printf("bb的内存地址:%ld\n",&bb);
    printf("sa的a=%d\n",sa.a);
    printf("bb的a=%d\n",bb.a);
}
int main(){
    test();
    return 0;
}