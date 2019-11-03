#include <iostream>
#include <math.h>

float fsin(float opp, float hyp)
{
	return opp / hyp;
}

float fcos(float adj, float hyp)
{
	return adj / hyp;
}

float ftan(float opp, float adj)
{
	return opp / adj;
}

float pythag(float a, float b) 
{
	float c = (a * a) + (b * b);
	return (float)sqrt(c);
}

int main()
{
	/*
	Right triangle whose sides are named a, b and c and angles x (the right angle), y, and z.

		|\
		|y\
		|  \	
	a=7	|	\ c
		|	 \
		|_	  \
		|x|___z\

		  b=4
	*/

	float a = 7.0f;
	float b = 4.0f;

	// Problem: right triangle where a = 7 and b = 4; what is c?
	// Solution: the sqrt(65)
	float c = pythag(a, b);

	// Problem: what is the cos of angle z?
	// Solution: 4/sqrt(65) or (4*sqrt(65))/65
	float cos_z = fcos(b, c);

	// Problem: what is the sin of angle z?
	// Solution: 7/sqrt(65) or (7*sqrt(65))/65
	float sin_z = fsin(a, c);

	// Problem: what is the tan of angle z?
	// Solution: 7/4
	float tan_z = ftan(a, b);

	char buff[100];
	snprintf(buff, sizeof(buff), "A: %f,\nB: %f,\nC: %f,\ncos angle Z: %f,\nsin angle Z: %f,\ntan angle Z: %f\n", a, b, c, cos_z, sin_z, tan_z);
	std::string buffAsStdStr = buff;
	std::cout << buffAsStdStr << "\n";

	return 0;
}
