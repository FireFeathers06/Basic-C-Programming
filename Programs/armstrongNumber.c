/*

Armstrong number is a number that is equal to the sum of the nth power of the digits where n is the number of digits. For example 0, 1, 153, 370, 371, 407 and 1634 are the Armstrong numbers.

*/


#include<stdio.h>  
#include<math.h>
 int main()    
{    
int n,r,sum=0,temp,d=0; // d is the number of digits   
printf("enter the number=");    
scanf("%d",&n);    
temp=n;
while(temp>0)
{
 d++;
 temp=temp/10;
}
temp=n;
while(n>0)    
{    
r=n%10;    
sum=sum+(pow(r,d)); //using pow() which is a function of math.h
n=n/10;    
}    
if(temp==sum)    
printf("armstrong  number ");    
else    
printf("not armstrong number");    
return 0;  
} 
