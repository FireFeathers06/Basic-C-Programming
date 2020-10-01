#include<stdio.h>
#define PI 3.14
float areac(float);
int main()
{
    float r;
    printf("Enter the radius of Circle:\n");
    scanf("%f",&r);
    printf("The Area of the circle with radius %f is: %f",r,areac(r));
    return 0;
}
float areac(float r)
{
    float z;
    z=PI*r*r;
    return z;
}
