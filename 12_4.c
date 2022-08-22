#include<stdio.h>
void printn(int);
int main()
{
       int x;
       printf("enter a number: \n");
       scanf("%d",&x);
       printf(" first %d odd natural number in reverse order  :  \n",x);
       printn(x);
       return 0;
}
void printn(int a)
{
       if(a>0)
       {
              printf("%d ",2*a-1);
               printn(a-1);
       }
}
