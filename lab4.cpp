#include <iostream>
#include "lab4.h"
using namespace std;

int main() {

		CSphere S;

		cin >> S;
		cout << S << endl;

		CSphere a = S * 5;
		cout << a << endl;
		CSphere b = S + 5;
		cout << b << endl;
		CSphere	c[50];
		cout << CSphere::GetCount() << endl;
}
