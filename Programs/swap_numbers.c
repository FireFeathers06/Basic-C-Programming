/** Contributor : Vivek Bhardwaj
 * swapping using X-OR
 **/

#include<stdio.h>  

void swap(int *a,int *b){
 *a^=*b;  
 *b^=*a;
 *a^=*b;
}
 int main()    
{    
int a=10, b=20;      
printf("a=%d b=%d",a,b);      
swap(&a,&b);  
printf("\nAfter swapping  a=%d b=%d",a,b);    
return 0;  
}  
