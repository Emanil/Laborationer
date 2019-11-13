#include <iostream>
using namespace std;
int main() {
	int n;
	cout << "How many primes do you want?: ";
	cin >> n;
	for (int i = 1; i <= n; i++) { //Runs n times, i=1 for the %
		int x = 0;
		for (int i2 = 2; i2 <= (i / 2); ++i2) {
			if(i%i2==0 && i!=i2) { //if not prime, else: continue down
				x = 1;
				n++;
				break;
			}
		}
		if (i == 1) { //Runs one time 
			n++;
		}
		else if (x == 0) {
			cout << "Prime= " << i << endl;
		}

	}
	return 0;
}