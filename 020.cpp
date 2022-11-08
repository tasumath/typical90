#include <iostream>
#include<vector>
#include<cmath>
using namespace std;
long long mod=1000000007;
long long dp[110000][8];

int main(){

    int N; cin>>N;
    string S;cin>>S;
    //dp[0][0]=1 は書けなかった。
    dp[0][0]=1;
    for(int i=0;i<N;i++){
        for(int j=0;j<=7;j++){
         dp[i+1][j]=dp[i+1][j]+dp[i][j];
         if(S[i]=='a' && j==0) dp[i+1][j+1]=dp[i][j]+dp[i+1][j+1];
         if(S[i]=='t' && j==1) dp[i+1][j+1]=dp[i][j]+dp[i+1][j+1];
         if(S[i]=='c' && j==2) dp[i+1][j+1]=dp[i][j]+dp[i+1][j+1];
         if(S[i]=='o' && j==3) dp[i+1][j+1]=dp[i][j]+dp[i+1][j+1];
         if(S[i]=='d' && j==4) dp[i+1][j+1]=dp[i][j]+dp[i+1][j+1];
         if(S[i]=='e' && j==5) dp[i+1][j+1]=dp[i][j]+dp[i+1][j+1];
         if(S[i]=='r' && j==6) dp[i+1][j+1]=dp[i][j]+dp[i+1][j+1];
        }
        for(int j=0;j<=7;j++) dp[i+1][j]=dp[i+1][j]%mod;
        
    }
    cout<<dp[N][7]<<endl;


}