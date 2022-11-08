#include <bits/stdc++.h>
using namespace std;

int N;
string S[1<<18];
map<string,int> Score;

int main(){
cin>>N;
for(int i=0;i<N;i++){
  cin>>S[i];
  if(Score[S[i]]==0){
    Score[S[i]]=1;
    cout<<i+1<<endl;
  }
}


}