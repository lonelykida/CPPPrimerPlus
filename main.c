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
    printf("sa���ڴ��ַ:%ld\n",&sa);
    printf("bb���ڴ��ַ:%ld\n",&bb);
    printf("sa��a=%d\n",sa.a);
    printf("bb��a=%d\n",bb.a);
}
int main(){
    test();
    return 0;
}