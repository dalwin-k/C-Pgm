#include<stdio.h>
int main()
{
int x,y,z,n;
printf("Enter the value of X:");
scanf("%d",&x);
printf("Enter the value of Y");
scanf("%d",&y);
while(1)
{

printf("Enter the value of n ");
scanf("%d",&n);
switch(n)
{
case(1):
    z=x<y;
    break;
case(2):
    z=x>y;
    break;
case(3):
    z=x<=y;
    break;
case(4):
    z=(x*x-y)>(y*y-x);
    break;
case(5):
    z=(x*x*x)<(y*x*x);
    break;
case(6):
    z=((x*y)!=(y*x));
    break;
case(7):
    z=((x*y)==(y*x));
    break;
default:
    goto ss;

}
printf("%s",z?"True\n":"False\n");
}
ss:
return 0;

}
