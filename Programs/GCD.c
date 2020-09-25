#include<stdio.h>

int gcd(int a, int b){
		return b==0?a:gcd(b,a%b);
	}
int main() {
	int n1,n2;
	scanf("%d %d", &n1,&n2);
	printf("%d",gcd(n1,n2));

//for lcm=a*b/gcd
	return 0;
}
