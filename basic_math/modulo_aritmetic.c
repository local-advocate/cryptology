/* 
 * TO DO
 * negative num modulo and division
 * combine mod and quotiet w/ malloc
 * error enum in header, better formatting
 * divide by zero take care
 */

/*
 * divisor   : the int dividing the dividend
 * dividend  : the int being divided
 * quotient  : num of times dividend can be divided
 * remainder : remaining value 
 */

/*
 * number repr:
 * every num n can be represented as n = qd + r, where
 * n = divisor, q = quotient, d = dividend, r = remainder
 */

#include <stdio.h>

/* returns remainder after divisor divides dividend */
int mod(int dividend, int divisor) {
	if (divisor == 0) return -1;				// divide by zero error
	if (dividend < divisor) return dividend;
	if (dividend == divisor) return 0;
	while (dividend >= divisor) {
		dividend -= divisor;				// dividing (subtracting by the num)
	}
	return dividend;
}

int div(int dividend, int divisor) {
	int quotient;
	if (dividend < divisor) return 0;
	if (dividend == divisor) return 1;
	while (dividend >= divisor) {
		dividend -= divisor;				// dividing (subtracting by the num)
		quotient += 1;
	}
	return dividend == 0 ? quotient : 0;			// doesnt divide if still remainder
}

int main(){
	int dividend, divisor;
	printf("Enter dividend: ");
	scanf("%d", &dividend);
	printf("Enter divisor: ");
	scanf("%d", &divisor);

	printf("%d divided by %d\n", dividend, divisor);
	printf("Quotient  = %d\n", div(dividend, divisor));
	printf("Remainder =  %d\n", mod(dividend, divisor));
}
