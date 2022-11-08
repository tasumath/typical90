#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int c[110000];
int p[110000];
int L[110000];
int R[110000];
int A[110000]={0};
int B[110000]={0};
int sum1[110000];
int sum2[110000];

int main(){
int N; cin>>N;
int sum=0;
int total=0;
for(int i=1;i<=N;i++){
   cin>>c[i]>>p[i];
   //i番目までのクラスCiの累積和
   if(c[i]==1){
      A[i]=A[i]+p[i];
      sum=sum+A[i];
      sum1[i]=sum1[i]+sum;
      sum2[i]=sum2[i-1];
   }
   if(c[i]==2){
     B[i]=B[i]+p[i];
     total=total+B[i];
     sum2[i]=sum2[i]+total;
     sum1[i]=sum1[i-1];
   }
}

int Q; cin>>Q;
for(int i=1;i<=Q;i++){
   cin>>L[i]>>R[i];
   int l=L[i];
   int r=R[i];
   int output1=sum1[r]-sum1[l-1];
   int output2=sum2[r]-sum2[l-1];
   cout<<output1<<" "<<output2<<endl;

}

}
