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
void SelectionSort(int arr[],int size){
    int inx;
    for(int i=0;i<size-1;i++){
        inx=i;
        for(int j=i+1;j<size;j++){
            if(arr[inx]>arr[j]){
                inx=j;
            }
            int temp=arr[inx];
            arr[inx]=arr[i];
            arr[i]=temp;
        }
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
    printf("\nSelection sort ..............");
    printf("\nYour array is :");
    SelectionSort(arr,size);
    printarray(arr,size);

}