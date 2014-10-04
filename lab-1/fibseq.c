#include <stdio.h>

extern int fibonacci(int x);
extern int fibonacci_non(int x);

int main(int argc, char **argv)
{
  int number=0;
  int result=0;

  scanf("%d",&number);
  result = fibonacci_non(number);   
  printf("The fibonacci sequence at %d is: %d\n", number, result);
}

