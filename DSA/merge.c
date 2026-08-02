// #include<stdio.h>
// void merge(int arr[],int low,int mid,int high){
//     int i,j,k;
//     int sizeL=mid-low+1;
//     int sizeR=high-mid;
//     int L[sizeL],R[sizeR];
//     for(i=0;i<sizeL;i++){
//         L[i]=arr[low+i];
//     }
//     for(j=0;j<sizeR;j++){
//         R[j]=arr[mid+1+j];
//     }
//     i=0;
//     j=0;
//     k=low;
//     while(i<sizeL&&j<sizeR){
//         if(L[i]<=R[j]){
//             arr[k]=L[i];
//             i++;
//         }
//         else{
//             arr[k]=R[j];
//             j++;
//         }
//         k++;
//     }
//     while(i<sizeL){
//         arr[k]=L[i];
//         i++;
//         k++;
//     }
//     while(j<sizeR){
//         arr[k]=R[j];
//         j++;
//         k++;
//     }
// }
// void MergeSort(int arr[],int low , int high){
//     if(low<high){
//         int mid=(low+high)/2;
//         MergeSort(arr,low,mid);
//         MergeSort(arr,mid+1,high);
//     merge(arr,low,mid,high);
//     }
// }
// void printarray(int arr[],int size){
//     for(int i=0;i<size;i++){
//     printf("%d ",arr[i]);
//     }
// }
// int main(){
//     int arr[5]={10,34,23,45,12};
//     int high=sizeof(arr)/sizeof(arr[0]);
//     int low=0;
//     printf("Original Array :");
//     printarray(arr,high);
//     MergeSort(arr,low,high-1);
//     printf("Sorted Array :");
//     printarray(arr,high);
// }
#include<stdio.h>
void merge(int arr[],int low,int mid,int high){
    int i,j,k;
    int sizeL=mid-low+1;
    int sizeR=high-mid;
    int L[sizeL],R[sizeR];
    for(i=0;i<sizeL;i++){
        L[i]=arr[i+low];
    }
    for(j=0;j<sizeR;j++){
        R[j]=arr[mid+1+j];
    }
    i=0,j=0,k=low;
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
void MergeSort(int arr[],int low,int high){
    if(low<high){
        int mid=(low+high)/2;
        MergeSort(arr,low,mid);
        MergeSort(arr,mid+1,high);
        merge(arr,low,mid,high);
    }
}
void printarray(int arr[],int size){
    for(int i=0;i<size;i++){
       printf("%d ",arr[i]);
    }
}
int main(){
    int arr[5]={10,23,45,32,23};
    printf("Original array :");
    printarray(arr,5);
    printf("\nSorted array :");
    MergeSort(arr,0,4);
    printarray(arr,5);
}