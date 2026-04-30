#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t ;
    cin>>t;
    while(t--){
        int n ;
        cin>>n;
    
        long long count = 0;
            string s ;
       
            cin>>s;
        

        for(int i = 0; i<s.size();i++){
            if(s[i] =='('){
                count++;
            }
            else {
                count--;
            }
        }
        if(count == 0){
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
    }