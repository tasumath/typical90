#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;
long long A;
long long B;
long long C;
long long N;

int main(){
   cin>>N;
   cin>>A>>B>>C;

long long x;
long long total;
long long min_value=2000000000;//(1LL<<30)の方が確実な感じだった
int k;

   for(int i=0;i<=9999;i++){
      for(int j=0;j<=9999;j++){
      x = N - (A*i + B*j);
      if(x<0) continue;//気持ち速くなる
      if(x%C==0 && x>=0){
         k=x/C;
         total=i+j+k;
         if(total<min_value){
            min_value=total;
         }
      }
      }
   }

   cout<<min_value<<endl;

}
