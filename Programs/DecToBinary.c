//     #include<stdio.h>
//     #include<stdlib.h>

//     int main(){

//     int a[10],n,i;
//     system ("cls");
//     printf("Enter the number to convert: ");
//     scanf("%d",&n);

//     for(i=0;n>0;i++)
//       {
//        a[i]=n%2;
//        n=n/2;
//       }

//     printf("\nBinary of Given Number is=");
//     for(i=i-1;i>=0;i--)
//      {
//        printf("%d",a[i]);
//      }
//     return 0;
//     }
#include <stdio.h>

int main() {
int n;
printf ("Enter the number to be coverted in binary : ");
scanf ("%d", &n);
int rem;
int a[15];
int i = 0;

while(n)
{
    rem = n%2 ;
    n = n/2;
    a[i]= rem;
    i++;
}
for (int j = i - 1; j >=0; j--)
{
    printf("%d", a[j]);
}

return 0;
}
