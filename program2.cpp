#include <iostream>
using namespace std;

void natural(int i,int lim)
{
  //Recursion termination condition: Anything greater than lim is not printed
  if(i==lim)
  { 
   cout<<"\n"<<i;
   return;
  }
  cout<<"\n"<<i;
  return natural(i+1, lim);
}
   
int main()
{
  int num;
  cout<<"PROGRAM TO PRINT ALL NATURAL NUMBERS FROM 1 TO n";
  cout<<"\n \nEnter the upper limit: ";
  cin>>num;
  cout<<"\nThe numbers are: \n";
  natural(1,num);
  return 0;
}
