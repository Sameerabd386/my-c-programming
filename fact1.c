#include<stdio.h>
int main()
{
    int i,n,num,fact;
   printf("enter n value:");
   scanf("%d", &n);
    fact = 1;
	  for(i=1; i<=n; i++)
	{
      fact = fact*i;
    }
	 printf("%d! = %d\n", num,fact);	  

}	
