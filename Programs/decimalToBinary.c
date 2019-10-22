#include<stdio.h>    
#include<stdlib.h>  

int main(){  
    //Declared Variables
    int a[10],n,i;  

    //Entering the number
    printf("Enter the number to convert: ");    
    scanf("%d",&n);    
    
    for(i=0;n>0;i++){    
        a[i]=n%2;    
        n=n/2;    
    } 

    //Printing the Number
    printf("\nBinary of Given Number is=");    
    for(i=i-1;i>=0;i--){    
        printf("%d",a[i]);    
    }  
    printf("\n");
      
return 0;  
}  
