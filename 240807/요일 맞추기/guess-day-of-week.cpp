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
    sum2 += d2+1;
    for(int i=7;i>0;i--)
    {
        if((sum2-sum1)%i == 0)
        {
            if(i==7) cout<<"Mon";
            else if(i==6) cout<<"Tue";
            else if(i==5) cout<<"Wed";
            else if(i==4) cout<<"Thu";
            else if(i==3) cout<<"Fri";
            else if(i==2) cout<<"Sat";
            else if(i==1) cout<<"Sun";
            break;
        }
    }
    return 0;
}