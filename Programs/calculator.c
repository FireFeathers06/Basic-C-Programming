//programme of calculator for the basic four functions(+,-,*,/)
#include<stdio.h>
int main()
{
	float a,b;
	char c;
	printf("Enter the operation you want to perform\n");
	scanf("%c",&c);
	printf("Enter the two operands(NOTE:If performing division add numerator first)\n");
	scanf("%f%f",&a,&b);
	switch(c)
	{
		case '+':
			printf("you opted for addition\nresult: %.2f\n",a+b);
			break;
		case '-':
			printf("you opted for substraction\nresult: %.2f\n",a-b);
                        break;
		case '/':
			if(b!=0)
			{
				printf("you opted for division\nresult: %.2f\n",a/b);
                       		break;
			}
			else
				printf("ERROR:you opted division with denominator zero\n");
		case '*':
			printf("you opted for multiplication\nresult: %.2f\n",a*b);
                        break;
		default:
			printf("Cannot recognise the operator\n");
	}
	return 0;
}


