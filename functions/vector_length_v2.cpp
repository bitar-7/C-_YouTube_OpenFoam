// This script calculates the vector length

#include<iostream>
#include<cmath>
#include<string>

using namespace std;

double vector_length(double x, double y, double z);

int main ()
{ 
   double  l, x, y, z;
   double vector[3][1]={{x},{y},{z}};
   
   cout << "input x" << endl;
   cin >> x;
   
   cout << "input y" << endl;
   cin >> y; 
   
   cout << "input z" << endl;
   cin >> z;

   vector[0][0]=x;
   vector[1][0]=y;
   vector[2][0]=z;
   
   l = vector_length(x, y, z);
   cout << l << endl;
   
   return 0;
}

double vector_length(double x, double y, double z)
{
	double l;
	l=sqrt(pow(x,2.0)+pow(y,2.0)+pow(z,2.0)) ;
        return l;
}

// 
