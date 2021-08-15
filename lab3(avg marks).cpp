/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;


int main()
{
int l, sum = 0;

cout << "Enter the no. of students in the class: " ; 
cin >> l;

int *marks = new int[l]; 

cout << "Enter the marks of each student: ";
for( int i = 0; i < l; i++ ) 
{ 
cin >> *(marks+i);
}
for( int j = 0; j < l; j++ )
{
sum += *(marks+j); 
}

float avg = (float)sum / l; 
cout << "The average marks of the class is: " << avg;

}
