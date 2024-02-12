#include<stdio.h>

int main() {
    int a;
    scanf("%d", &a);

    if(a % 4 == 0) {
        printf("Leap year");
    }
    else if (a % 100 == 0) {
        printf("Not a leap year");
    }
    else {
        printf("Not a leap year");
    }
    
    return 0;
}
