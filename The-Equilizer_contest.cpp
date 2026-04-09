#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int k ;
        cin>>k;
        vector<int>a(n);
        long long score =0;
        for(int i =0 ;i<n;i++){
            cin>>a[i];
            score+=a[i];
        }
        if(score%2==1){
            cout<<"YES"<<endl;
        }
        else if(score%2==0){
            if(n*k %2==0){
                cout<<"YES"<<endl;
            }
            else {
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}