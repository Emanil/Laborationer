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
	string isMarried2;
	cout << "U married? (true/false) ";
	cin >> isMarried2;
	if (isMarried2 == "true")
		isMarried = true;
	else if (isMarried2 == "false")
		isMarried = false;

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
	return 0;
}