#include<stdio.h>
int main(){
      int x=10,y=20,z;
        z= (x++ * --y);
  printf("final output is: %d\t%d\t%d\n",x,y,z);
}
