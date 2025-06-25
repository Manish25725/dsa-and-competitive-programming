#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int even=0,odd=0;
	    while(n--){
	        int ele;
	        cin>>ele;
	        if(ele%2!=0) odd++;
	        else even++;
	    }
	    if(even==0 || odd==0) cout<<0<<endl;
	    else{
	        int op1=even;
	        int op2=(odd%2==0)? (odd/2) :INT_MAX;
	        cout<<min(op1,op2)<<endl;
	    }
	}
}
