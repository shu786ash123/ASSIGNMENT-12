
#include<stdio.h>
void printn(int);
int main()
{
       int x;
       printf("enter a number: \n");
       scanf("%d",&x);
       printf(" square of first %d natural number :  \n",x);
       printn(x);
       return 0;
}
void printn(int a)
{
       if(a>0)
       {
              printn(a-1);
              printf("%d ",a*a);
       }
}
