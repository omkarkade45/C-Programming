#include <stdio.h>

// int main()
// {
//     int arr[6]={1,2,3,4,5};
//     int num=0;
//     printf("Enter a Element :");
//     scanf("%d",&num);
//     for(int i=5;i>=0;i--){
//         // if(arr[i]==num){
//         //     printf("\nindex is %d:",i);
//         //
//         arr[i+1]=arr[i];
//     }
//     arr[0]=num;
//     printf("\n Array elements :");
//     for(int j=0;j<6;j++){
//         printf("%d ",arr[j]);
//     }
// }
int main(){
    int arr[5]={1,2,3,4,5};
    int num=0;
    printf("Enter a Element :");
    scanf("%d",&num);
    int pos;
    printf("Enter a position where you want to insert :");
    scanf("%d",&pos);
    for(int i=5;i>=pos;i--){
        arr[i+1]=arr[i];
    }
    arr[pos]=num;
     printf("\n Array elements :");
     for(int j=0;j<6;j++){
       printf("%d ",arr[j]);
    }
}
