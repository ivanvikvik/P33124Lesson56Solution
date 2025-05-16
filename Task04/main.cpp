#include <iostream>
using namespace std;

bool check_element(int* array, int size, int value);

int main() {
	int array1[]{ 1,2,3,4,5,6,7,8,9 };	// 45
	int array2[]{ 1,2,3,4,5,6,7,8 };	// 36
	int array3[]{ 1 };					// 1

	cout << (check_element(array1, 9, 2) ? "pass" : "fail") << endl;
	cout << (!check_element(array2, 8, 33) ? "pass" : "fail") << endl;
	cout << (check_element(array3, 1, 1) ? "pass" : "fail") << endl;

	return 0;
}