#include <stdio.h>
int main(){
    int a[5]={1,2,3,4,5};
    int low=0,flag=0;
    int up=sizeof(a) / sizeof(a[0]);
;
    int mid;
    int ele;
    printf("Enter a element:");
    scanf("%d",&ele);
    while(low<=up){
        mid=(low+up)/2;
        if(a[mid]==ele){
            flag=1;
            break;
        }
        if(ele>a[mid]){
            low=mid+1;
        }
        else {
            up=mid-1;
        }
    }
    if(flag==1){
        printf(" Element is found at %d location",mid);
    }
    else{
        printf("\n Element is not found");
    }

}
