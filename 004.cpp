#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int main(){
int H,W; cin>>H>>W;
int a[H+1][W+1]={0};
int b[H+1][W+1]={0};
int sumr[H+1]={0};
int sumg[W+1]={0};



 for(int i=0;i<H;i++){
    for(int j=0;j<W;j++){
        cin>>a[i][j];
    }
 }

 for(int i=0;i<H;i++){
    for(int j=0;j<W;j++){
       sumr[i]=a[i][j]+sumr[i];
    }
 }

 //W,Hの取り方に注意すること
 for(int i=0;i<W;i++){
    for(int j=0;j<H;j++){
       sumg[i]=a[j][i]+sumg[i];
    }
 }

 for(int i=0;i<H;i++){
    for(int j=0;j<W;j++){
        b[i][j]=sumr[i]+sumg[j]-a[i][j];
    }
 }
 for(int i=0;i<H;i++){
    for(int j=0;j<W;j++){
        cout<<b[i][j];
        if(j==W-1) cout<<endl;
        else cout<<" ";
    }
 }

}
