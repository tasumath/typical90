#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
long long L;
long long N;
long long K;
long long a[1<<18];

bool solve(long long M){
  long long cnt=0;
  long long pre=0;
  for(int i=0;i<N;i++){
    if(a[i]-pre>=M && L-a[i]>=M){
    cnt=cnt+1;
    pre=a[i];
    }
  }
  if(cnt>=K) return true;

  else return false;

}

int main(){
  cin>>N>>L;
  cin>>K;

for(int i=0;i<N;i++) cin>>a[i];

long long left=-1;
long long right=L+1;
while(right-left>1){
  cout<<right<<" "<<left<<endl;
  long long mid = left + (right-left)/2;
  if(solve(mid)==false){
    right=mid;
    cout<<right<<endl;
  }
  //条件を満たせるよう分けてくれないのならばkeyとなるmidはさらに左側にある
  else{
    left=mid;
    cout<<left<<endl;
  }
  //分けすぎることが可能ならkeyとなるmidはさらに右側にある
}

cout<<left<<endl;

}
