#include <iostream>
using namespace std;
void cal(int m, int d)
{
    if(0<m&&m<13)
    {
        if(m==2 && 0<d && d<29) 
        {
            cout<<"Yes"; 
            return;
        }
        else if((m==1 || m==3 || m==5 || m==7 || m==8 || m==10||m==12) && 0<d && d<32)
         {
            cout<<"Yes";
            return;
            }
        else if((m==4 || m==6 || m==9 || m==11) && 0<d && d<31) 
        {
            cout<<"Yes";
            return;
        }
            cout<<"No";
            return;
    }
    cout<<"No";
}
int main() {
    int m,d;
    cin>>m>>d;
    cal(m,d);
    return 0;
}