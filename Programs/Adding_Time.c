#include<stdio.h>


/*

Program to add two different times in format Hour Minute Seconds

Sample input:
11 59 59
3 2 5

Sample Output:
15 2 4


*/

#include<stdio.h>
int main()

{
    int hr1, min1, sec1, hr2, min2, sec2, hr3 = 0, min3 = 0, sec3 = 0; // ALternative is array
    printf("enter first and second time",hr1, min1, sec1,hr2, min2, sec2);// enter the time which you want to be add
    scanf("%d %d %d ", &hr1, &min1,&sec1,&hr1,&min2,&sec2);
    

    // Converting seconds to minutes of total seconds > 60
    sec3 = sec2 + sec1;
    if (sec3 > 59) {
        sec3 %=60; // The remainder would be the seconds according to clock
        min3++; // Incrementing minute
    }

    // Converting minutes to hours of total minutes > 60
    min3+=min1+min2;
    if(min3>59) {
        min3 %= 60; // The remainder would be the minutes according to clock
        hr3++; // Incrementing hour
    }

    // Reducing hours greater 23 according to the clock
    hr3+=hr1+hr2;
    if (hr3>23) hr3 %= 24; // The remainder would be the actual hour according to clock
    printf("the total time is: %d %d %d", hr3, min3, sec3);
    //printf("%d %d %d", hr3, min3, sec3);

    return 0;
}
