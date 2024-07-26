#include <stdio.h>

int *add_Value(int*a,int*b){
    int *r_ptr;
    *r_ptr=*a+*b;
    return r_ptr;

}



int main(){
    int num1=10;
    int num2=30;
    int result=0;
    int *ptr1=&num1;
    int *ptr2=&num2;
   int *ptr_result=&result;
   ptr_result=add_Value(ptr1,ptr2);
    printf("Value after function call%d\n",*ptr_result);
    return 0;
}
 