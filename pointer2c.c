#include <stdio.h>
#include <stdlib.h>
int sum_of_numbers(int *number, int n)
{
    int sum=0;
    int i=0;
    for(i=0; i<n; i++){
        sum=sum+number[i];
    }
    return sum;
}
int largest(int *number, int n, int *result)
{
    int lar=0;
    int small=1000;
    int i=0;
    for(i=0; i<n; i++){
        if(number[i]>lar){
            lar=number[i];
        }
    
        if(number[i]<small){
            small=number[i];
        }
    }
result[0]=lar;
result[1]=small;

}
int main(){
    int n;
    int * array;
    int value=0;
    int *result=(int*)malloc(8);
    printf("enter the number of elements:");
    scanf("%d",&n);
    array=(int*)malloc(n*sizeof(int));
    if (array== NULL){
        printf("memory allocation failed\n");
        return 1;
    }  
    for (int i=0; i<n ;i++){
        array[i]=i+1;
    }  
    printf(" array elements :");
    for (int i=0;i<n; i++){
    printf("%d", array[i]);
    }
    value= sum_of_numbers(array,n);
    printf("sum of the array:%d",value);
    largest(array,n, result);
    printf(" largest and smallest:%d-%d",result[0],result[1]);
    return 0;

    }