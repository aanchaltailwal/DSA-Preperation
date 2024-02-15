#include <stdio.h>

int main() {
    
    int arr[][3]={{1,2,3}, {4,5,6},{7,8,9}};
    printf("%d\t%d", arr[1][1], arr[0][4]);
    printf("\n%p\t%p", arr, arr + 1);
    
    
}
