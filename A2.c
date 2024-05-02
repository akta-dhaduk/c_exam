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
    for(int i=0; i<len; i++){
        if(arr[0]>arr[i]){
            arr[0]=arr[i];
        }
    }
    printf("Smallest element in array is %d\n",arr[0]);
    return 0;
}