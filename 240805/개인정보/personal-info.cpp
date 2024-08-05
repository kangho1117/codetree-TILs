#include <iostream>
#include <string>
#include <tuple>
#include <algorithm>
using namespace std;
bool cmp(tuple<string,int,double> &a, tuple<string,int,double> &b)
{
    return get<1>(a) > get<1>(b);
}
int main() {
    tuple<string,int,double> t[5];
    string name;
    int a;
    double b;
    for(int i=0;i<5;i++)
    {
        cin>>name>>a>>b;
        t[i] = make_tuple(name,a,b);
    }
    sort(t,t+5);
    cout<<"name\n";
    cout<<fixed;
    cout.precision(1);
    for(auto &a:t)
    cout<<get<0>(a)<<" "<<get<1>(a)<<" "<<get<2>(a)<<"\n";
    sort(t,t+5,cmp);
    cout<<"\nheight\n";
    for(auto &a:t)
    cout<<get<0>(a)<<" "<<get<1>(a)<<" "<<get<2>(a)<<"\n";
    return 0;
}