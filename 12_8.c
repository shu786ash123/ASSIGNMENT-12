#include<stdio.h>
void dtobinary(int);
int main()
{
       int x;
       printf("ENTER A NUMBER: \n");
       scanf("%d",&x);
      dtobinary(x);
       return 0;
}
void dtobinary(int n)
{
       if(n>0)
              dtobinary(n/2);
              printf("%d",n%2);
}
