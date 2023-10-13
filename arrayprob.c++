/*Write a C++ program that reads a maximum of 100 integers from the keyboard,
stores them in a long array, sorts the integers in ascending order, and displays
sorted output. Input can be terminated by any invalid input, such as a letter. */

#include <iostream>
#include <iomanip>
using namespace std;

#define max 100 // Maximum number
long number[max];

int main(){
    int i, cnt; // Index, quantity
    cout << "\nS o r t i n g I n t e g e r s \n"<< endl;
    // To input the integers:
    cout << "Enter up to 100 integers \n"<< "(Quit with any letter):" << endl;
for( i = 0; i < max && cin >> number[i]; ++i)
    cnt = i;
    // To sort the numbers:
    bool sorted = false; // Not yet sorted.
    long help; // Swap.
    int end = cnt; // End of a loop.
    while( !sorted) // As long as not
{ // yet sorted.
sorted = true;
--end;
for( i = 0; i < end; ++i) // Compares
{ // adjacent integers.
if( number[i] > number[i+1])
{
sorted = false; // Not yet sorted.
help = number[i]; // Swap.
number[i] = number[i+1];
number[i+1]= help;
}
}
}}