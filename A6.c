#include<stdio.h>
struct emp{
    char name[50];
    char de[50];
};

int main(){
    FILE *f;
    f=fopen("data.txt","w");
    if(f==NULL){
        printf("File doesn't exists.....\n");
    }

    int no;
    struct emp a[1000];
    printf("Enter total number of employees's : ");
    scanf("%d", &no);

    for(int i=0; i<no; i++){
        printf("Employee No : %d \n", i+1);
        printf("Enter name :");
        fflush(stdin);
        gets(a[i].name);
        printf("Enter designation :");
        fflush(stdin);
        gets(a[i].de);

        fprintf(f, "Employee No : %d \n", i+1);
        fputs(a[i].name, f);
        fprintf(f, "\n");
        fputs(a[i].de, f);
        fprintf(f, "\n");
        fprintf(f, "\n");

    }
    printf("Data Entered in data.txt\n");
    fclose(f);
    return 0;
}