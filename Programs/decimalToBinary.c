#include<stdio.h>    
#include<stdlib.h>  

int main(){  
    //Declared Variables
    int a[10],n,i;  

    //Scanning the number
    printf("Enter the number to convert: ");    
    scanf("%d",&n);    
    
    i=0;
    while(n>0)
    {
	//Storing digits in array
    	a[i]=n%2;
	n/=2;
	i++;
    }

    //Printing the number
    printf("\nBinary of Given Number is=");    
    for(i=i-1;i>=0;i--){    
        printf("%d",a[i]);    
    }  
    printf("\n");

return 0;  
}  
