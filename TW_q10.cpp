#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        int m=nums1.size();
        int n=nums2.size();
        int i=0,j=0;
        while(i<m && j<n){
            if(nums1[i]<=nums2[j]){
                v.push_back(nums1[i++]);
            }
            else
                v.push_back(nums2[j++]);
        }
        while(i<m){
            v.push_back(nums1[i++]);
            
        }
        while(j<n){
            v.push_back(nums2[j++]);
        }
        if((m+n)&1)
            return double(v[(m+n)/2]);
        return double(v[(m+n)/2]+v[(m+n)/2-1])/2.0;
       
    }
};

int main(){
    int a,b;
    vector<int> v1,v2;
    for(int i=0;i<a;i++){
        int k;
        cin>>k;
        v1.push_back(k);
    }
    for(int i=0;i<b;i++){
        int k;cin>>k;v2.push_back(k);
    }
    Solution s;

    double p=s.findMedianSortedArrays(v1,v2);
    cout<<p<<endl;
    return 0;
}