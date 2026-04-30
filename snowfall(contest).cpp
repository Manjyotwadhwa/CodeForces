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

        vector<int> g1, g2, g3, g4;

        for(int i = 0; i < n; i++){
            int x;
            cin >> x;

            if(x % 6 == 0) g1.push_back(x);
            else if(x % 2 == 0) g2.push_back(x);
            else if(x % 3 == 0) g3.push_back(x);
            else g4.push_back(x);
        }

        for(int x : g1) cout << x << " ";
        for(int x : g2) cout << x << " ";
        for(int x : g4) cout << x << " ";
        for(int x : g3) cout << x << " ";
        
        cout << "\n";
    }

    return 0;
}