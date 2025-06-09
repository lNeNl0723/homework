#include "class.h"
#include <iostream>
using namespace std;
kinght::kinght(double l, double a, double d) : charter(l, a, d+3) {
	cout << "騎士建立成功" << endl;
}
void kinght::useskill() {
	cout << "騎士使用技能：死鬥" << endl;
	int temp = def;
	def = 0;
	inatk += temp;
}
mage::mage(double l, double a, double d) : charter(l, a + 3, d) {
	cout << "法師建立成功" << endl;
}
void mage::useskill() {
	cout << "法師使用技能 : 結界術" << endl;
	indef = 999;
}
healer::healer(double l, double a, double d) : charter(l, a, d + 2) {
	cout << "治療者建立成功" << endl;
}
void healer::useskill() {
	cout << "治療者使用技能 : 治療術" << endl;
	inlife += 3;
}