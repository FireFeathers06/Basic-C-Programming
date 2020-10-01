/* A simple scanset example */
#include <stdio.h> 

int main(void) 
{ 
	char str[128]; 

	printf("Enter a string: "); 
	scanf("%[A-Z]s", str); //This will only store capital letters 

	printf("You entered: %s\n", str); 

	return 0; 
} 
