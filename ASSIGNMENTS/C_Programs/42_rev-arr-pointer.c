#include<stdio.h>

int main(){
    // take an array input
    int arr[5];
    printf("Enter array elements : ");
    for(int i = 0; i < 5; i++){
        scanf("%d", &arr[i]);
    }
    // reverse the array
    int *ptr1 = &arr[0];
    int *ptr2 = &arr[4];
    while(ptr1 < ptr2){
        int temp = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = temp;
        ptr1++;
        ptr2--;
    }
    for(int i = 0; i < 5; i++){
        printf("%d ", *(ptr1 + i));
    }
    return 0;
}