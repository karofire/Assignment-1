/*   Name:           [ EDOREH CLEMENT OGHENEKARO]
   Department:     [ COMPUTER SCIENCE ]
   Matric. No:     [ PDS/2013/4206]
 Program that reads two integers and determines
 if first is a multiple of second
 */
#include <iostream>
using namespace std;

int main()
{
    
    int num1;
    int num2;
    cout << "Welcome - This program reads two integers\n";
    cout << "Enter two integers\n\n";
    cin>>num1>>num2;
    cout <<num1<<"is a multiple of"<<num2<<endl;
      if(num1%num2 ==0)   
    cout <<num1<<"is not a multiple of"<<num2<<endl;
      if(num1%num2 !=0)
    cout << "\nThanks and Goodbye";
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
