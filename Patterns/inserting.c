#include <stdio.h>

// int main()
// {
//     int arr[6]={1,2,3,4,5};
//     int num=0;
//     printf("Enter a Element :");
//     scanf("%d",&num);
//     for(int i=5;i>=0;i--){
//         // if(arr[i]==num){
//         //     printf("\nindex is %d:",i);
//         //
//         arr[i+1]=arr[i];
//     }
//     arr[0]=num;
//     printf("\n Array elements :");
//     for(int j=0;j<6;j++){
//         printf("%d ",arr[j]);
//     }
// }
#include<stdio.h>

int main()
{
    int arr[6] = {1,2,3,4,5};
    int size = 5;
    int num, pos;

    printf("Enter an element: ");
    scanf("%d", &num);

    printf("Enter position (0-5): ");
    scanf("%d", &pos);

    if(pos < 0 || pos > size)
    {
        printf("Invalid Position");
        return 0;
    }

    // Shift elements to the right
    for(int i = size; i > pos; i--)
    {
        arr[i] = arr[i-1];
    }

    // Insert element
    arr[pos] = num;
    size++;

    printf("\nArray Elements:\n");

    for(int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}