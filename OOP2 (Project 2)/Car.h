// this is Called Header file for Class  exist with it proto type for Methods and Constractor and destractor 

#pragma once
#include <string>
using namespace std;

class Car
{
private:
	string Maker;
	int Model;
	string Color;
public:
	void set_Maker(string);
	string get_Maker();
	void set_Model(int);
	int get_Model();
};

