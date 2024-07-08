#include<iostream>
using namespace std;

int firstOccerance(int arr[], int size, int target){
    int start = 0;
    int end = 9;
    while(start <= end){
        int mid = start +(end - start)/2;
        if(arr[mid]==target){
            if(arr[mid - 1] != arr[mid]){
                return mid;
            }
            else{
                end = mid - 1;
            }
        }
        else if(arr[mid] > target){
            end = mid - 1;
        }
        else if(arr[mid] < target){
            start = mid + 1;
        }
    }
}
int main(){
    int arr[]={1,2,3,3,3,3,7,8,9};
    int size = 9;
    int target = 3;
    int ans = firstOccerance(arr, size, target);
    cout<<"First Occurance of 3 is "<<ans;
}