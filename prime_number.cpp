#include <iostream>
using namespace std;

bool Prime(int n)
{
    if (n == 1 || n == 0)
    {
        return false;
    }
    for (int i = 2; i < n - 1; i++)
    {
        if (n % i == 0)
        {
            return true;
        }
    }
    return 0;
}

int main()
{ 
    

    if (Prime(45))
    {
       cout<<"The number is not Prime "<<endl;
    }
    else
    {
        cout<<"The number is Prime"<<endl;
    }
    
    
}