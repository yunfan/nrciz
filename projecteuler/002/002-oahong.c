/*
  http://projecteuler.net/index.php?section=problems&id=2
  Each new term in the Fibonacci sequence is generated by adding the previous two terms.
  By starting with 1 and 2, the first 10 terms will be:

  1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

  Find the sum of all the even-valued terms in the sequence which do not exceed four million.
 */

#include <stdio.h>
#define MAX 4000000

int fib(int n)
{
  if( n == 0) return 0;
  if( n == 1) return 1;
  return fib(n-1) + fib(n-2);
}

int main()
{
  int f = 0, sum= 0, m = 1;
  for(; f < MAX; m++) {
    if((f=fib(m))%2 == 0)
      sum+=f;
    printf("%8d", f);
  }
  printf("\nsum = %i\n", sum);
  return 0;
}
