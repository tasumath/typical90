#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

//(の前に)が来る&&その時点での(の数を超えるを満たすとアウトになる。
//()の数はNに到達したときに同じ数となる。(差し引きで0となる)


int main(){
int N; cin>>N;

for(int i=0;i<(1<<N);i++){
    int dp=0;
    for(int bit=N-1;bit>=0;bit--){
        if((i & 1<<(bit))==0) dp=dp+1;
        else dp=dp-1;
        if(dp<0) break;
        //最後の判定
        if(bit==0 && dp==0){
            for(int bit=N-1;bit>=0;bit--){
                if((i & 1<<(bit))==0) cout<<"(";
                else cout<<")";
            }
            cout<<endl;
        }
    }
}

}

//bit変数の範囲の取り方と動かし方が間違えていた。
