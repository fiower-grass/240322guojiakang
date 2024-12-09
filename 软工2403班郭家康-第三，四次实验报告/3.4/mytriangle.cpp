/*º¯Êı¶¨Òå*/
#pragma once
#include <iostream>
bool is_valid(double side1, double side2, double side3) {
	if (side1<=0 || side2<=0 || side3 <= 0)return false;
	if (side1 + side2 > side3 && side1 + side3 > side2 && side3 + side2 > side1)return true;
	else return false;
}
double double_area(double side1, double side2, double side3) {
double  square,s;
	s = (side1 + side2 + side3) / 2;
	square = sqrt(s*(s - side1)*(s - side2)*(s - side3));
	return square;
}