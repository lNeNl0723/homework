#include "charter.h"
#include<iostream>
using namespace std;
charter::charter(double l, double a, double d) {


 {


		life = l;
		atk = a;
		def = d;
		inlife = life;
		inatk = atk;
		indef = def;

	}
}
double charter::damcost(){

	return def * 0.03;

}
void charter::redef() {
	indef = def;
}
