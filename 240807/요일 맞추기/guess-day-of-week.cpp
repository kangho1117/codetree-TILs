#include <iostream>
using namespace std;
int main() {
    int m1,d1,m2,d2,sum1=0,sum2=0;
    cin>>m1>>d1>>m2>>d2;
    int num_of_days[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    for(int m = 1; m < m1; m++)
        sum1 += num_of_days[m];
    sum1 += d1;
    for(int m = 1; m < m2; m++)
        sum2 += num_of_days[m];
    sum2 += d2;
    int total = sum2-sum1;
    if(total%7 == 0)
    {
        cout<<"Mon";
    }
    else if(total%7 == 1 || total%7 == -1)
    {
        if(total > 0) cout<<"Tue";
        else if(total < 0) cout<<"Sun";
    }
    else if(total%7 == 2 || total%7 == -2)
    {
        if(total > 0) cout<<"Wed";
        else if(total < 0) cout<<"Sat";
    }
    else if(total%7 == 3 || total%7 == -3)
    {
        if(total > 0) cout<<"Thu";
        else if(total < 0) cout<<"Fri";
    }
    else if(total%7 == 4 || total%7 == -4)
    {
        if(total > 0) cout<<"Fri";
        else if(total < 0) cout<<"Thu";
    }
    else if(total%7 == 5 || total%7 == -5)
    {
        if(total > 0) cout<<"Sat";
        else if(total < 0) cout<<"Wed";
    }
    else if(total%7 == 6 || total%7 == -6)
    {
        if(total > 0) cout<<"Mon";
        else if(total < 0) cout<<"Tue";
    }
    return 0;
}