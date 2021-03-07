#include <iostream>
#include <math.h>
using namespace std;

int main() {
	long double a, b,x1,x2;
	long double e = 0.1,ev1,ev2;
	a = 0;
	b = 3;
	while (b - a > e) {
		x1 = (a + b - e) / 2;
		x2 = (a + b + e) / 2;
		if (x1 <= 2) {
			ev1 = 3 * x1;
		}
		else {
			ev1 = (20 - x1) / 3;
		}
		if (x2 <= 2) {
			ev2 = 3 * x2;
		}
		else {
			ev2 = (20 - x2) / 3;
		}
		if (ev1 - ev2 > 0) {
			b = x2;
		}
		else if (ev1 - ev2 < 0) {
			a = x1;
		}
		else {
			a = x1;
			b = x2;
		}
		cout << x1 <<" "<< x2<<endl;
	}
	cout << "optimal " << x1 << " " << x2;
}