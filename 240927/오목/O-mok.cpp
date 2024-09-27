#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<vector<int>> vec(20,vector<int>(20,0));
    for(int i=1;i<20;i++)
    {
        for(int j=1,b=0,w=0;j<20;j++)
        {
            cin>>vec[i][j];
            if(vec[i][j] == 1)
             {
                b++;
                w=0;
            }
            else if(vec[i][j] == 2)
             {
                w++;
                b=0;
            }
            else
            {
                w=0;
                b=0;
            }
            if(b==5)
            {
                cout<<"1\n";
                cout<<i<<" "<<j-2;
                return 0;
            }
            else if(w==5)
            {
                cout<<"2\n";
                cout<<i<<" "<<j-2;
                return 0;
            }
        }  
    }
 
    for(int j=1; j<=19; j++)
    {
        for(int i=1,b=0,w=0; i<=19;i++)
        {
            if(vec[i][j] == 1)
             {
                b++;
                w=0;
            }
            else if(vec[i][j] == 2)
             {
                w++;
                b=0;
            }
            else
            {
                w=0;
                b=0;
            }
            if(b==5)
            {
                cout<<"1\n";
                cout<<i-2<<" "<<j;
                return 0;
            }
            else if(w==5)
            {
                cout<<"2\n";
                cout<<i-2<<" "<<j;
                return 0;
            }
        }
    }


    for(int i=19; i>=1; i--)
    {
        for(int j=i,k=1,b=0,w=0; j<=19 || k<=19;j++,k++)
        {
            if(vec[k][j] == 1)
             {
                b++;
                w=0;
            }
            else if(vec[k][j] == 2)
             {
                w++;
                b=0;
            }
            else
            {
                w=0;
                b=0;
            }
            if(b==5)
            {
                cout<<"1\n";
                cout<<k-2<<" "<<j-2;
                return 0;
            }
            else if(w==5)
            {
                cout<<"2\n";
                cout<<k-2<<" "<<j-2;
                return 0;
            }
        }
    }
    cout<<0;
    return 0;
}