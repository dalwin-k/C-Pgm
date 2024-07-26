#include <stdio.h>
int main(){
    int t;
    int d;
    int vel;
    int acc;
    printf(" enter time:");
scanf("%d",&t);
int *ptr1 =&t;
t=t*60*60;
printf(" enter distance:");
scanf("%d",&d);
int *ptr2 =&d;
d=d*1000;
vel=d/t;
acc=vel/t;
printf(" velocity=%d\n acceleration=%d", vel,acc);
return 0;
}