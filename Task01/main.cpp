#include <iostream>
using namespace std;

long long power(int, int);

int main() {
	int x;
	int n;

	cout << "Input your number: ";
	cin >> x;

	do {
		cout << "Input your n: ";
		cin >> n;
	} while (n < 0);

	cout << x << "^" << n << " = " << power(x, n) << endl;

	return 0;
}