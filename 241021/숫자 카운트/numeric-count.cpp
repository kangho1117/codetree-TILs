#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
tuple<int,int,int> split(int a)
{
    return make_tuple(a/100,a%100/10,a%10);
}
int main() {
    int n,cnt=0;
    cin>>n;
    vector<map<int,int>> vecmp(4);
    int arr[10][10][10] = {0,};
    for(int i=0;i<n;i++)
    {
        int b,one,two;
        cin>>b>>one>>two;
        if(one>0)
        {
            tuple<int,int,int> t = split(b);
            int b1 = get<0>(t);
            int b2 = get<1>(t);
            int b3 = get<2>(t);
            if(one==3) arr[b1][b2][b3]++;
            else if(one == 2)
            {
                for(int j=1;j<=9;j++)
                {
                    arr[j][b2][b3]++;
                    arr[b1][j][b3]++;
                    arr[b1][b2][j]++;
                }
            }
            else if(one==1)
            {
                for(int j=1;j<=9;j++)
                {
                    for(int k=1;k<=9;k++)
                    {
                        arr[b1][j][k]++;
                        arr[j][b2][k]++;
                        arr[j][k][b3]++;
                    }
                }
            }
        }
        if(two>0)
        {
            vector<int> temp= {b/100,b%100/10,b%10};
            sort(temp.begin(), temp.end());
            if(two==3)
            {
                do{
                    if(temp[0]*100+temp[1]*10+temp[2] != b)
                        arr[temp[0]][temp[1]][temp[2]]++;
                } while(next_permutation(temp.begin(), temp.end()));
            }
        }
    }

    // for(int i=1;i<=9;i++)
    // {
    //     for(int j=1;j<=9;j++)
    //     {
    //         for(int k=1;k<=9;k++)
    //         {
    //             if(arr[i][j][k]==4)
    //             {
    //                 cout<<i<<" "<<j<<" "<<k<<" ";
    //                 cout<<arr[i][j][k]<<"\n";
    //             }
                
    //         }
    //     }
    //     cout<<"\n";
    // }

    for(int i=1;i<=9;i++)
    {
        for(int j=1;j<=9;j++)
        {
            for(int k=1;k<=9;k++)
            {
                if(arr[i][j][k] == n) cnt++; 
            }
        }
    }
    cout<<cnt;
    return 0;
}