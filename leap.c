#include <stdio.h>
 
int main(void) {
	// your code goes here
	int num;
	scanf("%d",&num);
	if(num%4==0&&num%100==0&&num%400==0)
	printf("leap");
	else
	printf("Not leap");
	return 0;
}
