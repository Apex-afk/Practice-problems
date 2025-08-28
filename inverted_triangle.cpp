//i = 0 1 1 1 1 1    5
//i = 1   2 2 2 2    4
//i = 2     3 3 3    3
//i = 3       4 4    2
//i = 4         5    1

#include<iostream>
using namespace std;

int main(){
    int n = 5;

    for (int i = 0; i < n; i++){

        for (int j = 0; j < i + 1; j++){    
            cout<< " ";

        for (int j = i + 1; j >= n; j--)
            cout<<j;
        }
        
        cout<<endl;
        
    }
    return 0;
}