#include <stdio.h>
void printarray(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}
void getelement(int arr[],int size){
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }   
}
void InsertionSort(int arr[],int size){
    int key;
    for(int i=1;i<size;i++){
        key=arr[i];
        int j;
        for(j=i-1;j>=0&&arr[j]>key;j--){
            arr[j+1]=arr[j];
        }
        arr[j+1]=key;
    }
}

int main(){
    int size;
    printf("Entre a size of array :");
    scanf("%d",&size);
    int arr[size];
    printf("Enter array elements :");
    getelement(arr,size);
    printf("Array Elements are :");
    printarray(arr,size);
    printf("\n insertion sort :");
    InsertionSort(arr,size);
    printarray(arr,size);
}