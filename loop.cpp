#include "loop.h"
#include <iostream>
using namespace std;
void dmacount(charter& a, charter& b) {
	a.inlife -= b.inatk * (1 - a.damcost());
}
void defon(charter&a) {
	a.indef = a.indef * 1.5;

}
