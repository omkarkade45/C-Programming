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
void binarySearch(int arr[],int size){
    int low,high,mid;
    low=0;
    high=size-1;
    int ele;
    int flag=0;
    printf("\nEnter a Element you want to search :");
    scanf("%d",&ele);
    while(low<=high){
        mid=(low+high)/2;
        if(ele==arr[mid]){
            printf("\nElement found at location %d",mid+1);
            flag=1;
            return;
        }
        if(ele>arr[mid]){
            low=mid+1;
        }
        if(ele<arr[mid]){
            high=mid-1;
        }
    }
    if(flag==0){
        printf("\n Element not found");
    }
}
void sort(int arr[],int size){
    int minindex;
    for(int i=0;i<size-1;i++){
        minindex=i;
        for(int j=i+1;j<size;j++){
            if(arr[minindex]>arr[j]){
                minindex=j;
            }
        }
        int temp=arr[minindex];
        arr[minindex]=arr[i];
        arr[i]=temp;
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
    printf("\n Sorting.......");
    sort(arr,size);
    printarray(arr,size);
    printf("\nSearching...........");
    binarySearch(arr,size);
}