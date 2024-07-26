#include <stdio.h>

int main(){
    char arr[]= {1, 2, 3, 4,5};
    char *arrptr= arr;
    for(char i=0;i<5; i++){
        printf("arr[%d]= %d, address = %p\n", i, *(arrptr + i),(arrptr +i));
    }

}