#include<bits/stdc++.h>
using namespace std;

int missing(int arr[], int size){
    int s=0;
    int e=size-1;
    int ans=-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if((arr[mid]-mid)==2){
            ans=mid;
            e=mid-1;
        }
        else if((arr[mid]-mid)==1){
            s=mid+1;
        }

    }
    if(ans==-1){
        return size+1;
    }
    return ans+1;
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8};
    int size=8;
    int ans=missing(arr, size);
    cout<<ans;
}