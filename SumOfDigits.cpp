#include <iostream>
using namespace std;

int SumOfDigit(int n)
{
    int DigitSum = 0;
    while (n > 0)
    {
        int last_digit = n % 10;

        n /= 10;
        DigitSum += last_digit;
    }

    return DigitSum;
}

int main()
{

    cout << "sum : " << SumOfDigit(123456789)<<endl;
}