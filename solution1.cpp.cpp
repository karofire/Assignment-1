/*Name:           [ EDOREH CLEMENT OGHENEKARO ]
Department:     [ COMPUTER SCIENCE ]
Matric. No:     [ pds/2013/4206 ]

Program that reads an integer and determines
and prints whether it’s odd or even
*/
#include <iostream>
using namespace std;

int main()
{

int n;

cout << "Welcome - This program reads an integer\n";
cout << "Enter an integer\n\n";
cin>>n;
if(n%2 ==0)
cout << "is even";
else
cout<<n<<"is odd";
cout << "\nThanks and Goodbye";

system("PAUSE");
return EXIT_SUCCESS;
}
