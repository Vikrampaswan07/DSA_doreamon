#include<bits/stdc++.h>
using namespace std;

int firstOccerance(int arr[], int size, int target){
    int s=0;
    int e=size-1;
    int ans=-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(arr[mid]==target){
            ans=mid;
            e=mid-1;
        }
        else if(arr[mid]>target){
            e=mid-1;
        }
        else if(arr[mid]<target){
            s=mid+1;
        }
    }
    return ans;
}
int lastOccerance(int arr[], int size, int target){
    int s=0;
    int e=size-1;
    int ans=-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(arr[mid]==target){
            ans=mid;
            s=mid+1;
        }
        else if(arr[mid]>target){
            e=mid-1;
        }
        else if(arr[mid]<target){
            s=mid+1;
        }
    }
    return ans;
}
int main(){
    int arr[]={1,2,3,3,3,3,3,8,9,10};
    int size=10;
    int target = 3;
    int ans1 = lastOccerance(arr, size, target);
    int ans2 = firstOccerance(arr, size, target);
    cout<<"FirstOccerance : "<<ans2<<endl;
    cout<<"LastOccerance : "<<ans1<<endl;
    cout<<"Number of Occerance : "<<ans1-ans2+1;

}