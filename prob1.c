#include<stdio.h>
int main(){
    int i = 1024;
    for (; i; i >>= 1) //right shoft << is happening
        printf("hello\n");
    return 0;
}