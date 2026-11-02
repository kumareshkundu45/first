#include <stdio.h>
int main() {
	int a;
	printf("enter the value of a:");
	scanf("%d",&a);
	int b;
	printf("enter the value of b:");
	scanf("%d",&b);
	int c;
	printf("enter the value of c:");
	scanf("%d",&c);
	{
		if(a>b&&a>c)
		printf("THE GREATER NUMBER:%d",a);
		if(b>a&&b>c)
		printf("THE GREATER NUMBER:%d",b);
		if(c>a&&c>b)
		printf("THE GREATER NUMBER:%d",c);


	}
	return 0;
}
