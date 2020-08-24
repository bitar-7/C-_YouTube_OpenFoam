// 
#include<iostream>

#include<string>

using namespace std;

int main()
{
	string first_statement, second_statement, third_statement;
	float a,b;

	first_statement="We're going to add the values of a and b";
	second_statement="Please enter the value of a";
	third_statement="Please enter the value of b";

	cout << first_statement << endl;
        cout << second_statement << endl;
        cin >> a;
	cout << third_statement <<endl;
	cin >> b;
	cout << a+b << endl;
	return 0;
}

//
