#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main() {
    vector<int> arr(15);
    for(int i=0;i<15;i++)
        cin>>arr[i];
    for(int a=1;a<=40;a++)
    {
        for(int b=1;b<=40;b++)
        {
            for(int c=1;c<=40;c++)
            {
                for(int d=1;d<=40;d++)
                {
                    int cnt=0;
                    if(find(arr.begin(), arr.end(),a) != arr.end()) cnt++;
                    if(find(arr.begin(), arr.end(),b) != arr.end()) cnt++;
                    if(find(arr.begin(), arr.end(),c) != arr.end()) cnt++;
                    if(find(arr.begin(), arr.end(),d) != arr.end()) cnt++;
                    if(find(arr.begin(), arr.end(),a+b) != arr.end()) cnt++;
                    if(find(arr.begin(), arr.end(),b+c) != arr.end()) cnt++;
                    if(find(arr.begin(), arr.end(),c+d) != arr.end()) cnt++;
                    if(find(arr.begin(), arr.end(),d+a) != arr.end()) cnt++;
                    if(find(arr.begin(), arr.end(),a+c) != arr.end()) cnt++;
                    if(find(arr.begin(), arr.end(),b+d) != arr.end()) cnt++;
                    if(find(arr.begin(), arr.end(),a+b+c) != arr.end()) cnt++;
                    if(find(arr.begin(), arr.end(),a+b+d) != arr.end()) cnt++;
                    if(find(arr.begin(), arr.end(),a+c+d) != arr.end()) cnt++;
                    if(find(arr.begin(), arr.end(),b+c+d) != arr.end()) cnt++;
                    if(find(arr.begin(), arr.end(),a+b+c+d) != arr.end()) cnt++;
                    if(cnt==15)
                    {
                        cout<<a<<" "<<b<<" "<<c<<" "<<d;
                        return 0; 
                    }
                }
            }
        }
    }
    return 0;
}