#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "Number: ";
	cin >> n;
	if (n < 0) {
		cout << "Error, negative number" << endl;
	}
	int n2 = n;
	while (n > 0) {
		cout << n << endl;
		n--;	
	}
	while (n2 >= n) {
		cout << n << endl;
		n++;
	}
	return 0;
			
}