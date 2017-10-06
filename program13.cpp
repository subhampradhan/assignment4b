#include <iostream>
using namespace std;
//C++ program to display all array elements using recursion.

void printfunc(int num[],int c,int size)
{
	if(c<size)
  {
		cout<<num[c]<<endl;
		printfunc(num,++c,size);
  }
}

int main()
{
  int size;
  cout<<"C++ program to display all array elements using recursion";
  cout<<"\n \nEnter the size of array: ";
  cin>>size;
  int arr[size];
  for(int i=0;i<size;i++)
  {
		cout<<"Enter your element:";
		cin>>arr[i];
	}
  printfunc(arr,0,size);
  return 0;
}
