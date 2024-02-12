#include<stdio.h>
int main(){
    int a;
    scanf("%d" , &a);

    if(a / 4){
        printf("leap year");
    }
    
    
    elseif (a / 100){
        printf("not an leap year");
    }
    
   
    else{
        printf("HH");
    }
    
    
    return 0;

}