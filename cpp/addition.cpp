#include <cstdio>

int main(){
	//Initialization
	int a, b, result;

	//Intro
	printf("\nThis program will add two numbers together.");

	//Asks for the first number
	printf("\nEnter the first number here: ");
	scanf("%d", &a);

	//Asks for the second number
	printf("\nEnter the second number here: ");
	scanf("%d", &b);

	//Adds the two numbers together
	result = a + b;

	//Prints results
	printf("%d + %d = %d\n", a, b, result);
}
