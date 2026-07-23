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
int calculatesum(int arr[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    return sum;
}
int findmax(int arr[],int size){
    int max=arr[0];
    for(int i=0;i<size;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    return max;
}
int findmin(int arr[],int size){
    int min=arr[0];
    for(int i=0;i<size;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    return min;
}
void linearsearch(int arr[],int size){
    int ele;
    int flag=0;
    printf("\nEnter a Element you want to search :");
    scanf("%d",&ele);
    for(int i=0;i<size;i++){
        if(ele==arr[i]){
            printf("Element Present at %d position",i+1);
            flag=1;
            break;
        }
    }
    if(flag==0){
        printf("Element not found");
    }
}
void bublesort(int arr[],int size){
    for(int i=0;i<size;i++){
        for(int j=0;j<size-i-1;j++){
            if(arr[j]<arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
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
    printf("\nThe Sum of Array Elements are :%d",calculatesum(arr,size));
    printf("\nThe Maximum Element is :%d",findmax(arr,size));
    printf("\nThe Minumum Element is :%d",findmin(arr,size));
    printf("\n=== Linear Search ======");
    linearsearch(arr,size);
    printf("\n========== Sorting =========");
    bublesort(arr,size);
    printf("\n Sorted Array :");
    printarray(arr,size);
    return 0;
}