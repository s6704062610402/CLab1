#include <stdio.h>

int main() {
	int n1;
	int n2;
	printf("Enter your number1: \n");
	scanf("%d", &n1);
	printf("Enter your number2: \n");
	scanf("%d", &n2);
	if (n1 > n2) {
		int sum1 = n1 - n2;
  		printf("num %d is greater than %d is %d ", n1 , n2 , sum1);
	}
	else {
		int sum2 = n2 - n1;
  		printf("num %d is greater than %d is %d ", n2 , n1 , sum2);
	}
	return 0;
}
