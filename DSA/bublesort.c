#include <stdio.h>
void printarray(int arr[],int size){
    int i;
    for(i=0;i<size;i++){
        printf(" %d ",arr[i]);
    }
}
void bublesort(int arr[],int size){
    for(int i=0;i<size;i++){
        for(int j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
   
}
int main(){
    int arr[5]={5,2,6,4,3};
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("Original Array :");
    printarray(arr,size);
    printf("\n");
    bublesort(arr,size);
    printf("Sorted Array :");
    printarray(arr,size);
}