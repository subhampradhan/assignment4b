#include <iostream>
using namespace std;
//C++ program to find sum of elements of array using recursion.

void sumprint(int numbers[],int c,int size,int sum)
{
	if(c<size){
		sum+=numbers[c];
		sumprint(numbers,++c,size,sum);
	}
	else
		cout<<"Sum equals "<<sum;
}

int main()
{
  int size;
  cout<<"C++ program find sum of elements of array using recursion.";
  cout<<"\n \nEnter the size of array: ";
  cin>>size;
  int arr[size];
  for(int i=0;i<size;i++)
  {
		cout<<"Enter your element:";
		cin>>arr[i];
	}
  sumprint(arr,0,size);
  return 0;
}
