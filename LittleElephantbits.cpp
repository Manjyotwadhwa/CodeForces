#include<bits/stdc++.h>
using namespace std;

int main(){
    string s ;
    cin>>s;
  bool remove = false;
    for(int i = 0; i<s.size();i++){
        if(s[i] =='0'){
            remove = true;
            s.erase(i,1);
            break;
        }
    }
  if(!remove) {
    s.pop_back();
  }
  cout<<s<<endl;
    return 0;
}