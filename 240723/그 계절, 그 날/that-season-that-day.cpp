#include <iostream>
using namespace std;
bool yoon(int year)
{
    if(year%4 == 0 && year%100==0)
    {
        if(year%400==0) return true;
        else return false;
    }
    else if(year%4 == 0) return true;
    return false;
}
void cal(int y, int m, int d)
{
    if(0<m && m < 13)
    {
        if(0<d && d < 32)
        {
            if(m==2)
            {
                if(yoon(y))
                {
                    if(d<30)
                    {
                        cout<<"Winter";
                    }
                    else cout<<"-1";
                }
                else
                {
                    if(d<29)
                    {
                        cout<<"Winter";
                    }
                    else cout<<"-1";
                }
            }
            else if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m ==12)
            {
                if(d<32)
                {
                    if(m==1) cout<<"Winter";
                    else if(m==3 || m==5) cout<<"Spring";
                    else if(m==7 || m==8) cout<<"Summer";
                    else if(m==10) cout<<"Fall";
                    else cout<<"Winter";
                }
                else cout<<"-1";
            }
            else
            {
                if(d<31)
                {
                    if(m==4) cout<<"Spring";
                    else if(m==6 ) cout<<"Summer";
                    else if(m==9 || m==11) cout<<"Fall";
                }
                else cout<<"-1";
            }

        }
        else cout<<"-1";
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