#include <stdio.h>
int main(){
int n;
int count=0;
int num;
printf(" enter the number:");
scanf("%d",&n);
int *ptr =&n;
int x=n;
while(x!=0){
   x= x/10;
   count=count+1;
}
for( int i=0; i< count;i++){
num= n%10;
n=n/10;
printf("%d\n",num);
}
}