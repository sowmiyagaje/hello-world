#include <stdio.h>
 
int main(void) {
	// your code goes here
	int num,i;
	scanf("%d",&num);
	int sum=0;
	for(i=1;i<=num;i++)
	sum=sum+i;
	printf("%d",sum);
 
	return 0;
}
