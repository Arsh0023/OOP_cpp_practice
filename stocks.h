//stock00.h -- stock class interface
//version 00
/*
>>>	The syntax identifies Stock as the type name for this new class.
	This declaration enables you to declare variables,called objects,or instances,of the Stock type
	this is also known as instantiation of the class object
stock ARSH; -- this here insatantiates a stock object

			THE KEYWORDS -> PRIVATE and PUBLIC
			1. a program can access private members of an object only using the public member functions.
			2. Thus,the public member functions act as go-betweens between a program and an object’s 
			private members;they provide the interface between object and program.This insulation of 
			data from direct access by a program is called as DATA HIDING.

>>>	gathering the implimentation details together and seperating them from the abstraction is called as
	ENCAPSULATION.

>>> The priciple is to seperate the details of data implementation from that of data representation.
	so that if find a better way to implement the data we can impliment that later as we need.

>>> Variables are generaly kept in the private class and the public intreface members can access them
	although the member functions can be kept in the private section but then the main function cannot call
	them directly and we need to use the interace members to access them or use them.

>>> (::) -- this is called as the scope regulation function to tell to which class the function belongs


*/
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
/*
class vehicle
{
	std::string tyres;
	std::string doors;
	long double price_in_rs; //by default the class attributes are private
public:
	void car_type(long price, std::string price);
};
Stock::update(double price); //declaration of a class member function
// the other members of the Stock class can use the update function without :: as they are the members of the
//class as thus are in scope of the update function.
*/