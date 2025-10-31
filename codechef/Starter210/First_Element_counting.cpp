#include <bits/stdc++.h>
using namespace std;

void solve(vector<int>& v){
    int n = v.size();
    if(n<=2){
        while(n--) cout<<-1<<" ";
        return;
    }
    unordered_map<int,int> mp;
    vector<int> ans(n,0);
    for(int i=0;i<n;i++) mp[v[i]] = i;
    sort(v.begin(),v.end());
    
    for(int i=0;i<n;i++){
        if(i==0 || i==n-1){
            int idx = mp[v[i]];
            ans[idx] = -1;
        }
        else{
            int a = v[i-1];
            int x = v[i];
            int b = v[i+1];
            int sum =0;
            //1st
            int d1=(x+a)/2;
            int d2 = (x+b)/2;
            sum = d2 - d1;
            int idx = mp[v[i]];
            ans[idx] = sum;
        }
        
    }
    for(int ele : ans) cout<<ele<<" ";
    return;
}

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        solve(v);
        cout<<endl;
    }
    return 0;
}
