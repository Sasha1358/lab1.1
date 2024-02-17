/////////////////////Line.h
#pragma once
class Line
{
private:
	double first, second;
public:
	double GetFirst() const { return first; }
	double GetSecond() const { return second; }
	void SetFirst(int value);
	void SetSecond(int value);

	bool Init(double, double);
	void Read();
	void Display() const;
	double function(double x)const;
};

