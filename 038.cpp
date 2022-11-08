#include <bits/stdc++.h>
using namespace std;

struct Mypair{
  int x;
  string y;

  void print(){
    cout<<"x="<<x<<endl;
    cout<<"y="<<y<<endl;
  }
};

int main(){
  Mypair p = {12345,"Hello"};
  p.print();

  Mypair q={67890,"APG4b"};
  q.print();
}