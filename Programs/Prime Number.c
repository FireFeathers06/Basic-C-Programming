#include <stdio.h>
#include <math.h>

int main()
{
  int n, i, m, flag = 0;
  printf("Enter the number to check prime: ");
  scanf("%d", &n);
  if (n < 2)
  {
    printf("Please enter a number larger than 1\n");
    flag = 1;
  }
  // only have to go to square root of the number, not n/2
  m = sqrt(n);
  for (i = 2; i <= m; i++)
  {
    if (n % i == 0)
    {
      printf("Number is not prime\n");
      flag = 1;
      break;
    }
  }
  if (flag == 0)
    printf("Number is prime\n");
  return 0;
}
