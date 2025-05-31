#include <iostream>
using namespace std;
int N,cnt=0,od=0,ev=0;
int main() {
    cin >> N;
    for (int i = 0,temp; i < N; i++)   
    {
        cin>>temp;
        if(temp%2==0) ev++;
        else od++;
    }
    //cout<<od<<" "<<ev<<"\n";
    if(ev > od)
    {
        cnt = od*2;
        ev -= od;
        od=0;

        while(ev>0 || od>0)
        {
            if(cnt%2==0)
            {
                ev=0;
                cnt++;
            }
            else
            {
                ev=0;
            }
        }
    }
    else if(ev < od)
    {
        cnt = ev*2;
        od -= ev;
        ev=0;
        //cout<<od<<" "<<ev<<" "<<cnt<<"\n";
        while(ev>0 || od>0)
        {
            if(cnt%2==0)
            {
                od-=2;
                if(0>od)
                {
                    od+=2;

                    cnt-=2;
                    od++;
                    ev++;

                    ev-=1;
                    od-=2;
                    cnt++;
                }
                else
                {
                    cnt++;
                }
            }
            else
            {
                od--;
                cnt++;
            }
            
            //cout<<od<<" "<<ev<<" "<<cnt<<"\n";
        }
    }
    else cnt = ev+od;

    cout<<cnt;

    return 0;
}