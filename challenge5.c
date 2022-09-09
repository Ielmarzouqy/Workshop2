#include<stdio.h>
#include<stdlib.h>

int main(){
int i;
for(int i=1;i<101;i++) 
{
    
    if (i%3==0)
  {
    //Fizz
    printf("Fizz");
  }
    else if (i%5==0)
  {
    //Buzz
    printf("Buzz");
  }
  else 
  {
     printf(" \n%d", i);
  }
}
    return 0;
}