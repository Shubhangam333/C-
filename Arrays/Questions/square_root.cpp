#include<iostream>
using namespace std;


int main() {

	// Give a Number N
	int N;
	int P;
	cin >> N >> P;


	float ans = 0;
	float inc = 1.0;

	for (int times = 0; times <= P; times++) {

		while (ans * ans <= N) {
			ans = ans + inc;
		}
		ans = ans - inc ;
		// Updates the increment for the next position
		inc = inc / 10;
	}

	cout << ans << endl;

	return 0;
}