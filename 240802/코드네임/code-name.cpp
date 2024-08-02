#include <iostream>
#include <tuple>
#include <string>
using namespace std;

int main() {
    tuple<string,int> arr[5];
    string name;
    for(int i=0;i<5;i++)
    {
        int score;
        
        cin>>name>>score;
        arr[i] = tuple<string,int> (name,score);
    }
    int min=101;
    for(auto a : arr)
        if(get<1>(a) < min) 
        {
            min = get<1>(a);
            name = get<0>(a);
        }
    cout<<name<<" "<<min;
    return 0;
}