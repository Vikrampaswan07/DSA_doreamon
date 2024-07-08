#include<bits/stdc++.h>
using namespace std;

int peakElement(int arr[], int size){
    int s=0;
    int e=size-1;
    int ans=0;
    while(s<e){
        int mid=s+(e-s)/2;
        if(arr[mid-1]<arr[mid] && arr[mid+1]<arr[mid]){
            ans=mid;
        }
        else if(arr[mid-1]<arr[mid]){
            s=mid+1;
        }
        else if(arr[mid-1]>arr[mid]){
            e=mid-1;
        }
    }
    return ans;
}
int main(){
    int arr[]={1,2,3,4,5,4,3,2,1};
    int size=9;
    int ans=peakElement(arr, size);
    cout<<ans;
}