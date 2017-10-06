#include <iostream>
using namespace std;
//C++ program to determine the maximum and minmum of all array elements using recursion.

void min_max(int numbers[],int c,int size,int min,int max)
{
	if(c<size)
  {
		if(numbers[c]<min)
			min=numbers[c];
		if(numbers[c]>max)
			max=numbers[c];
		min_max(numbers,++c,size,min,max);
	}
	else
  {
		cout<<"Maximum equals "<<max<<endl;
		cout<<"Minimum equals "<<min<<endl;
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
  min_max(arr,0,size);
  return 0;
}
