#include <iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;
long long A[110000];
long long B[110000];
int N;
int main(){
cin>>N;
for(int i=1;i<=N;i++) cin>>A[i];
for(int i=1;i<=N;i++) cin>>B[i];

sort(A+1,A+1+N);
sort(B+1,B+1+N);


long long total=0;
for(int i=1;i<=N;i++){
    long long Answer = abs(A[i]-B[i]);
    total=total+Answer;
}

cout<<total<<endl;


}