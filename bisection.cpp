#include <iostream>
#include <math.h>
using namespace std;
  
int main() {
	long double evaluation;
	long double epsilon = 0.0001;
	long double x1, x2;
	cin >> x1;
	cin >> x2;
	long double mid;
	int count = 0;
	while ((x2-x1) > epsilon) {
		mid = (x1 + x2) / 2;
		evaluation = 12 - 12*pow(mid, 3) - 12 * pow(mid, 5);
		if (evaluation > 0) {
			x1 = mid;
		}
		else if (evaluation < 0) {
			x2 = mid;
		}
		count++;
		cout <<count<<" "<< mid<<endl;
	}
	cout <<"last one"<< mid;
}