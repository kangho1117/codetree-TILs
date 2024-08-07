#include <iostream>
using namespace std;

int main() {
    int m1,m2,d1,d2,sum_days1=0,sum_days2=0;
    cin>>m1>>d1>>m2>>d2;
    int num_of_days[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    for(int month = 1; month <= m1; month++)
        sum_days1 += num_of_days[month];
    sum_days1 += d1;
    for(int month = 1; month <= m2; month++)
        sum_days2 += num_of_days[month];
    sum_days2 += d2;
    if(sum_days2-sum_days1 == 0) cout<<"1";
    else cout<<sum_days2-sum_days1;
    return 0;
}