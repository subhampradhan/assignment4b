#include <iostream>
using namespace std;

int even(int low, int upp)
{
  if(low<=upp)
   return (low + even(low+2,upp));
  else 
   return 0;
}
int odd(int low, int upp)
{
  if(low<=upp)
   return (low + odd(low+2,upp));
  else 
   return 0;
}

int main()
{ 
  int num1, num2, evensum, oddsum;
  cout<<"PROGRAM TO CALCULATE SUM OF EVEN AND ODD NUMBERS IN A RANGE USING RECURSSIONS";
  cout<<"\n \nEnter the lower and upper limit of range: ";
  cin>>num1>>num2; 
  
  if(num1%2==0)
  {
  evensum=even(num1, num2);
  oddsum=odd(num1+1, num2);
  }
  else
  {
  oddsum=odd(num1, num2);
  evensum=even(num1+1,num2);
  }
  cout<<"\nSum of even numbers: "<<evensum;
  cout<<"\nSum of odd numbers: "<<oddsum;
  return 0;
}
