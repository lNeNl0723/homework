#include "class.h"
#include <iostream>
using namespace std;
kinght::kinght(double l, double a, double d) : charter(l, a, d+3) {
	cout << "�M�h�إߦ��\" << endl;
}
void kinght::useskill() {
	cout << "�M�h�ϥΧޯ�G����" << endl;
	int temp = def;
	def = 0;
	inatk += temp;
}
mage::mage(double l, double a, double d) : charter(l, a + 3, d) {
	cout << "�k�v�إߦ��\" << endl;
}
void mage::useskill() {
	cout << "�k�v�ϥΧޯ� : ���ɳN" << endl;
	indef = 999;
}
healer::healer(double l, double a, double d) : charter(l, a, d + 2) {
	cout << "�v���̫إߦ��\" << endl;
}
void healer::useskill() {
	cout << "�v���̨ϥΧޯ� : �v���N" << endl;
	inlife += 3;
}