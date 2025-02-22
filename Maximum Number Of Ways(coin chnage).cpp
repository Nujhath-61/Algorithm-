#include<bits/stdc++.h>
using namespace std;

void MaxWay(int coin[],int amount,int n)
{
  int way[n+1][amount+1];
  for(int i = 0;i<=n;i++)
    {

        for(int j =0;j<=amount;j++)
        {
           if(i==0)

           {
               way[i][j] = (j==0) ? 1 : 0;
           }
            else if(coin[i-1]>j)
            {
              way[i][j] = way[i-1][j];

            }
            else{
                way[i][j] = way[i-1][j]+ way[i][j-coin[i-1]];
            }

        }
    }

    cout<<"Total Number of ways:"<<way[n][amount];





}

int main()
{

 int coin[] = {2,3,5,6};
 int amount = 10;
 int item = 4;
 MaxWay (coin, amount ,item);

}

