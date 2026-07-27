#include<stdio.h>
void getElement(int arr[],int size){
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
}
void printarray(int arr[],int size){
    for(int i=0;i<size;i++){
    printf("%d ",arr[i]);
    }
}
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int partition(int arr[],int low ,int high){
    int pivot=arr[low];
    int i=low+1;
    int j;
    for(j=low+1;j<=high;j++){
        if(arr[j]<pivot){
            swap(&arr[i],&arr[j]);
            i++;
        }
    }
    swap(&arr[low],&arr[i-1]);
    return i-1;
}
void quickSort(int arr[], int low ,int high){
    if(low<high){
        int pivotindex= partition(arr,low,high);
        quickSort(arr,low,pivotindex-1);
        quickSort(arr,pivotindex+1,high);
    }
}
int main(){
    int size;
    printf("Enter a size of array :");
    scanf("%d",&size);
    int arr[size];
    printf("Enter array elements :");
    getElement(arr,size);
    printf("\nYour array is :");
    printarray(arr,size);
    printf("\n====Quick Sort ====\n");
    quickSort(arr,0,size-1);
    printarray(arr,size);
}