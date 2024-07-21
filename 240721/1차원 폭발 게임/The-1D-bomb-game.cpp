#include <iostream>
#include <vector>
using namespace std;
int n,m;
vector<int> zero(vector<int> &vec)
{
    vector<int> nvec;
    for(int i=0;i<vec.size();i++)
        if(vec[i] != 0) nvec.push_back(vec[i]);
    nvec.push_back(0);
    return nvec;
}
vector<int> remove(vector<int> &vec)
{
    vector<int> mvec;
    int mval=vec[0], cnt=1, idx=0;
    for(int i=1;i<vec.size();i++)
    {
        //미달성 초기화
        if(cnt < m && vec[i] != mval)
        {
            cnt = 1;
            mval = vec[i];
            idx = i;
        }
        //달성 초기화 및 기록
        else if(cnt >= m && vec[i] != mval)
        {
            for(int j = idx;j<i;j++)
                vec[j] = 0;
            idx = i;
            cnt = 1;
            mval = vec[i];
        }
        //달성 및 연장
        else if(cnt >= m && vec[i] == mval)
            cnt++;
        //미달성 및 연장
        else if(cnt < m && vec[i] == mval)
            cnt++;
    }
    return zero(vec);
}


int main() {
    cin>>n>>m;
    vector<int> vec(n);
    for(int i=0;i<n;i++)
        cin>>vec[i];
    vec.push_back(0);
    while(1)
    {
        vec = remove(vec);
        int size = vec.size();
        vec = remove(vec);
        if(size == vec.size()) break;
    }
    vec.pop_back();
    cout<<vec.size()<<"\n";
    for(auto a : vec)
        cout<<a<<"\n";
    return 0;
}