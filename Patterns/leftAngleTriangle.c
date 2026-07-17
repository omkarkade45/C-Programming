#include <stdio.h>
int main(){
    int row,i,j;
    printf("Enter Rows :");
    scanf("%d",&row);
    for(i=0;i<row;i++){
        for(j=(row-1);j>=0;j--){
            if(j>i){
                printf(" ");
            }
            else{
                printf("1");
            }
        }
        printf("\n");
    }
}
