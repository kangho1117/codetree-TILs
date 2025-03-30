#include <iostream>
#include <string>
using namespace std;
int N,max_nearest=0;
string seats;
int main() {
    cin >> N;
    cin >> seats;
    for(int i=0;i<N;i++)
    {
        string s = seats;
        if(s[i]=='1') continue;
        else
        {
            int min = s.size();
            s[i] = '1';
            for(int j=0;j<N;j++)
            {
                if(s[j]=='1')
                { 
                    for(int k=j+1;k<N;k++)
                    {
                        if(s[k]=='1')
                        {
                            int tempdis = k-j;
                            if(tempdis < min) min = tempdis;
                            break;
                        }
                    }
                }
            }
            if(min > max_nearest) max_nearest = min;
        }
    }
    cout<<max_nearest;
    return 0;
}