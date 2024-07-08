#include<bits/stdc++.h>
using namespace std;
int main(){
    int x=5,y=10,z=15;
    int*arr[]{&x,&y,&z};
    cout<<*arr[1]<<endl;
    return 0;
}