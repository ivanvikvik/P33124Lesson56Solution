bool equals(int first, int second) {
	if (second < 0) {
		return false;
	}

	if (first < 0) {
		first = -first;
	}

	// base case
	if (first == second) {
		return true;
	}

	if (first == 0 || second == 0) {
		return false;
	}

	// recursion case
	int digit = first % 10;
	return equals(first / 10, second - digit);
}