#include<stdio.h>

int main(){
    int i,j;
    for(i=10; i>=6; i--){
        for(j=i; j<=10; j++){
            printf("%d ", i*i);
        }
        printf("\n");
    }
    return 0;
}