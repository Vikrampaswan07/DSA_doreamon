#include<bits/stdc++.h>
using namespace std;
void evenArray(int arr, vector<int>&v, int size, int index){
    if(index >= size){
        return;
    }
    if(arr[index]%2==0){
        v.push_back(arr[index]);
    }
    int ans = evenArray(arr, v, size, index+1);
    return ans;
}
int main(){
    int arr[7]={1,2,3,4,5,6,7};
    int index = 0;
    vector<int> v;
    evenArray(arr, v, 7, index);
    return 0;
}



