#include<stdio.h>

/*

Program to classify input character as 
> Digit (0-9)
> Small/Lower case alphabet (a-z)
> Capital/Upper case alphabet (A-z)
> Special Character (anything other than above)

+--------------------------------------+
|Sample Inputs |  Sample Outputs       |
+--------------------------------------+
| 9            |  digit                |
| x            |  Alphabet small case  |
| R            |  Alphabet capital case|
| #            |  Special character    |
+--------------------------------------+

*/

int main() {

    char ch;
    scanf("%c", &ch);

    // Start checking
    if(ch >= '0' && ch <= '9') printf("digit"); // Check if input character lies between 0 and 9 and print "digit"
    else if(ch >= 'a' && ch <= 'z') printf("Alphabet small case"); // Else check if input character lies between 'a' and 'z' and print "Alphabet small case"
    else if(ch >= 'A' && ch <= 'Z') printf("Alphabet capital case");// Else check if input character lies between 'A' and 'Z" and print "Alphabet capital case"
    else printf("Special Character"); // Else if none of above is true print "Special Character"

    return 0;
}