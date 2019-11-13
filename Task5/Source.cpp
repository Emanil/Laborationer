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
	scanf_s(" %c",gender,1);

	char adress[30];
	printf("Adress? ");
	scanf_s("%s",adress,30);

	int isMarried;
	printf("U married? (1/0) ");
	scanf_s("%d",&isMarried);

	float height;
	printf("How high are you? "); //a lot
	scanf_s("%f",&height);

	if (gender[0] == 'm' || gender[0] == 'M')
		printf("Name: %s, Age: %d, Gender: %cale, Adress: %s, Married? %d, Height: %f\n", name, age, gender[0], adress, isMarried, height);
	else if (gender[0] == 'f' || gender[0] == 'F')
		printf("Name: %s, Age: %d, Gender: %cemale, Adress: %s, Married? %d, Height: %f\n", name, age, gender[0], adress, isMarried, height);
	return 0;
}