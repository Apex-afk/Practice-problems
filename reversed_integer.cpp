#include<iostream>
using namespace std;

int ReverseInt(int n)
{
   int reversed = 0;

    while (n > 0)
    {
        int last_digit = n % 10;

        n /= 10;

        reversed = reversed * 10 + last_digit;
    }
    return reversed;
}

int main (){
    int num;
    cout<<"Enter the Number : ";
    cin>>num;

    cout << "Reversed : "<<ReverseInt(num)<<endl;
}