#include <iostream>
#include <list>
using namespace std;
int main() {
    int n,min=2100000000;
    cin>>n;
    list<int> l;
    for(int i=0,temp;i<n;i++)
    {
        cin>>temp;
        l.push_back(temp);
    }
    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=0;j<n;j++)
        {
            sum += j * l.front();
            l.push_back(l.front());
            l.pop_front();
        }
        if(sum < min) min = sum;
        l.push_back(l.front());
        l.pop_front();
    }
    cout<<min;
    return 0;
}