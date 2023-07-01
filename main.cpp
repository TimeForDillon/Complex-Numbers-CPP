/*******************************************************************************
 * AUTHOR        : Dillon Welsh
 * LAB08         : COMPLEX NUMBERS
 * CLASS         : CS3A
 * SECTION       : 71206
 * DUE DATE      : 09/23/2020
 ******************************************************************************/

#include "complex.h"

/*******************************************************************************
 * COMPLEX NUMBERS
 *______________________________________________________________________________
 * Write a program that defines a class for complex numbers.
 *______________________________________________________________________________
 * INPUT: none
 *
 * OUTPUT: Complex
 ******************************************************************************/

int main()
{
    Complex number;     // IN & OUT - object for complex number

    // OUTPUT - output test harness
    cout << endl;
    cout << "Testing default constructor\n";
    Complex().display();
    cout << endl << endl;
    cout << "Testing one parameter constructor with input 5\n";
    Complex(5).display();
    cout << endl << endl;
    cout << "Testing two parameter constructor with input 0, 0\n";
    Complex(0,0).display();
    cout << endl << endl;
    cout << "Testing two parameter constructor with input 1, 2\n";
    Complex(1,2).display();
    cout << endl << endl;
    cout << "Testing two parameter constructor with input -13, 21\n";
    Complex(-13,21).display();
    cout << endl << endl;
    cout << "Testing two parameter constructor with input -3, -4\n";
    Complex(-3,-4).display();
    cout << endl << endl;
    cout << "Testing addition subtraction and multiplication "
            "for complex numbers: 10+4i and 5+3i\n";
    Complex(10,4).display();
    cout << " + ";
    Complex(5,3).display();
    cout << " = ";
    (Complex(10,4)+Complex(5,3)).display();
    cout << endl;
    Complex(10,4).display();
    cout << " - ";
    Complex(5,3).display();
    cout << " = ";
    (Complex(10,4)-Complex(5,3)).display();
    cout << endl;
    Complex(10,4).display();
    cout << " * ";
    Complex(5,3).display();
    cout << " = ";
    (Complex(10,4)*Complex(5,3)).display();
    cout << endl << endl;
    cout << "Testing addition subtraction and multiplication "
            "for complex numbers: -10-4i and -5-3i\n";
    Complex(-10,-4).display();
    cout << " + ";
    Complex(-5,-3).display();
    cout << " = ";
    (Complex(-10,-4)+Complex(-5,-3)).display();
    cout << endl;
    Complex(-10,-4).display();
    cout << " - ";
    Complex(-5,-3).display();
    cout << " = ";
    (Complex(-10,-4)-Complex(-5,-3)).display();
    cout << endl;
    Complex(-10,-4).display();
    cout << " * ";
    Complex(-5,-3).display();
    cout << " = ";
    (Complex(-10,-4)*Complex(-5,-3)).display();
    cout << endl << endl;
    cout << "Testing == operator with -10-4i and -5-3i\n";
    cout << "Should be false: ";
    cout << (Complex(-10,-4)==Complex(-5,-3)) << endl << endl;
    cout << "Testing == operator with 10+4i and 10+4i\n";
    cout << "Should be true: ";
    cout << (Complex(10,4)==Complex(10,4)) << endl << endl;
    cout << "Testing << and >> operators\n";
    cout << "enter imaginary number of form a+bi or a-bi\n";
    cin >> number;
    cout << number << endl;

    return 0;
}
