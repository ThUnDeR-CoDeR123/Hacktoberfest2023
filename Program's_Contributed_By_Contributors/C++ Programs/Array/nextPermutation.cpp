#include<bits/stdc++.h>
using namespace std;
void nextPermutation(vector<int>& nums) {

    int i=1,greater=0;
    int last=1;
    for(int j=1;j<nums.size();j++){
        //step-1
        if(nums[j-1]<nums[j])i=j-1;
        else last++;        } 
    if(last==nums.size()){
        sort(nums.begin(),nums.end());
        return;
    }
    // cout<<i;
    //step 2 finding the next greater
    greater=i+1;
    for(int j=i+1;j<nums.size();j++){
        if(nums[greater]>nums[j] && nums[j]>nums[i]){
            greater=j;
            // int s=j;
            // for(int k=j;k<nums.size()-1;k++){
            //     if(nums[k]<nums[s])s=k;
            // }
        }
    }
    if(0<=greater<nums.size()){
        int temp=nums[i];
        nums[i]=nums[greater];
        nums[greater]=temp;
        sort(nums.begin()+i+1,nums.end());
    }
        
        
}
int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    nextPermutation(v);
    for(int i=0;i<n;i++)cout<<v[i]<<" ";
    return 0;
}
