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
void merge(int arr[],int mid,int low,int high){
    int i,j,k;
    int sizeL=mid-low+1;
    int sizeR=high-mid;
    int L[sizeL],R[sizeR];
    for(i=0;i<sizeL;i++){
        L[i]=arr[low+i];
    }
    for(j=0;j<sizeR;j++){
        R[j]=arr[mid+1+j];
    }
    i=0;
    j=0;
    k=low;
    while(i<sizeL&&j<sizeR){
        if(L[i]<=R[j]){
            arr[k]=L[i];
            i++;
        }
        else{
            arr[k]=R[j];
            j++;
        }
        k++;
    }
    while(i<sizeL){
        arr[k]=L[i];
        i++;
        k++;
    }
    while(j<sizeR){
        arr[k]=R[j];
        j++;
        k++;
    }
}
void MergeSort(int arr[],int low,int high){//arr,0,7
    if(low<high){
    int mid=(low+high)/2;//3
    MergeSort(arr,low,mid);
    MergeSort(arr,mid+1,high);
    merge(arr,mid,low,high);//arr,0,0,1
    }
}

int main(){
    int size;
    printf("Enter a size of array :");
    scanf("%d",&size);
    int arr[size];
    printf("Enter array elements :");//8 3 5 4 7 6 1 2
    getElement(arr,size);
    printf("\nYour array is :");
    printarray(arr,size);
    printf("\n=====Merge Sort =====\n");
    MergeSort(arr,0,size-1);
    printarray(arr,size);
}