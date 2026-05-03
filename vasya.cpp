#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
   
    int diff = min(a,b);
    int same = abs(b-a)/2;

    cout<<diff<<" "<<same;

    return 0;
}