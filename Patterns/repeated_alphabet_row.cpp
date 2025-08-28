
#include<iostream>
using namespace std;
int main(){

    int n = 4;
    // char ch = 'A';

    for (int i = 0; i <n; i++)
    {
        char ch = 'A';
        for (int j = 0; j<n; j++) // inner loop starts --> line starts
        
        {
            cout<<ch;
            ch = ch + 1;// 65 = 65 + 1  = 66 => 'B'
        }
        cout<<endl;
    }
    
    return 0;
}
