#include<iostream>
#include<vector>
using namespace std;

int BuySell(vector<int>& prices){
    int bestBuy = prices[0], maxProfit = 0;
    for (int i = 1; i < prices.size(); i++)
    {
        if(prices[i] > bestBuy){
            maxProfit = max(maxProfit, prices[i] - bestBuy);
        }
        bestBuy = min(bestBuy,prices[i]);
    }
    return maxProfit;
    
}

int main(){
    vector<int> prices = {7, 1, 5, 3, 6, 4};

    cout << BuySell(prices) << endl;
}