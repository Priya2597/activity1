#include <stdio.h>
#include <stdlib.h>

int sum(float,int);
int multi(float,int);

void main()
{
    float a=10;
    int b=20;
    int c;
    int d;
    printf("Enter c:");
    scanf("%d",&c);

    int (*fptr)(float,int);
    if(c==1)
        fptr=sum;
    else
        fptr=multi;
    d=fptr(a,b);
    printf("%d",d);
}

int sum(float x,int y)
{
    return x+y;

}
int multi(float x,int y)
{
    return x*y;

}

