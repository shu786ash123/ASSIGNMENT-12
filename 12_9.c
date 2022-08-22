#include<stdio.h>
void dtooctal(int);
int main()
{
       int x;
       printf("ENTER A NUMBER: \n");
       scanf("%d",&x);
      dtooctal(x);
      return 0;
}
void dtooctal(int n)
{
       if(n>0)
              dtooctal(n/8);
       printf("%d",n%8);
}
