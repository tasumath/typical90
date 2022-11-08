#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int main(){
int H,W; cin>>H>>W;

int width,height;

if(H==1 && W%2==1){
  width=W;
  height=1;
  cout<<width*height<<endl;
  return 0;
}
if(H==1 && W%2==0){
  width=W;
  height=1;
  cout<<width*height<<endl;
  return 0;
}
if(W==1 && H%2==1){
  height=H;
  width=1;
  cout<<width*height<<endl;
  return 0;
}
if(W==1 && H%2==0){
  height=H;
  width=1;
  cout<<width*height<<endl;
  return 0;
}


//
if(W%2==1 && H%2==0){
  width=W/2+1;
  height=H/2;
}

if(W%2==0 && H%2==0){
  width=W/2;
  height=H/2;
}

if(W%2==1 && H%2==1){
  width=W/2+1;
  height=H/2+1;
}

if(W%2==0 && H%2==1){
  width=W/2;
  height=H/2+1;
}

cout<<width*height<<endl;

}




