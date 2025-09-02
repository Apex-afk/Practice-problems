#include<iostream>
using namespace std;

int sum(int arr[], int size)
{
 int start = 0;
 int sum = 0;
 while (start < size)
 {
   
   sum += arr[start];
   start ++ ;
 }
 return sum;
    
}
int product(int arr[],int size)
{
 int start = 0;
 int product = 1;
 while (start < size)
 {
   
   product *= arr[start];
   start ++ ;
 }
 return product;
    
}


int main()
{
  int  arr[] = {1, 2, 3, 4, 5, 6};
   int  size = 6;

   cout << sum(arr,size)<<endl;
   cout << product(arr,size)<<endl;
   
}