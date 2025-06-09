#include "charter.h"
#include<iostream>
using namespace std;
#ifndef ss
#define ss
class kinght : public charter {
public:
	kinght(double, double, double);
	void useskill() override;

};
class mage : public charter {
public:
	mage(double, double, double);
	void useskill() override;

};
class healer : public charter {
public:
	healer(double, double, double);
	void useskill() override;

};
#endif