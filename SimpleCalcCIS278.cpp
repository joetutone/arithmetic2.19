//CIS278
//Joe Tutone
//Module 1 2.19
//This program takes input of three integers from the user then finds the sum, average, product, smallest and largest

#include <iostream> //preprocessor directive

using namespace std;

int main()
{
    int a; //Declaring 3 variables to later store our integers
    int b;
    int c;

    int sum; //Declaring variables to store sum, average, product, smallest, and largest
    int average;
    int product;
    int smallest;
    int largest;

    cout << "Input three different integers: "; //User input for a, b, and c
    cin >> a >> b >> c;


    sum = a + b + c; //addition to solve for the sum from user input
    cout << "Sum is " << sum << endl;

    average = (a + b + c) / 3; //Arithmetic for the average: add the three numbers then divide by 3
    cout << "Average is " << average << endl;
    
    product = a * b * c; //Multiply the three number
    cout << "Product is " << product << endl;

    //test out of a b or c which is has the smallest value
    if (a < b && a < c) { //&& I used and Logical operator found in the book pg188
        cout << "Smallest is " << a << endl;
    }
    
    if (b < a && b < c) {
        cout << "Smallest is " << b << endl;
    }

    if (c < b && c < a) {
        cout << "Smallest is " << c << endl;
    }

    //test out of a b or c which has the largest value
    if (a > b && a > c) {
        cout << "Largest is " << a << endl;
    }
    
    if (b > a && b > c) {
        cout << "Largest is " << b << endl;
    }

    if (c > b && c > a) {
        cout << "Largest is " << c << endl;
    }
}

