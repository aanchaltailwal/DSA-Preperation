#include <stdio.h>

int main() {
    
   // int arr[][3]={{1,2,3}, {4,5,6},{7,8,9}};
    //printf("%d\t%d", arr[1][1], arr[0][4]);
    //printf("\n%p\t%p", arr, arr + 1);
    //printf("\n")//
    
    //int arr[1]= {1,2,3,5,6};
    //int arr[2]= {6,7,8};
    //int arr[3]= {9,10,11,12};

    //int *p1 = arr1, *p2 = arr2, *p3 = arr3;
    //int *p = {p1, p2, p3};
    //int **ptr = p;
    //int ***ptr = &ptr; 

    //printf("\n%d",*(*((*pptr)+2)+3)); //

    char str[4];
    str[0] = 'A'; str[1] = 'B'; str[2] = 'C'; str[3] = 'D'; //whole string
    printf("%s", str);


//char & char pointer
    char *cptr = str;
    printf("\n%p\t%c", cptr, *cptr);     //ABCD and its addresss 

    return 0;
}
//