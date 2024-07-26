#include<stdio.h> 
#include<stdlib.h> 
int main(){
    int n=5;
    int arr[5];
    int i;
    int j;
    int temp;
    printf(" enter the numbers:\n");
for(int i=0;i<5;i++){
    scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i;j++)
    {
         if(arr[j]>arr[j+1])
         {
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
         }
    }
    }
for(i=0;i<n;i++){
    printf("%d",arr[i]);}
}
    