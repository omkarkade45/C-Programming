#include<stdio.h>
void swap(int*a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void GetArray(int arr[],int size){
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }  
}
void PrintArray(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}
int partition(int arr[],int low,int high){
    int pvtIdx=arr[high];
    int i=low-1;
    int j;
    for(int j=low;j<high;j++){
        if(pvtIdx>=arr[j]){
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    i++;
    swap(&arr[i],&arr[high]);
    return i;
}
void QuickSort(int arr[],int low,int high){
    if(low<high){
        int pvtIdx=partition(arr,low,high);
        QuickSort(arr,low,pvtIdx-1);
        QuickSort(arr,pvtIdx+1,high);
    }
}
int main(){
    int size;
    printf("Enter a Size of Arry :");
    scanf("%d",&size);
    int arr[size];
    printf("Enter Array Elements : ");
    GetArray(arr,size);
    printf("\nOriginal Array is :");
    PrintArray(arr,size);
    printf("\nSorted Array is :");
    QuickSort(arr,0,size-1);
    PrintArray(arr,size);
}