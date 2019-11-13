#include <iostream>
using namespace std;

int numberPyramid() {
	int n;
	cout << "Input number: ";
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			cout << j << " ";
		}
		cout << endl;
	}
	return 0;
}

int letterPyramid() {
	char n;
	char alph = 'A';
	cout << "Input letter: ";
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; ++j) {
			if (n == alph-1) {
				return 0;
			}
			cout << alph << " ";
		}
		++alph;
		cout << endl;
	}
	return 0;
}

int main() {
	int n;
	cout << "Pyramid numbers: [1] \nPyramid letters: [2]" << endl;
	cin >> n;
	if (n == 1)
		numberPyramid();
	else if (n == 2)
		letterPyramid();
}
