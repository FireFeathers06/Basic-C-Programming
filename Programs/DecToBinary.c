#include<stdio.h>
#include<stdlib.h>

int main(){
  //declaring variables
  int a[10],n,i;
  //scanning number to be converted
  printf("Enter the number to convert: ");
  scanf("%d",&n);

  //storing digits in array
  for(i=0;n>0;i++)
  {
    a[i]=n%2;
    n=n/2;
  }

  printf("\nBinary of Given Number is ");
  for(i=i-1;i>=0;i--)
  {
    printf("%d",a[i]);
  }
  printf("\n");
  return 0;
}