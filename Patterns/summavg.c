#include <stdio.h>
int main(){
    int size;
    printf("Enter how many subject you have :");
    scanf("%d",&size);
    int arr[size];
    int sum=0;
    printf("Enter %d subject marks:",size);
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    printf("\n%d",sum);
    float avg;
    avg=(float)sum/size;
    printf("\n Average =%.2f",avg);
    return 0;
}