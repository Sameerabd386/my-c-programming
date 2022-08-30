#include<stdio.h>
int main()
{
  int i, n, a=1, b=1, c;
  printf("enter limit:");
  scanf("%d", &n);
  for(i=2; i<=n; i++)
  {	  
    printf("%d \n", a);
	  c = a+b;
	  a = b;
	  b = c;
  }
}
	  
	  
