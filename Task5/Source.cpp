#include <iostream>
#include <stdio.h>
using namespace std;


int main() {

	char name[15];
	printf("Name? ");
	scanf_s("%s",name,15);

	int age;
	printf("Age? ");
	scanf_s("%d",&age);

	char gender[1];
	printf("Gender? (m / f)? ");
	scanf_s("%c",gender,1);

	char adress[30];
	printf("Adress? ");
	scanf_s("%s",adress,30);

	int isMarried;
	printf("U married? (1/0) ");
	scanf_s("%d",&isMarried);

	float height;
	printf("How high are you? "); //a lot
	scanf_s("%d",&height);

	/*
	int creditCardNumber;
	cout << "Credit card number?";
	cin >> creditCardNumber;
	*/

	cout << "\n";
	if (gender[0] == 'm' || gender[0] == 'M')
		printf("Name: ", name, ", Age:", age, ", Gender: ", gender,", Adress: ", adress, ", Married? ", isMarried, ", Height: ", height);
	else if (gender[0] == 'f' || gender[0] == 'F')
		;
	else
		;
	return 0;
}