#include <iostream>
using namespace std;

int for_HelloWorld() {
	int inp;
	cout << "How many times do you want to print? ";
	cin >> inp;
	for (int n = 0; n < inp; n++) {
		cout << "Hello world" << endl;
	}
	return 0;
}

int while_HelloWorld() {
	int n = 0;
	int inp;
	cout << "How many times? ";
	cin >> inp;
	while (n < inp) {
		cout << "Hello world" << endl;
		n++;
	}
	return 0;
}

int dowhile_HelloWorld() {
	int n = 0;
	int inp;
	cout << "How many times? ";
	cin >> inp;
	do {
		if (n < inp) {
			cout << "Hello world" << endl;
		}
		n++;
	} while (n < inp);
	return 0;
}

int main() {
	cout << "Fist loop" << endl;
	for_HelloWorld();
	cout << "Second loop" << endl;
	while_HelloWorld();
	cout << "Third loop" << endl;
	dowhile_HelloWorld();
	return 0;
}

