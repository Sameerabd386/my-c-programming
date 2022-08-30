#include<stdio.h>
int main()
{
  int n,r,sum=0,temp;
  printf("enter n value:");
  scanf("%d", &n);
  {
    while(n>0)
	{
	  r = n%10;
	  sum = sum*10+r;
	  n = n/10;
	}
	   n = temp;
	    if(n == sum)
		  printf("palindrome");
		else
		printf("not palindrome");
	}
}
  
