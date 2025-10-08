/*homework1*/
/*
#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n) {
	if (n <= 1)
		return false;
	for (int i = 2; i * i <= n; i++){
		if (n % i == 0)
			return false;
	}
	return true;
}

void checkSum (int num){
	bool found = false;

	for (int i = 2; i <= num / 2; i++){
		int j = num - i;
		if (isPrime(i) && isPrime(j)) {
			printf("%d + %d = %d\n", i, j, num);
			found = true;
		}
	}
	if (!found)
		printf("%d cannot be expressed as the sum of two prime numbers. \n", num);
}

int main(){
	int num;
	printf("Enter a number");
	scanf("%d", &num);
	checkSum(num);
	return 0;
}
*/




/*homework2*/
/*
#include <stdio.h>
#include <stdlib.h>

int main () {
	double num1, num2;
	char op;

	printf("Simple Calculator (+, -, *, /, %%)\n");
	printf("Enter expressions like: 5 + 3\n");
	printf("Press Ctrl+Z to exit.\n\n");

	while (printf("> "), scanf("%lf %c %lf", &num1, &op, &num2) == 3){
		switch (op) {
		case '+':
			printf("=%.2lf\n", num1 + num2);
			break;
		case '-':
                        printf("=%.2lf\n", num1 - num2);
                        break;
		case '*':
                        printf("=%.2lf\n", num1 * num2);
                        break;
		case '/':
			if (num2 == 0)
				printf("Error: Division by zero!\n");
			else
				printf("= %.2lf\n", num1 / num2);
			break;
		case '%':
			if ((int)num2 == 0)
				printf("Error\n");
			else
				printf("= %d\n", (int)num1 % (int)num2);
			break;
		default:
			printf("Error: Unknown operator '%c'\n", op);
		}
	}
}
*/




/*homework3*/
/*
#include <stdio.h>

void printPyramid(int n) {
	for (int i = 1; i <= n; i++){
		for(int j = i; j < n; j++){
			printf(" ");
		}
		for (int k = 1; k <= (2 * i - 1); k++) {
			printf("*");
		}
		printf("\n");
	}
}

int main() {
	int rows;

	printf("Enter the number of rows: ");
	scanf("%d", &rows);
	printPyramid(rows);
	return 0;
}
*/








