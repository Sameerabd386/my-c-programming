#include<stdio.h>
int main()
{
  int arr[5] = {11,22,33,44,55};
  int i,sum=0;
  for(i=0; i<5; i++)
   {
   sum = sum+arr[i];
   }
   printf("sum: %d\n", sum);
}
