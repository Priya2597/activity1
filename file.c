#include <stdio.h>
#include <stdlib.h>

int sum(int,int);
int multi(int,int);

void main()
{
    int a=10;b=20;
    int c;
    int d;
    printf("Enter c:");
    scanf("%d",&c);

    int (*fptr)(int,int);
    if(c==1)
        fptr=sum;
    else
        fptr=multi;
    d=fptr(a,b);
    printf("%d",d);
}

int sum(int x,int y)
{
    return x+y;

}
int multi(int x,int y)
{
    return x*y;

}

