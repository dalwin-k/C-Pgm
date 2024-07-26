#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int sd_num(int*arr,int n){
int sum = 0;
float mean;
int x;
float sd;
int s=0;
int i;
 for(i=0;i<n;i++){
        sum = sum + arr[i];
    }
    mean = sum/n;
for(i=0;i<n;i++){
        x= (arr[i]-mean)*(arr[i]-mean);
        s= s+x;

    }
    sd=sqrt(s/n);
    return sd;

    
    }
    int main() {
    int n;
    int i;
    int *array;
    float value;
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
    value= sd_num(array,n);{
    printf("\nsd is %f",value);}
}