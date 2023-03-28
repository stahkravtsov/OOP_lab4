#ifndef HEADER_H
#define HEADER_H
#include <math.h>
#include <string>
#include <iostream>
using namespace std;

class CSphere {
private:
		double R;
		double X0;
		double Y0;
public:
		static int mCount;

		CSphere();
		CSphere(double r);
		CSphere(double r, double x, double y);
		~CSphere();

		void SetSphere(double r = 0, double x = 0, double y = 0);

		void SetSphere(int r = 0, int x = 0, int y = 0);

		void SetR(double r);

		void SetX(double x);

		void SetY(double y);

		double GetR();

		double GetX0();

		double GetY0();

		double GetArea();

		double GetV();

		void MoveSphere(double x, double y);

		void MoveSphere(int x, int y);

		void IncreaseR(double N);

		void IncreaseR(int N);

		string PrintSphere();

		static int GetCount();

		static void ResetCount();

		friend ostream &operator<<(ostream &out, const CSphere &a);

		friend istream &operator>>(istream &in, CSphere &a);

		friend bool operator==(const CSphere &a, const CSphere &b);

		friend bool operator!=(const CSphere &a, const CSphere &b);

		CSphere operator*(double a);

		CSphere operator+(double a);

};


#endif // !HEADER_H
