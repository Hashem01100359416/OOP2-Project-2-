#include <iostream>   // this Call  input and output stream libarary
#include "Car.h"   // this is Call for Header file of Class 

int main()       // this is Main Function 
{
    Car c1;                    // Creat the object 
    c1.set_Maker("Honda");     // set varible value by call fuction seter
    c1.set_Model(2019);        // set varible value by call fuction seter

    cout << "this Car made by " << c1.get_Maker() << "\n";   // get varible value by call fuction geter
    cout << "this Car model is " << c1.get_Model() << "\n";  //get varible value by call fuction geter
    
    return 0;    // End main or program;
}