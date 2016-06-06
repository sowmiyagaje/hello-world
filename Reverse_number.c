#include <stdio.h>
 
int main(void) {
	// your code goes here
	int num,n1,rev=0;
	scanf("%d",&num);
	while(num>0)
	{
		n1=num%10;
			rev=rev*10+n1;
		num=num/10;
 
	}
	printf("%d",rev);
	return 0;
}
