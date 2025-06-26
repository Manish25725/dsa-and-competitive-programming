#include<bits/stdc++.h>
using namespace std;~

class Solution {
public:
    long long helper(vector<int>& nums1, vector<int>& nums2, long long target){
        long long  count=0;
        int n=nums2.size();
        for(int a : nums1){
            if(a==0){
                if(target>=0) count+=n;
            }
            else if(a>0){
                int m=-1;
                int low=0,high=n-1;
                while(low<=high){
                    int mid=low+(high-low)/2;
                    long long product=1LL*a*nums2[mid];
                    if(product<=target){
                        m=mid;
                        low=mid+1;
                    }
                    else high=mid-1;
                }
                count+=(m+1);
            }
            else{
                int lo=0,hi=n-1;
                int m=n;
                while(lo<=hi){
                    int mid=lo+(hi-lo)/2;
                    long long product=1LL*nums2[mid]*a;
                    if(product<=target){
                        m=mid;
                        hi=mid-1;
                    }
                    else lo=mid+1;
                }
                count+=(n-m);
            }
        }
        return count;
    }
    long long kthSmallestProduct(vector<int>& nums1, vector<int>& nums2, long long k){
        long long result=0;
        long long l=-1e10;
        long long r=1e10;
        while(l<=r){
            long long mid=l+(r-l)/2;
            long long countsmallest=helper(nums1,nums2,mid);
            if(countsmallest>=k){
                result=mid;
                r=mid-1;
            }
            else l=mid+1;
        }
        return result;
    }
};