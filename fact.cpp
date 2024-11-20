/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
double fact(int n)
{
    int x=1;
    if (n<0)
    cout<<"factorial isnt defined for negative number"<<endl;
    for(int i=1 ; i<=n ; i++)
    {
        x*=i;
    }
    return x;
};
int main()
{
    int y;
    cout<<"Enter the number to find factorial"<<endl;
    cin>>y;
    if(y>0)
    cout<<"The factorial of "<<y<<" is "<<fact(y)<<endl;
}