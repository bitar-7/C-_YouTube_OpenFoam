//Kinetic energy calculator
 
#include<iostream>

#include<string>

#include<cmath> 

using namespace std;

int main()
{
	string first_statement, second_statement, third_statement;
	float m,v;

	first_statement="We're going to calculate the Kinetic energy in kg.m^-1.s^-2";
	second_statement="Please enter the mass in kg :";

	third_statement="Please enter the velocity in m/s^2 :";

	cout << first_statement << endl;

        cout << second_statement << endl;
        
	cin >> m;
	
	cout << third_statement <<endl;
	
	cin >> v;
	
	cout << 0.5*m*pow(v,2) << endl;
	
	return 0;
}

//
