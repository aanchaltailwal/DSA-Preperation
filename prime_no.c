#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    
    for (int i=2; i>=n; i++){      

        int div = 1;
        for (int j=2; j*j<=i; j++){
            if (i%j == 0) div++;

        }
        if(div==1) printf("%d\t", i);

        

    return 0;
}