#include<stdio.h>
int main()
{
    int x,y,z,k,q;
    printf("Enter the value of X:");
    scanf("%d",&x);
    printf("Enter the value of Y:");
    scanf("%d",&y);
    printf("Enter the value of Z:");
    scanf("%d",&z);
    while(1)
    {


    printf("\nEnter the required operation:");
    scanf("%d",&q);
    switch(q)
    {
    case 1:
        k=x+y*z/4%2-1;
        printf("k=%d",k);
        break;
    case 2:
        k=x%y+z*z;
        printf("k=%d",k);
        break;
    case 3:
        k=x*x-y/z;
        printf("k=%d",k);
        break;
    case 4:
        k=x+y/z-y;
        printf("k=%d",k);
        break;
    case 5:
        k=x+y-(x=y);
        printf("k=%d",k);
        break;
    case 6:
        k=x+y-(x=y);
        printf("k=%d",k);
        break;
    default:
        printf("Entered value is wrong");
        break;
    }
    if (q>6)
    {
        break;
    }
    }
    return 0;
}
