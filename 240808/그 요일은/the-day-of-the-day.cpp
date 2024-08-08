#include <iostream>
#include <string>
using namespace std;
int main() {
    int m1,d1,m2,d2,sum1=0,sum2=0;
    string whatday;
    cin>>m1>>d1>>m2>>d2>>whatday;
    int num_of_days[] = {0,31,29,31,30,31,30,31,31,30,31,30,31};
    for(int m = 1; m < m1; m++)
        sum1 += num_of_days[m];
    sum1 += d1;
    for(int m = 1; m < m2; m++)
        sum2 += num_of_days[m];
    sum2 += d2;
    int total = sum2-sum1;
    int cnt = total/7;
    // cout<<total<<"\n";
    // cout<<cnt<<"\n";
    if(total%7 == 0) cout<<"Mon";
    else if(total%7 == 1 || total%7 == -1)
    {
        if(total > 0) 
        {
            if(whatday == "Tue") cnt++;
        }
        else if(total < 0) 
        {
            cnt++;
        }
    }
    else if(total%7 == 2 || total%7 == -2)
    {
        if(total > 0) 
        {
            if(whatday == "Tue" || whatday == "wed") cnt++;
        }
        else if(total < 0) 
        {
            if( whatday == "Tue" || whatday == "wed" ||whatday == "Thu" ||whatday == "Fri" ||whatday == "Sat") cnt++;
        }
    }
    else if(total%7 == 3 || total%7 == -3)
    {
        if(total > 0) 
        {
            if( whatday == "Tue" || whatday == "wed" ||whatday == "Thu") cnt++;
        }
        else if(total < 0) 
        {
            if( whatday == "Tue" || whatday == "wed" ||whatday == "Thu" ||whatday == "Fri") cnt++;
        }
    }
    else if(total%7 == 4 || total%7 == -4)
    {
        if(total > 0) 
        {
            if( whatday == "Tue" || whatday == "wed" ||whatday == "Thu" ||whatday == "Fri") cnt++;
        }
        else if(total < 0) 
        {
            if( whatday == "Tue" || whatday == "wed" ||whatday == "Thu") cnt++;
        }
    }
    else if(total%7 == 5 || total%7 == -5)
    {
        if(total > 0) 
        {
            if( whatday == "Tue" || whatday == "wed" ||whatday == "Thu" ||whatday == "Fri" ||whatday == "Sat") cnt++;
        }
        else if(total < 0) 
        {
            if(whatday == "Tue" || whatday == "wed") cnt++;
        }
    }
    else if(total%7 == 6 || total%7 == -6)
    {
        if(total > 0) 
        {
            if( whatday == "Tue" || whatday == "wed" ||whatday == "Thu" ||whatday == "Fri" ||whatday == "Sat" ||whatday == "Sun") cnt++;
        }
        else if(total < 0) 
        {
            if( whatday == "Tue" || whatday == "wed" ||whatday == "Thu") cnt++;
        }
    }
    cout<<cnt;
    return 0;
}