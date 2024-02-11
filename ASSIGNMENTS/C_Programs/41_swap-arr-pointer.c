#include<stdio.h>

int main(){
    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[5] = {6, 7, 8, 9, 10};
    int *ptr1 = &arr1[0];
    int *ptr2 = &arr2[0];
    for(int i = 0; i < 5; i++){
        int temp = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = temp;
        ptr1++;
        ptr2++;
    }
    for(int i = 0; i < 5; i++){
        printf("%d ", *(ptr1 + i));
    }
    return 0;
}