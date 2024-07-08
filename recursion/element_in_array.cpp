#include<iostream>
using namespace std;

bool find(int arr[], int size, int element, int index){
    if(index > size){
        return false;
    }
    if(arr[index] == element){
        return true;
    }
    int ans = find(arr, size, element, index+1);
    return ans;
}
int main(){
    cout<<"hello world"<<endl;;
    int arr[5] = {1, 2, 3, 4, 5};
    int index = 0;
    int target = 3;
    if(find(arr, 5, target, index)==1){
        cout<<"present";
    }
    else{
        cout<<"Absent";
    }
}