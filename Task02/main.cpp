#include <iostream>
using namespace std;

bool equals(int, int);

int main() {
	int first, second;
	
	cout << "Input your first number: ";
	cin >> first;

	do {
		cout << "Input your second number: ";
		cin >> second;
	} while (second < 0);

	cout << "Result: " << (equals(first, second) ? "yes":"no") << endl;

	return 0;
}