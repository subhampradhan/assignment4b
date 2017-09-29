#include <iostream>
using namespace std;

int lcm(int a, int b);


int main()
{
    int num1, num2, LCM;

    /* Input two numbers from user */
    cout<<"Enter any two numbers to find lcm: ";
    cin>>num1>>num2;
    
    /*
     * Ensures that first parameter of LCM function 
     * is always less than second 
     */
    if(num1 > num2)
        LCM = lcm(num2, num1);
    else
        LCM = lcm(num1, num2);
        
    cout<<"LCM of "<<num1<<" and "<<num2<<"is"<<LCM;
    
    return 0;
}


/**
 * Recursive function to find lcm of two numbers 'a' and 'b'.
 * Here 'a' needs to be always less than 'b'.
 */
int lcm(int a, int b)
{
    static int multiple = 0;
    
    /* Increments multiple by adding max value to it */
    multiple += b;
    
    /*
     * Base condition of recursion
     * If found a common multiple then return the multiple.
     */
    if((multiple % a == 0) && (multiple % b == 0))
    {
        return multiple;
    }
    else 
    {
        return lcm(a, b);
    }
}
