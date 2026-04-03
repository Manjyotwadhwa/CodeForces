#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n ;
    cin>>n;

    vector<int>a(n);
  int total = 0;
  int sum = 0;
    for(int i =0;i<n;i++){
        cin>>a[i];
      total+=a[i];
    }
    int count = 0;
    sort(a.rbegin(),a.rend()) ;
    for(int i =0;i<n;i++){
        if(sum>(total/2)){
            break;
        }
        sum+=a[i];
        count++;
    }
    cout<<count<<endl;
    return 0;
}