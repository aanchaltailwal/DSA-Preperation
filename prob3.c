#include<stdio.h>
int main(){
    int i = -5;
    while(i<=5){
        if(i>=0)
            break;
        else{
            i++;
            continue; //aftr cnt it will go up and dc till 0 then break
        }
        printf("Aanchal");
    }
}
// 0 times it wil print 