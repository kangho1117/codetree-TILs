#include <iostream>
using namespace std;
int a, b, c, d;
int main() {
    cin >> a >> b;
    cin >> c >> d;
    int arr[101]={0,},cnt=0;
    for(int i=a+1;i<=b;i++) arr[i]=1;
    for(int i=c+1;i<=d;i++) arr[i]=1;
    for(int i=0;i<=100;i++)
        if(arr[i]) cnt++; 
    cout<<cnt;
    return 0;
}