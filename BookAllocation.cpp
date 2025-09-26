#include<iostream>
#include<vector>
using namespace std;

bool isValid(vector<int> arr, int n ,int m, int Maxallowedpages){
    int student = 1, pages = 0;
        for(int i = 0; i < n; i++){
            if(arr[i] > Maxallowedpages){
                return false;
            }
            if(pages + arr[i] <= Maxallowedpages){
                pages += arr[i];
            }
            else{
                student++;
                pages = arr[i];
            }
        }
        return student > m ?  false : true;

}

int bookAllocation(vector<int> arr, int n ,int m)
{
    int sum = 0;
    for (int i = 0; i < n; i++){
        sum += arr[i];
    }
    int start = 0, end = sum;
int ans = -1;
    while (start <= end)
    {   
        int mid = start + (end - start) / 2;
            if(isValid(arr, n, m, mid)){
                ans = mid;
                end = mid - 1;
            }
            else {
                start = mid + 1;
            }
    }
    return ans;
}

int main (){
    vector<int> arr = {15, 17, 20};
    int n = 4, m = 2;

    cout << bookAllocation(arr, n, m) << endl;


}