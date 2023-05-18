#include <stdio.h>

int main(){
	int num, res;

	printf("Enter a number:");
	scanf("%d", &num);
	res= num%2;
	if (res==0)
	 printf("the number is even");
	 else 
	 printf("the bumber is odd");
	 
	return 0;
}

