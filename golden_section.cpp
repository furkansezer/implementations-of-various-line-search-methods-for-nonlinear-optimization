#include <iostream>
#include <math.h>
using namespace std;

int main(){
	long double xL, xR,x1,x2,e=0.01,ev1,ev2;
	xL = 0;
	xR = 4;
	bool first = true;
	bool second = true;
	int count = 0;
	while (xR-xL > e) {
		if(first)
		x1 = xR - 0.618*(xR - xL);

		if(second)
		x2 = xL + 0.618*(xR - xL);

		ev1 = x1-2;
		ev2 = x2-2;
		if (ev2 > ev1) {
			xL = x1;
			x1 = x2;
			second = true;
			first = false;
		}
		else if (ev2 < ev1) {
			xR = x2;
			x2 = x1;
			first = true;
			second = false;
		}
		/*else {
			xL = x1;
			xR = x2;
			first = false;
			second = false;
		}*/
		count++;
		cout << count << " " << xL << " " << xR << endl;
	}
	cout << "optimal " << xL << " " << xR;
}
