#include<bits/stdc++.h>
using namespace std;
int Knapsack(int weight[],int profit[],int n,int limit)
{
    int maxProfit[n+1][limit+1];
    for(int i = 0;i<=n;i++)
    {
        for(int j = 0;j<=limit;j++)
        {
            if( i == 0 || j==0)
            {
                maxProfit[i][j] = 0;
            }
            else if (j < weight[i-1])
            {
                maxProfit[i][j] = maxProfit[i-1][j];
            }
            else
            {
                maxProfit[i][j] = max(profit[i-1]+maxProfit[i-1][j-weight[i-1]],maxProfit[i-1][j]);
            }
        }
    }
   cout<<"Table for 0/1 knapsack:"<<endl;
    for(int i = 0;i<=n;i++)
    {
        for(int j = 0;j<=limit;j++)
        {
            cout<<maxProfit[i][j]<<" ";
        }
        cout<<endl;
    }
    return maxProfit[n][limit];

}





int main ()
{
    int weight[4] = {2,3,4,5};
    int profit[4] = {1,2,5,6};
int item = 4;
int maxWeight = 8;
  //cout<<"Table for 0/1 knapsack:"<<endl;
int r  =  Knapsack(weight,profit,item,maxWeight);
cout<<"maximum profit of knapsack is: "<<r;


}
