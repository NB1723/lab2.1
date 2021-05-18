#include "IntPower.h"
#include <Cmath>
IntPower::IntPower()
{
	first = 0;
	second = 0;
}
IntPower::IntPower(double first = 0, int second = 0)
{
	this->first = first;
	this->second = second;
}


void IntPower::SetFirst(double first)
{
	this->first = first;
}
void IntPower::SetSecond(int second)
{
	this->second = second;
}

double IntPower::GetFirst() const { return first; }
double IntPower::GetSecond() const { return second; }

IntPower& IntPower::operator = (const IntPower& c)
{
	first = c.first;
	second = c.second;

	return *this;
}
istream& operator >> (istream& in, IntPower& c)
{
	cout << "Enter a First number : "; in >> c.first;
	cout << "Enter a Second number : "; in >> c.second;
	cout << endl;

	return in;
}
ostream& operator << (ostream& out, const IntPower& c)
{
	out << string(c);
	return out;
}
IntPower::operator string() const
{
	stringstream ss;
	ss << "First number is " << first << endl;
	ss << "Second number is " << second << endl;

	return ss.str();

}
double IntPower::power()
{
	return pow(first, second);

}