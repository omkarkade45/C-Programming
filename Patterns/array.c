#include <stdio.h>
int main(){
int arr[5]={1,2,3,4,5};
int i=0;
int ele;
printf("Enter a Element :");
scanf("%d",&ele);
while(i<5){
if(arr[i]==ele){
printf("\n Element found at %d position",i);
break;
}
i++;
}
if(i>4){
printf("\n Element not found ");
}
}
