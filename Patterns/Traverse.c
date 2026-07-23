#include<stdio.h>
int main(){
    int size;
    int sum=0;
    
    printf("Enter array size :");
    scanf("%d",&size);
    int arr[size];
    printf("Enter %d element :",size);
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int min=arr[0];
    int max=arr[0];
    int ele;
    int flag=0;
    printf("Enter a element to be search :");
    scanf("%d",&ele);
    printf("Array Elements :");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
        sum+=arr[i];
        if(max<=arr[i]){
            max=arr[i];
        }
        if(min>=arr[i]){
            min=arr[i];
        }
        if(ele==arr[i]){
            printf("\nElement Found at %d position :",i+1);
            flag=1;
            break;
        }
        
    }
    if(flag==0){
            printf("Element not found");
        }
    printf("\nMaximum Element is :%d",max);
    printf("\nTotal sum is :%d",sum);
    printf("\nSmallest element is :%d",min);
    //sort
    for(int i=0;i<size;i++){
        for(int j=0;j<size-i-1;j++){
            if(arr[j]<arr[j+1]){
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("\nsorted array :");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}