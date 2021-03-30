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
int mod (int dividend, int divisor) {
	int quotient = 0, remainder = dividend;			// for future use
	if (dividend < divisor) return dividend;
	if (dividend == divisor) return 0;
	while (dividend > divisor) {
		dividend -= divisor;				// dividing (subtracting by the num)
		quotient += 1;
	}
	remainder = dividend;					// for future use
	return dividend;
}

int main(){
	int dividend, divisor;
	printf("Enter dividend: ");
	scanf("%d", &dividend);
	printf("Enter divisor: ");
	scanf("%d", &divisor);

	printf("%dmod%d = %d\n", dividend, divisor, mod(dividend, divisor));
}
