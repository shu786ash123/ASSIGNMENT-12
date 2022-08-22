#include<stdio.h>
void reverse(int);
int main()
{
       int x;
       printf("ENTER A NUMBER:  \n");
       scanf("%d",&x);
       printf("REVERSE OF %d IS:  \n",x);
       reverse(x);
       return 0;

}
void reverse(int n)
{
       int a;
       if(n>0)
       {
              a = n%10;
              printf("%d",a);
       reverse(n/10);
}}
