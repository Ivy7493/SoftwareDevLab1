// complex.cpp
// Multiplying complex numbers

#include <iostream>	// contains the definition of cout, endl
#include <complex>	// contains the complex class definition
#include <cmath>

using namespace std; // cout, endl, complex are all part of this namespace
using complexf = complex<float>;


void RootSolver();
void DisplayComplex(complexf _input);


int main()
{	
	auto num1 = complexf{2.0, 2.0};  // use auto for type deduction
	auto num2 = complexf{4.0, -2.0}; // use uniform initialisation syntax (curly braces)

	auto answer = num1 * num2; // type deduced for 'answer' is: complex<float>

	cout << "The answer is: " << answer << endl;
	cout << "Or in a more familiar form: " << answer.real() 
			<< " + " << answer.imag() << "j" 
			<< endl	<< endl;

	// answer++;

	return 0;
}

void DisplayComplex(complexf _input) {
	if (_input.imag() == 0) {
		cout << "x = " << _input.real() << endl;
	}
	else if (_input.imag() < 0) {
		cout << "x = " << _input.real() << " - " << abs(_input.imag()) << "j " << endl;
	}
	else if (_input.imag() > 0) {
		cout << "x = " << _input.real() << " + " << _input.imag() << "j " << endl;
	}



}

void RootSolver() {

	auto Input = string("");
	cout << "Input Value A: " << endl;
	int a, b, c;
	auto ans = complexf{ 0.0,0.0 };
	cin >> a;
	cout << "Input Vale B: " << endl;
	cin >> b;
	cout << "Input Value C: " << endl;
	cin >> c;
	auto aplx = complexf{ (float)a,0 };
	auto bplx = complexf{ (float)b,0 };
	auto cplx = complexf{ (float)c,0 };
	auto NegativeCheck = aplx * cplx;
	NegativeCheck *= -4;
	NegativeCheck += (bplx * bplx);
	NegativeCheck = sqrt(NegativeCheck);
	auto bottom = aplx;
	bottom *= 2;
	auto ans1 = (-bplx + NegativeCheck) / (bottom);
	auto ans2 = (-bplx - NegativeCheck) / (bottom);
	DisplayComplex(ans1);
	DisplayComplex(ans2);
	cout << "Calaculate Another Root? y for yes, q for quit " << endl;
	string j;
	cin >> j;
	if (j == "y") {
		RootSolver();
	}
	else if (j == "q") {
		return;
	}

	return;
}





//Exercise 3.1
// ++ in c++ is the same as saying i = i + 1 where i has to be a primitive datatype such as an int or float
// The reason saying answer++ is wrong is because answer will be resolved to the base type of complex<float> which cannot be iterated as there are two elements contained within the datatype and thus, it is not a primitive and more of a class or enum
// the compiler doesnt know what you are tring to inc cause there are multiple variables that could be inc.

