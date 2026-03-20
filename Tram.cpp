#include<iostream>
using namespace std;

int main(){
    int n ;
    cin>>n ;
  int mincap = INT_MIN;
  int total = 0;
    int a,b;
    while(n--){
      cin>>a>>b;
    total-=a;
    total+=b;

    mincap= max(mincap,total);
    }
    cout<<mincap<<endl;
    return 0;
}