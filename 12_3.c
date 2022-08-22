#include<stdio.h>
void printn(int);
int main()
{
       int x;
       printf("enter a number: \n");
       scanf("%d",&x);
       printf(" first %d odd natural number  :  \n",x);
       printn(x);
       return 0;
}
void printn(int a)
{
       if(a>0)
       {
              printn(a-1);
              printf("%d ",2*a-1);
       }
}

