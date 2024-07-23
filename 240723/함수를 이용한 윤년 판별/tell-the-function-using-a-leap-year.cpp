#include <iostream>
using namespace std;
void check(int year)
{
    if(year%4 !=0 || (year%100==0 && year%400!=0)) cout<<"false\n";
    else cout<<"true\n";
}
int main() {
    int year;
    cin>>year;
    check(year);
    return 0;
}