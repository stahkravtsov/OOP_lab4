#include <iostream>
#include <string>
#include "lab4.h"
using namespace std;

static double M_PI = 4 * atan(1);

int CSphere::mCount = 0;

CSphere::CSphere(): R(0), X0(0), Y0(0) { mCount++; }
CSphere::CSphere(double r) {
		R = 0;
		if(r >= 0)R = r;
		X0 = 0;
		Y0 = 0;
		mCount++;
}
CSphere::CSphere(double r, double x, double y) {
		R = 0;
		if(r >= 0)R = r;
		X0 = x;
		Y0 = y;
		mCount++;
}

CSphere::~CSphere() {
		mCount--;
}



void CSphere::SetSphere(double r, double x, double y) {
		if(r >= 0)R = r;
		X0 = x;
		Y0 = y;
}

void CSphere::SetSphere(int r, int x, int y) {
		if(r >= 0)R = (double)r;
		X0 = (double)x;
		Y0 = (double)y;
}


void CSphere::SetR(double r) {
		if(r < 0) return;
		R = r;
}

void CSphere::SetX(double x) {
		X0 = x;
}

void CSphere::SetY(double y) {
		Y0 = y;
}

double CSphere::GetR() {
		return R;
}

double CSphere::GetX0() {
		return X0;
}

double CSphere::GetY0() {
		return Y0;
}

double CSphere::GetArea() {
		double res = 4 * M_PI * R * R;
		return res;
}

double CSphere::GetV() {
		double res = ( 4. / 3. ) * M_PI * R * R * R;
		return res;
}

void CSphere::MoveSphere(double x, double y) {
		X0 += x;
		Y0 += y;
		return;
}

void CSphere::MoveSphere(int x, int y) {
		X0 += (double)x;
		Y0 += (double)y;
		return;
}

void CSphere::IncreaseR(double N) {
		if(N < 0)N = 1;
		R *= N;
		return;
}

void CSphere::IncreaseR(int N) {
		if(N < 0)N = 1;
		R *= (double)N;
		return;
}

string CSphere::PrintSphere() {
		return ( "R = " + to_string(R) + "  X0 = " + to_string(X0) + "  Y0 = " + to_string(Y0) + "\n" );
}

int CSphere::GetCount() {
		return mCount;
}
void CSphere::ResetCount() {
		mCount = 0;
}

ostream &operator<<(ostream &out, const CSphere &a) {
		out << "R = " << a.R << " X0 = " << a.X0 << " Y0 = " << a.Y0;
		return out;
}

istream &operator>>(istream &in, CSphere &a) {
		in >> a.R >> a.X0 >> a.Y0;
		if(a.R < 0) a.R = 0;
		return in;

}

bool operator==(const CSphere &a, const CSphere &b) {
		return( a.R == b.R && a.X0 == b.X0 && a.Y0 == b.Y0 );
}

bool operator!=(const CSphere &a, const CSphere &b) {
		return( a.R != b.R || a.X0 != b.X0 || a.Y0 != b.Y0 );
}

CSphere CSphere::operator*(double a) {
		if(a < 0) a = 1;
		return CSphere(R *= a, X0, Y0);
}

CSphere CSphere::operator+(double a) {
		return CSphere(R, X0 += a, Y0 += a);
}

