#include <stdio.h>
#include <stdlib.h>
int mean_num(int*arr,int n){
int sum = 0;
int mean;
 int i;
 for(i=0;i<n;i++){
        sum = sum + arr[i];
    }
    mean = sum/n;
    return mean;
    }

int median_num(int*arr, int n){
    int median;
    if(n%2==0){
      median= (arr[(n-1)/2]+arr[(n-1)/2+1])/2;
    }
    else{
        median= arr[(n)/2];
    }
return median;
    }



int main() {
    int n;
    int i;
    int *array;
    int value;
    int task;
    printf("enter the number of elements: ");
    scanf("%d",&n);
    array= (int *)malloc(n *sizeof(int));
    for (i=0;i<n;i++){
        array[i]=i+1;
    }
    printf("array elements are: ");
    for(i=0;i<n;i++){
        printf("%d",array[i]);
    }
    value= mean_num(array,n);{
    printf("\nmean is %d",value);}
    task= median_num(array, n);{
        printf("\n median is:%d",task);
    }
return 0;
}