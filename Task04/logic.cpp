bool binary_search(int* array, int value, int first, int last) {
	// base case
	if (first > last) {
		return false;
	}
	
	int mid = (first + last) / 2;
	
	if (array[mid] == value) {
		return true;
	}

	// recursion case
	if (array[mid] > value) {
		last = mid - 1;
	}
	else {
		first = mid + 1;
	}

	return binary_search(array, value, first, last);
}

bool check_element(int* array, int size, int value) {
	if (array == nullptr || size < 0) {
		return false;
	}

	return binary_search(array, value, 0, size - 1);
}