#include <iostream>
#include <vector>
using namespace std;
int n,m;
vector<int> remove(vector<int> &vec)
{
    //cout<<"vecsize : "<<vec.size()<<"\n";
    vector<int> mvec(vec.size(),0);
    int mem=0, cnt=0, idx=0;
    for(int i=0;i<vec.size();i++)
    {
        if(m <= cnt)
        {
            //cout<<"i : "<<i<<"\n";
            mvec[i-1] = 1;
            mvec[idx] = 1;
        }
        if(mem != vec[i])
        {
            //cout<<"cnt : "<<cnt<<" ";
            //cout<<"mem : "<<mem<<" ";
            //cout<<"vec[i] : "<<vec[i]<<"\n";
            if(i==0)
            {
                idx = i;
                mem = vec[i];
                cnt = 1;
            }
            else
            {
                idx = i;
                mem = vec[i];
                cnt = 1;
                if(m <= cnt) 
                {
                    //cout<<"ii : "<<i<<"\n";
                    mvec[i-1] = 1;
                    mvec[idx] = 1;
                }
            }
        }
        else
        {
            cnt++;
        }
        if(m <= cnt)
        {
            //cout<<"i : "<<i<<"\n";
            mvec[i] = 1;
            mvec[idx] = 1;
        }
    }
    //cout<<"n : "<<n<<" m: "<<m<<"\n";
    // for(int i=0;i<vec.size();i++)
    //     cout<<mvec[i]<<" ";
    // cout<<"\n";
    // for(int i=0;i<vec.size();i++)
    //     cout<<vec[i]<<" ";
    // cout<<"\n";
    for(int i=0;i<vec.size();i++)
    {
        if(mvec[i] == 1)
            vec[i] = 0;
    }
    // for(int i=0;i<vec.size();i++)
    //     cout<<vec[i]<<" ";
    // cout<<"\n";
    vector<int> nvec;
    for(int i=0;i<vec.size();i++)
    {
        if(vec[i] != 0) nvec.push_back(vec[i]);
    }
    return nvec;
}


int main() {

    cin>>n>>m;
    vector<int> vec(n);
    for(int i=0;i<n;i++)
        cin>>vec[i];
    while(1)
    {
        int size = -1;
        vec = remove(vec);
        size = vec.size();
        vec = remove(vec);
        if(size == vec.size()) break;
    }
    cout<<vec.size()<<"\n";
    for(auto a : vec)
        cout<<a<<"\n";
    return 0;
}