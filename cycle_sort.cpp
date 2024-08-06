#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> arr(n);
    
    for(int i = 0; i < n; i++) cin >> arr[i];
    
    for(int i = 0; i < n; i++){
        while(arr[i] != i+1) swap(arr[i], arr[arr[i] - 1]);
    }
    
    for(int i = 0; i < n; i++) cout<<arr[i]<<"  ";
}

int main(){
    solve();
}