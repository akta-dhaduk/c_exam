#include<stdio.h>

int main(){
    int len;
    printf("Enter size of array : ");
    scanf("%d",&len);

    printf("Enter array elements :\n");
    int arr[len];
    for(int i=0; i<len; i++){
        printf("arr[%d] = ",i);
        scanf("%d", &arr[i]);
    }

    int *p;
    p=&arr[0];
        printf("Suqare of each elements :\n");
    for(int i=0; i<len; i++){
        printf("%d", *(p+i) * *(p+i));
        if(i<len-1){
        printf(", ");

        }
    }
    // printf("Smallest element in array is %d\n",arr[0]);
    return 0;
}