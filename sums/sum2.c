#include<stdio.h>
int main()
{
  int n,i, sum=0;
  printf("enter n value :");
  scanf("%d",&n);
  for(i=1, i<=n; i++;)
    sum = sum+i;
	printf("sum of first %d numbers is : %d",n,sum);
	}
