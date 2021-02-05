#include <iostream>
#include <math.h>

typedef unsigned long long ull;

using namespace std;

ull fibs[60];

int main() {
    ull t, n;

    cin >> t;

    fibs[0] = 0;
    fibs[1] = 1;
    fibs[2] = 1;
    ull f1 = 1, f2 = 1;

    for(int i = 3; i < 60; i++) {
	ull temp = f1;
	f1 = (f1 + f2) % 10;
	f2 = temp;
	fibs[i] = f1;
	//cout << fibs[i] << endl;
	//cout << fibs[i] << endl;
    }

    while(t--) {
	cin >> n;
	//cout << n << endl;
	ull v = floor(log2(n));
	v = pow(2, v);
	v = v - 1;
	v = v % 60;
	//cout << v << endl;
	
	cout << (fibs[v]) << endl;
    }
    
    return 0;
}
