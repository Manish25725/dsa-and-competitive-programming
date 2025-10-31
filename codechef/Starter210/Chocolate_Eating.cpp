#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    
    while(t--){
        int m,d;
        cin>>m>>d;
        int sum=0;
        if(m == d) sum +=(2*m - 1);
        else sum+= (m+d);
        cout<<sum<<endl;
    }
    return 0;
}
