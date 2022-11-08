#include <vector>
#include <iostream>
using namespace std;
//ローカル変数に置くと値がおかしくなる
int a[110000];
int b[110000];
int c[110000];
//int型の配列で置くときはグローバル領域におかないと値が求まらない
int ant[47];
int bnt[47];
int cnt[47];
//int型配列でも無事にAC出来た。vectorの方が僅かに速い。
int main(){


int N; cin>>N;

//i=1スタートからi=0スタートに変えてみるけど変わらない(そりゃそう)
//for分の余分な{}を抜いても関係なかった(前科あったので念のため)

  for(int i=0;i<N;i++) cin>>a[i];
  //ant[a[i]%46]=ant[a[i]%46]+1;
  for(int i=0;i<N;i++) cin>>b[i];
  //bnt[b[i]%46]=bnt[b[i]%46]+1;
  for(int i=0;i<N;i++) cin>>c[i];
  //cnt[c[i]%46]=cnt[c[i]%46]+1;

//vectorの要素数を宣言すること


  //読み込みとカウント別にしてみる(関係ない)
  for(int i=0;i<N;i++) ant[a[i]%46]=ant[a[i]%46]+1;  
  for(int i=0;i<N;i++) bnt[b[i]%46]=bnt[b[i]%46]+1;
  for(int i=0;i<N;i++) cnt[c[i]%46]=cnt[c[i]%46]+1;
  
//int sum=0;long longに変えてACが若干増えた(スタックオーバー)
long long sum=0;

for(int i=0;i<=45;i++){
  for(int j=0;j<=45;j++){
    for(int k=0;k<=45;k++){
     if((i+j+k)%46==0 && ant[i]>0 && bnt[j]>0 && cnt[k]>0){
      //(long long)で宣言し直さないとスタックオーバーを起こす
      sum=sum+(long long)(ant[i])*bnt[j]*cnt[k];
      //原因はここだった。(long long)の宣言はantだけにかけている
     }
    }
  }
}

cout<<sum<<endl;

}