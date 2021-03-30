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


/* returns remainder after divisor divides dividend */
int mod (int dividend, int divisor) {
	int quotient = 0, remainder = dividend;			// for future use
	if (dividend < divisor) return dividend;
	while (dividend > divisor) {
		dividend -= divisor;				// dividing (subtracting by the num)
		quotient += 1;
	}
	remainder = dividend;					// for future use
	return dividend;
}

