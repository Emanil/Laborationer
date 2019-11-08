#include <iostream>
using namespace std;

int main() {

	string name;
	cout << "Name? ";
	cin >> name;

	int age;
	cout << "Age? ";
	cin >> age;

	char gender;
	cout << "Gender? (m / f) ";
	cin >> gender;

	string adress;
	cout << "Adress? ";
	cin >> adress;
	
	bool isMarried;
	cout << "U married? (1/0) ";
	cin >> isMarried;

	float height;
	cout << "How high are you? "; //a lot
	cin >> height;

	/*
	int creditCardNumber;
	cout << "Credit card number?";
	cin >> creditCardNumber;
	*/

	cout << "\n";
	if (gender == 'm' || gender == 'M')
		cout << name+": " << "Age: " << age << ", "<< "Gender: " << gender << "ale, " << "Adress: " << adress << ", Married? " << isMarried << ", " << height << "cm" << endl;
	else if (gender == 'f' || gender == 'F')
		cout << name + ": " << "Age: " << age << ", " << "Gender: " << gender << "emale, " << "Adress: " << adress << ", Married? " << isMarried << ", " << height << "cm" << endl;
	else
		cout << name + ": " << "Age: " << age << ", " << "Gender: " << gender << ", Adress: " << adress << ", Married? " << isMarried << ", " << height << "cm" << endl;

	return 0;
}