// complex.cpp
// Multiplying complex numbers

#include <iostream>	// contains the definition of cout, endl
#include <complex>	// contains the complex class definition

using namespace std; // cout, endl, complex are all part of this namespace

int main()
{
	auto num1 = complex<float>{2.0, 2.0};  // use auto for type deduction
	auto num2 = complex<float>{4.0, -2.0}; // use uniform initialisation syntax (curly braces)

	auto answer = num1 * num2; // type deduced for 'answer' is: complex<float>

	cout << "The answer is: " << answer << endl;
	cout << "Or in a more familiar form: " << answer.real() 
			<< " + " << answer.imag() << "j" 
			<< endl	<< endl;

	// answer++;

	return 0;
}


//Exercise 3.1
// ++ in c++ is the same as saying i = i + 1 where i has to be a primitive datatype such as an int or float
// The reason saying answer++ is wrong is because answer will be resolved to the base type of complex<float> which cannot be iterated as there are two elements contained within the datatype and thus, it is not a primitive and more of a class or enum
// the compiler doesnt know what you are tring to inc cause there are multiple variables that could be inc.

