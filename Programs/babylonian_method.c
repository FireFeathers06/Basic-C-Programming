#include <stdio.h>

void main()
{
    int k;
    printf("Enter number to take root of: ");
    scanf("%d", &k);

    double an = k/2;

    int n = 100;
    while(n--)
	an = (an/2)+(k/(2*an));

    printf("Sqrt of %d is: %lf", k, an);
}
