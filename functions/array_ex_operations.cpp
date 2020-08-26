// This script calculates the vector length

#include<iostream>
#include<cmath>
#include<string>

using namespace std;

int main ()
{ 
   double vector_sum[3][1];
   double vector1[3][1];
   double vector2[3][1];

   int i, n;
   n=0;
   // We're storing the values of the matrices

   for (i=0; i<3; i++)
	{
		n=i+1;

		cout << "enter element " << n << " of the vector1" << endl;
		cin >> vector1[i][0];
	}

   for (i=0; i<3; i++)
        {   
		n=i+1;
		cout << "enter element " << n << " of the vector2" << endl;
                cin >> vector2[i][0];
	}
   
   // Here we are summing the 2 matrices

   for (int i=0; i<3; i++)
	{
		vector_sum[i][0]=vector1[i][0]+vector2[i][0];
	}

   // Displaying the resultant matrice

   cout << endl << " Sum of the two matrix is: " << endl;

   for (int i=0; i<3; i++)
        {
		cout << " " << vector_sum[i][0] <<endl;
        }   

       return 0;
}       	
// 
