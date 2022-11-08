#include <iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;
const int INF=2000000000;//桁に注意
int a[310000];
int b[310000];
int N;
int Q;
int main(){
  cin>>N;
  for(int i=1;i<=N;i++) cin>>a[i];
  cin>>Q;
  for(int i=1;i<=Q;i++) cin>>b[i];

  sort(a+1,a+N+1);
  

  for(int i=1;i<=Q;i++){
    int left=0;
    int right=N;
    while(right-left>1){
     int mid=left+(right-left)/2;
     if(b[i]<=a[mid]){
        right=mid;
     }
     if(a[mid]<b[i]){
        left=mid;
     }
    }
    int diff1=INF;
    int diff2=INF;
    int diff3=INF;
    int diff4=INF;
    int diff5=INF;
    int diff6=INF;
    int diff7=INF;
    int koho1=INF;
    int koho2=INF;
    int koho3=INF;
    int koho4=INF;
    if(2<=left && left<=N-1){
        diff1=abs(a[left-1]-b[i]);
        diff2=abs(a[left]-b[i]);
        diff3=abs(a[left+1]-b[i]);
        koho1=min(diff1,min(diff2,diff3));
    }
    if(left==1){
       diff4=abs(a[left]-b[i]);
       diff5=abs(a[left+1]-b[i]);
       koho2=min(diff4,diff5);
    }
    if(left==N){
       diff6=abs(a[left]-b[i]);
       diff7=abs(a[left-1]-b[i]);
       koho3=min(diff6,diff7);       
    }
    if(left==0){
        koho4=abs(a[left+1]-b[i]);
    }
    cout<<min(min(koho1,koho2),min(koho3,koho4))<<endl;
  }

}