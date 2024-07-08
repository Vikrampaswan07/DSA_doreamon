#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums={5,4,3,8};
    vector<int>a1,a2;
        a1.push_back(nums[1]);
        a2.push_back(nums[2]);
        for(int i=3; i<=nums.size(); i++){
            if(a1.back()>a2.back()){
                a1.push_back(nums[i]);
            }
            else{
                a2.push_back(nums[i]);
            }
        }
        cout<<"first"<<endl;
        for(int i=0; i<=a1.size(); i++){
            cout<<a1[i]<<endl;
        }
        for(int i=1; i<=a1.size(); i++){
            nums[i]=a1[i];
        }
        for(int i=a1.size()+1; i<=nums.size(); i++){
            nums[i]=a2[i];
        }
        cout<<"last"<<endl;
    for(int i=0; i<=nums.size(); i++){
        cout<<nums[i]<<endl;
    }
}