#include<bits/stdc++.h>
using namespace std;
struct act{
int start,finish;
};
bool cmp (act a, act b)
{
    return a.finish>b.finish;
}
void activity(struct arr[],int event,int n )
{
   sort(arr,arr+n,cmp);
    cout<<arr[0].start<<" "<<arr[0].finish;

    for(int i = 1;i<n;i++)
    {
        if(arr[i].finish<=arr[i+1].start)
        {
              cout<<arr[i].start<<" "<<arr[i].finish;
        }
        cout<<endl;
    }
}
int main ()
struct act arr[4];
arr[0].start = 1;
arr[0].finish = 2;
arr[1].start = 3;
arr[1].finish = 4;
arr[2].start = 2;
arr[2].finish = 3;
arr[3].start = 5;
arr[3].finish = 6;
int n = 4;
int eve= 4;

   activity(arr,eve,n);



}
