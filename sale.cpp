#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n ,m;
    cin>>n>>m;

    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    
    long long sum =0;
   
    for(int i =0; i<a.size();i++){
        if(m>0 && a[i]<0){
            sum+=  abs(a[i]);
            m--;
        }
    }
    cout<<sum<<endl;
    return 0;
}