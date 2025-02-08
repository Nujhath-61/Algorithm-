#include<bits/stdc++.h>
using namespace std;

void LCS(int m,int n,string s1,string s2)
{
   int lcs[m+1][n+1];
   for(int i = 0;i<=m;i++)
   {
       for(int j = 0;j<=n;j++)
       {
          if(i == 0 || j == 0)
          {
              lcs[i][j] = 0;
          }
          else if(s1[i-1] == s2[j-1])
          {
              int r = lcs[i-1][j-1];
              lcs[i][j] = r + 1;
          }
          else{
            if(lcs[i-1][j]>lcs[i][j-1] )
            {
                lcs[i][j] = lcs[i-1][j];
          }
          else{
            lcs[i][j] = lcs[i][j-1];
          }
       }

   }
}
cout<<"table for LCS:"<<endl;
for(int i = 0;i<=m;i++)
   {
       for(int j = 0;j<=n;j++)
       {
           cout<<lcs[i][j]<<" ";
       }
       cout<<endl;
   }


  cout<<"Length of the sequence:"<<lcs[m][n]<<endl;


}
int main()
{
   string s1;
   string s2;
   cin>>s1>>s2;
   int m = s1.length();
   int n = s2.length();
   LCS(m,n,s1,s2);
/*Input:  cyclone cylinder*/
}
