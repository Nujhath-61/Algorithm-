#include<bits/stdc++.h>
using namespace std;
struct act
{
    int start,finish;
};
bool cmp (act a, act b)
{
    return (a.finish<b.finish);
}
void maxact(act arr[],int n)
{
    sort(arr,arr+n,cmp);
    int i=0;
    int cnt=1;
    cout<<"Selected activities are:"<<endl<<"Start"<<"-"<<"Finish"<<endl;;
    cout<<arr[i].start<<"   -   "<<arr[i].finish<<endl;
    for(int j=1; j<n; j++)
    {
        if(arr[j].start >=  arr[i].finish)
        {
            cout<<arr[j].start<<"   -   "<<arr[j].finish<<endl;
            i=j;
            cnt++;
        }

    }
    cout<<"Number of Maximum activity:"<<" "<<cnt<<endl;
}
int main()
{
    struct act arr[4];
    int n=4;
    arr[0].start = 1;
    arr[0].finish = 2;
    arr[1].start = 3;
    arr[1].finish = 4;
    arr[2].start = 2;
    arr[2].finish = 3;
    arr[3].start = 5;
    arr[3].finish = 6;
    maxact(arr,n);
}

