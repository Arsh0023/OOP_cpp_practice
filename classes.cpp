//stock00.h -- stock class interface
//version 00
#ifndef stock00_h_
#define stock00_h_
#include <string>
class Stock
{
private:
	std::string company;
	long shares;
	double share_val;
	double total_val;
	void set_tot()
	{
		total_val = share_val*shares; 
	}
public:
	void aquire(const std::string &co, long n, double pr);
	void buy(long num, double price);
	void sell(long num , double price);
	void update(double price);
	void show();

};
#endif