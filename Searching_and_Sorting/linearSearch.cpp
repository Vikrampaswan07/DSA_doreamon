#include<bits/stdc++.h>
using namespace std;

void linear(int *arr, int size, int element){
    for(int i=0; i<size; i++){
        if(arr[i]==element){
            cout<<"Element is Present";
            return;
        }
    }
    cout<<"Element is absent";
    return;
}
int main(){
    int arr[5]={1,2,3,4,5};
    linear(arr, 5, 7);
    return 0;
}