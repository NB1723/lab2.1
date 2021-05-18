#pragma once
#include <iostream>
#include <string>
#include <sstream>

using namespace std;
class IntPower
{
	double first;
	int second;
public:
	IntPower();
	IntPower(double, int);

	void SetFirst(double);
	void SetSecond(int);

	double GetFirst() const;
	double GetSecond() const;

	IntPower& operator = (const IntPower&);
	friend istream& operator >> (istream&, IntPower&);
	friend ostream& operator << (ostream&, const IntPower&);
	operator string() const;

	double power();
};
