// This script calculates the Reynolds number

#include<iostream>
#include<cmath>
#include<string>

using namespace std;

double Reynolds(double rho, double U, double D, double mu);

int main ()
{ 
   double rho, U, D, mu, Re;
   cout << "We are going to calculate Reynolds number" << endl;
   cout << "Please insert the following parameters" << endl;
   cout << "The density 'rho' in kg/m^3"  << endl;
   cin >> rho;
   cout << "The velocity 'U' in m/s" << endl;
   cin >> U; 
   cout << "The characteristic length 'd' in m" << endl;
   cin >> D;
   cout << "The dynamic viscosity 'mu' in kg/s.m" << endl;
   cin >> mu;
   Re = Reynolds(rho,U, D, mu);
   cout << Re << endl;
   return 0;
}

double Reynolds(double rho,double U,double D,double mu)
{
	double Re;
	Re=rho*U*D/mu;

}

// 
