#include<stdio.h>
int main(){
    int age;
    scanf("%d", &age);

    if(age > 18){
        printf("you are eligible to vote");
    }
    else{
        printf("you are not eligble to vote");
    }
    return 0;
}