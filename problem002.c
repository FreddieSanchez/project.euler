#include <stdio.h>
/* Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be:

1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms. */

int main(void) {
  // do the fib
  int a = 0, b = 1, c = 0, sum = 0;
  while (a+b < 4000000) {
    if ((a+b) % 2 == 0)
      sum += a + b;
    c = a;
    a = b;
    b = c + b ;
  } 
  printf("%d\n",sum);
}
