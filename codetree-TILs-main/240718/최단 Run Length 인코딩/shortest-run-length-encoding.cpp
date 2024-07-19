#include <iostream>
#include <string>
using namespace std;
string shift(string str)
{
    string temp = str.substr(1,str.size());
    temp.push_back(str[0]);
    return temp;
}
int check(string str)
{
    string after;
    int num=0;
    char fix;
    for(int i=0;i<str.size();i++)
    {
        if(i==0)
        {
            fix = str[i];
            after += fix;
            num++;
        } 
        else if(fix == str[i])
        {
            num++;
        }
        else if(fix != str[i])
        {
            after += to_string(num);
            fix = str[i];
            after += fix;
            num = 1;
        }
        if(i == str.size()-1) after += to_string(num);
    }
    return after.size();
}
int main() {
    int min=100;
    string str;
    cin>>str;
    for(int i = 0 ; i < str.size(); i++)
    {
        int num = check(str);
        if(min > num) min = num;
        str = shift(str);
    }
    cout<<min;
    return 0;
}