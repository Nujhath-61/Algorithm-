#include<bits/stdc++.h>
using namespace std;
struct item {
int weight,profit;
};
bool cmp  (item A,item B){
double  a = double(A.profit)/(double)(A.weight);
double b = double(B.profit)/(double)(B.weight);
return a>b;

}
double fracKnap (struct item arr[],int limit,int n )
{
    sort(arr,arr+n,cmp);
    double maxProfit =  0.0;
    for(int i = 0;i<n;i++ )
    {
        if(arr[i].weight<=limit)
        {
            limit -= arr[i].weight;
            maxProfit += arr[i].profit;
        }
        else
        {
            int r =  (double)(arr[i].profit)/(double)(arr[i].weight);
            int m = limit * r;
            maxProfit += m;
            break;
        }

    }
    return maxProfit;
}

int main ()
{
int n = 3;
int maxWeight = 50;
 item arr[n];
 arr[0].profit = 60;
    arr[0].weight = 10;

    arr[1].profit = 100;
    arr[1].weight = 20;

    arr[2].profit = 120;
    arr[2].weight = 30;
    cout<<fracKnap(arr,maxWeight,n);

}
