#include<stdio.h>
int main()
{
  int i,n,temp,r,fact,sum=0;
  printf("enter n value:");
  scanf("%d", &n);
     while(n>0)
	 {
	    r = n%10;
		fact = 1;
		for(i=r; i>=1; i--)
		{
		  fact = fact*i;
		}
		  sum = sum+fact;
		  n = n/10;
	}
	   n = temp;
	    if(n == sum)
		printf("strong number");
            else
                printf("not strong number");
}	  
