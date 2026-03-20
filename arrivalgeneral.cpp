#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n ;
    cin>>n;
    int maxh = 0;
    int minh = INT_MAX;
    int maxp = 0;
    int minp = 0;
    vector<int>height(n);

    for(int i = 0; i<n;i++){
    cin>>height[i];
     if(maxh <height[i] ){
        maxh = height[i];
        maxp = i;
     }
    if (minh>=height[i]){
        minh = height[i];
        minp = i;
     }
   }
    int swaps = maxp - 0 + abs(n-minp-1);
    if(minp<maxp) swaps--;
    cout<<swaps<<endl;
    return 0 ;

}
