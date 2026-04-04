#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> ans;

        int l = 1, r = 3*n;

        while(l <= r){
            ans.push_back(l);
            ans.push_back(r-1);
            ans.push_back(r);
            l++;
            r -= 2;
        }

        for(int x : ans) cout << x << " ";
        cout << "\n";
    }

    return 0;
}