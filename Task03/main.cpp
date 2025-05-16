#include <iostream>
using namespace std;

int sum_all_elements(int* array, int size);

int main() {
	int array1[]{ 1,2,3,4,5,6,7,8,9 };	// 45
	int array2[]{ 1,2,3,4,5,6,7,8 };	// 36
	int array3[]{ 1 };					// 1

	cout << (sum_all_elements(array1, 9) == 45 ? "pass" : "fail") << endl;
	cout << (sum_all_elements(array2, 8) == 36 ? "pass" : "fail") << endl;
	cout << (sum_all_elements(array3, 1) == 1 ? "pass" : "fail") << endl;

	return 0;
}