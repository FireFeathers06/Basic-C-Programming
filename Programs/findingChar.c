#include <stdio.h>
#include <conio.h>

void main()
{
	char sentences[50];
	int i,count=0;
	char find;

	//print dialog to window
	printf("Typing sentences (50 char) : ");
	scanf("%[^\n]",sentences);
	printf("Input char to find (case sensitif) : ");
	scanf("%s",&find);

	//logic for find char in sentences
	for( i=0; sentences[i] != '\0'; i++ ) {
		if(find == sentences[i]) count++;
	}

	//ouput
	if ( count!=0 ) printf("\nThere are total %d charf '%c' from your sentences ! ",count,find);
	else printf ("\nThere is no char that you to find!");

	//let user press any key to close window
	getch();
}
