#include <iostream>
using namespace std;
bool yoon(int year)
{
    if(year%4 != 0) return false;
    else if(year%4 == 0 && year%100==0)
    {
        if(year%400==0) return true;
        else return false;
    }
    return true;
}
void cal(int y, int m, int d)
{
    if(0<m && m < 13)
    {
        if(m==2)
        {
            if(yoon(y) && 0 < d &&  d < 30)
            {
                cout<<"Winter";
            }
            else if(yoon(y) == false && 0 < d &&  d < 29)
            {
                cout<<"Winter";
            }
        }
        else if(m==1 || m==3 || m==5 || m==7 || m==8 || m == 10 || m == 12)
        {
            if(0<d && d < 32)
            {
                if(3<=m && m<=5) cout<<"Spring";
                else if(6<=m<=8) cout<<"Summer";
                else if(9<=m<=11) cout<<"Fall";
                else if(m== 1 || m == 12) cout<<"Winter";
            }
            else cout<<"-1";
        }
        else
        {
            if(0<d && d < 31)
            {
                if(3<=m && m<=5) cout<<"Spring";
                else if(6<=m<=8) cout<<"Summer";
                else if(9<=m<=11) cout<<"Fall";
                else if(m== 1 || m == 12) cout<<"Winter";
            }
            else cout<<"-1";
        }
    }
    else
    {
        cout<<"-1";
    }
}
int main() {
    int y,m,d;
    cin>>y>>m>>d;
    cal(y,m,d);
    return 0;
}