// Program to search a randomly generated array given the size and element to be searched
#include <stdio.h>
#include <stdlib.h>

int main()
 {  int length;
    int position;
    printf("enter length");
    scanf("%d",&length);
    int is_found = 0;
    int array[length];
    int element;
     printf("enter elements");
    for (position = 0; position < length; ++position) 
    {  
        array[position] = rand()%100;
    }
    for (position = 0; position < length; ++position) 
    {
        printf("%d ", array[position]);
    } 
    printf("\n");
    printf("enter desired element to search");
    scanf("%d",&element);
    for (position = 0; position < length; ++position)
    {
        if (array[position] == element)
         {
            is_found = 1;
            break;
         }
    }
    printf("%d", (is_found) ? 1 : 0);

    return 0;
}