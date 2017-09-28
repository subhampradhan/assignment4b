#include <iostream>
using namespace std;

//PROGRAM TO PRINT THE SUM OF N CONSECUTIVE NUMBERS USING RECURSSIONS
int sum(int i)
{ 
  int sm=0;
  //Recursion termination condition: Anything less than 1 is not summed up
  if(i==0)
  { 
   return sm;
  }
  sm+=i;
  return (sm+sum(i-1));
}
   
int main()
{
  int num;
  cout<<"PROGRAM TO PRINT SUM OF ALL NATURAL NUMBERS FROM 1 TO n";
  cout<<"\n \nEnter the upper limit: ";
  cin>>num;
  int sum1=sum(num);
  cout<<"\n \nThe sum is: "<<sum1;
  return 0;
}
