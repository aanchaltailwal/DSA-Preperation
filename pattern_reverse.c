#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    for (int rn = 1; rn<=n; rn ++){
        //spaces------> 2zzzzzz*(n-rn)
        for (int sp = 1; sp<=2*(n-rn); sp++) printf(" ");
        //nums
        for(int num =1; num<=rn; num++) printf("%d", num);
        if(rn != 1){
            for(int sp = 1; sp<=2*rn-3; sp++) printf(" ");
            for(int num = 1; num<=rn; num++) printf("%d", rn-num+1);
        }
    printf("\n");
}
return 0;
}