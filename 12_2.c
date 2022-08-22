
#include<stdio.h>
void printn(int);
int main()
{
       int x;
       printf("enter a number: \n");
       scanf("%d",&x);
       printf(" first reverse %d natural number :  \n",x);
       printn(x);
       return 0;
}
void printn(int a)
{
       if(a>0)
       {
               printf("%d ",a);
              printn(a-1);

       }
}
