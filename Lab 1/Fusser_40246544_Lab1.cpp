/**********************************************************
 * COEN 243 - Lab 1
 *
 * Leonardo Fusser (40246544)
 * 
 * January 19th, 2026
 * 
**********************************************************/


#include <iostream>

//Begining of code
int main() {

      //Variable declarations
	double adult_price = 90;
	double child_price = 60;

	int reserved_days, points;
	double total;

	int a_number, c_number, d_number;

      //User inputs
	std::cout<<"How many adult guests?";
	std::cin>>a_number;
	std::cout<<"How many child guests?";
	std::cin>>c_number;
	std::cout<<"How many days?";
	std::cin>>d_number;
	
	//Some quick calculations
	total = (adult_price*a_number + child_price*c_number) * d_number;
	points = total/50;

      //Output to console
	std::cout<<"\nYour total bill for " <<a_number<< " adult guest(s) and " <<c_number<< " child guest(s) for " <<d_number<< " day(s) is $" <<total<< ". You have earned " <<points<< " points.";

	return 0;

};
//End of code