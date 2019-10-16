    #include <stdio.h>
    #include <stdlib.h>

    int main() {
      int i, n;
      printf("Ten random numbers in [1,100]\n");

      for (i = 1; i <= 10; i++) {
        n = rand() % 100 + 1;
        printf("%d\n", n);
      }
      return 0;
    }
