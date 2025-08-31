#include<iostream>
using namespace std;

int DectoBinary(int decNum){
    int ans = 0, pow = 1;
    while (decNum > 0)
    {
        int rem = decNum % 2;
        decNum /= 2;

        ans += (rem * pow);
        pow *=10;

    }
    return ans;
    
}

int BinarytoDec(int BinNum){
    int ans = 0, pow = 1;
    while (BinNum > 0)
    {
        int rem = BinNum % 10;
        ans += (rem*pow);
        
        
        BinNum /= 10;
        pow *= 2;
    }
    return ans;
}



int main(){
    // int decNum = 50;

    // for (int i = 1; i <= 10; i++)
    // {
    //     cout<<DectoBinary(i)<<endl;
    // }
    
    cout<<BinarytoDec(101011)<<endl;
}