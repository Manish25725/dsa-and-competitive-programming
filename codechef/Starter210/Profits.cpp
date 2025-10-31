#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n,x;
        cin>>n>>x;
        int sum=0;
        for(int i = x+1;i<=n;i++) sum+=(i-x);
        cout<<sum<<endl;
    }
    
    return 0;
}
