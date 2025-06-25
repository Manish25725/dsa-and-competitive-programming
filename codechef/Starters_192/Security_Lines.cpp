#include <bits/stdc++.h>
using namespace std;


int helper(vector<int>& v){
    int n=v.size();
    int ans=v[0];
    for(int i=0;i<n;i++){
        int d=max(0,v[i]+1-i);
        ans=min(ans,i+d);
    }
    return ans;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> v;
	    while(n--){
	        int ele;
	        cin>>ele;
	        v.push_back(ele);
	    }
	    cout<<helper(v)<<endl;
	}
	return 0;
}
