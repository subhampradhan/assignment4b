#include <iostream>
using namespace std;

void evenodd(int n1, int n2)
{
 if(n1!=n2)
 {
  if(n1%2==0)
  {
   cout<<"\n"<<n1<<" is an even number";
   evenodd(n1+1,n2);
  }
  else 
  {
   cout<<"\n"<<n1<<" is and odd number";
   evenodd(n1+1,n2);
  }
 }
 //recurssion termination, n1=n2 case
 else
 {
  if(n1%2==0)
  {
   cout<<"\n"<<n1<<" is an even number";
   return;
  }
  else 
  {
   cout<<"\n"<<n1<<" is and odd number";
   return;
  }
 }
}

int main()
{
  int num1, num2;
  cout<<"PROGRAM TO CHECK EVEN ODD FOR A RANGE OF NUMBERS USING RECURSSION";
  cout<<"\n \nEnter the lower and upper limit respectively: ";
  cin>>num1>>num2;
  evenodd(num1, num2);
  return 0;
}
