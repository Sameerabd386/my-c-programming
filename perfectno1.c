#include<stdio.h>
int main()
{
  int n,i,sum=0;
   printf("enter n value:");
   scanf("%d", &n);
     for(i=1; i<n; i++)
    {
       if(n%1 == 0)
        {
          sum = sum+i;
        }
    }
       if(n = sum)
        printf("perfect number");
       else
        printf("not perfect");
}		
