long long power(int x, int n) {
	if (n < 0) {
		return 0;
	}

	// base case
	if (n == 0) {
		return 1;
	}

	// recursion case
	return x * power(x, n - 1);
}