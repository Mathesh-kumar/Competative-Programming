#include<iostream>
#include<cmath>
using namespace std;

#define nl "\n"

int main()
{
    // fmin() - find minimum of two numbers
    cout<<"Minimum of 10 & 20 : "<<fmin(10, 20)<<nl;

    // fmax() - find maximum of two numbers
    cout<<"Maximum of 100 & 20 : "<<fmax(100, 20)<<nl;

    // pow() - find power of a number
    cout<<"Power of 5 & 2 : "<<pow(5, 2)<<nl;

    // cbrt() - find cube root of a number
    cout<<"Square root of 144 : "<<sqrt(144)<<nl;

    // sqrt() - find square root of a number
    cout<<"Cube root of 64 : "<<cbrt(64)<<nl<<nl;

    // ceil() - rounds the value to nearest integer which is not less than given value
    cout<<"Ceil of 30.1 : "<<ceil(30.1)<<nl;
    cout<<"Ceil of 30.9 : "<<ceil(30.9)<<nl<<nl;


    // floor() - rounds the value to nearest integer which is not grater than given value
    cout<<"Floor of 30.1 : "<<floor(30.1)<<nl;
    cout<<"Floor of 30.9 : "<<floor(30.9)<<nl<<nl;



    // round() - rounds off the given value
    cout<<"Round of 30.1 : "<<round(30.1)<<nl;
    cout<<"Round of 30.5 : "<<round(30.5)<<nl<<nl;

    // abs() - find abosolute of interger value
    cout<<"Abosolute of -45 : "<<abs(-45)<<nl<<nl;

    return 0;
}