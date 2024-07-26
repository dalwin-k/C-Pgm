#include<stdio.h> 
int main(){
    int arr[5];
    int n=5;
    int min;
    int temp;
    printf(" enter the numbers:\n");
for(int i=0;i<5;i++){
    scanf("%d\n",&arr[i]);
    }
    for(int i=0;i<n-1;i++){
        min=i;
        for(int j=i+1;j<n-1;j++){
            if(arr[j]>arr[min]){

            
            min=j;
            }
        }
    
        temp= arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
    }
    for(int i=0;i<n;i++){
        printf("%d",&arr);
    }
 
    return 0;
}
