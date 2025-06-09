#ifndef cc
#define cc
class charter {
protected:
	double life;
	double atk;
    double def;
	

public:
	double inlife;
	double inatk;
	double indef;
	charter(double, double, double);
	void  virtual useskill()=0;
	double damcost();
	void redef();
	double getlife() { return inlife; };



};
#endif


