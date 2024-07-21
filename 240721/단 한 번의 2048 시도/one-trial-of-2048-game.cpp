#include <iostream>
#include <vector>
using namespace std;
void printvec(vector<vector<int>> &vec)
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << vec[i][j] << " ";
        }
        cout << "\n";
    }
    cout<<"\n";
}
vector<vector<int>> cmdL(vector<vector<int>> &vec)
{
    vector<vector<int>> r(4,vector<int>());
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (vec[i][j] != 0)
                r[i].push_back(vec[i][j]);
        }
    }
    
    while (1)
    {
        if (r[0].size() < 4)
            r[0].push_back(0);
        if (r[1].size() < 4)
            r[1].push_back(0);
        if (r[2].size() < 4)
            r[2].push_back(0);
        if (r[3].size() < 4)
            r[3].push_back(0);
        if (r[0].size() == 4 && r[1].size() == 4 && r[2].size() == 4 && r[3].size() == 4)
            break;
    }
    
   
    for (int i = 0; i < 4; i++)
    {
        if (r[i][0] == r[i][1])
        {
            r[i][0] += r[i][1];
            if (r[i][2] == r[i][3])
            {
                r[i][1] = r[i][2] + r[i][3];
                r[i][2] = 0;
                r[i][3] = 0;
            }
            else
            {
                r[i][1] = r[i][2];
                r[i][2] = r[i][3];
                r[i][3] = 0;
            }
        }
        else if (r[i][1] == r[i][2])
        {
            r[i][1] += r[i][2];
            r[i][2] = r[i][3];
            r[i][3] = 0;
        }
        else if (r[i][2] == r[i][3])
        {
            r[i][2] += r[i][3];
            r[i][3] = 0;
        }
    }
    
    return r;
}
vector<vector<int>> cmdR(vector<vector<int>> &vec)
{
    vector<vector<int>> r(4,vector<int>());
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (vec[i][j] != 0)
                r[i].push_back(vec[i][j]);
        }
    }

    while (1)
    {
        if (r[0].size() < 4)
            r[0].insert(r[0].begin(),0);
        if (r[1].size() < 4)
            r[1].insert(r[1].begin(),0);
        if (r[2].size() < 4)
            r[2].insert(r[2].begin(),0);
        if (r[3].size() < 4)
            r[3].insert(r[3].begin(),0);
        if (r[0].size() == 4 && r[1].size() == 4 && r[2].size() == 4 && r[3].size() == 4)
            break;
    }

    for (int i = 0; i < 4; i++)
    {
        if (r[i][3] == r[i][2])
        {
            r[i][3] += r[i][2];
            if (r[i][0] == r[i][1])
            {
                r[i][2] = r[i][0] + r[i][1];
                r[i][0] = 0;
                r[i][1] = 0;
            }
            else
            {
                r[i][2] = r[i][1];
                r[i][1] = r[i][0];
                r[i][0] = 0;
            }
        }
        else if (r[i][2] == r[i][1])
        {
            r[i][2] += r[i][1];
            r[i][1] = r[i][0];
            r[i][0] = 0;
        }
        else if (r[i][0] == r[i][1])
        {
            r[i][1] += r[i][0];
            r[i][0] = 0;
        }
    }
    return r;
}
vector<vector<int>> cmdU(vector<vector<int>> &vec)
{
    vector<vector<int>> r(4,vector<int>());
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (vec[j][i] != 0)
                r[i].push_back(vec[j][i]);
        }
    }

    while (1)
    {
        if (r[0].size() < 4)
            r[0].push_back(0);
        if (r[1].size() < 4)
            r[1].push_back(0);
        if (r[2].size() < 4)
            r[2].push_back(0);
        if (r[3].size() < 4)
            r[3].push_back(0);
        if (r[0].size() == 4 && r[1].size() == 4 && r[2].size() == 4 && r[3].size() == 4)
            break;
    }

    for (int i = 0; i < 4; i++)
    {
        if (r[i][0] == r[i][1])
        {
            r[i][0] += r[i][1];
            if (r[i][2] == r[i][3])
            {
                r[i][1] = r[i][2] + r[i][3];
                r[i][2] = 0;
                r[i][3] = 0;
            }
            else
            {
                r[i][1] = r[i][2];
                r[i][2] = r[i][3];
                r[i][3] = 0;
            }
        }
        else if (r[i][1] == r[i][2])
        {
            r[i][1] += r[i][2];
            r[i][2] = r[i][3];
            r[i][3] = 0;
        }
        else if (r[i][2] == r[i][3])
        {
            r[i][2] += r[i][3];
            r[i][3] = 0;
        }
    }

    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            vec[j][i] = r[i][j];
        }
    }
    return vec;
}
vector<vector<int>> cmdD(vector<vector<int>> &vec)
{
    vector<vector<int>> r(4,vector<int>());
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (vec[j][i] != 0)
                r[i].push_back(vec[j][i]);
        }
    }
    while (1)
    {
        if (r[0].size() < 4)
            r[0].insert(r[0].begin(),0);
        if (r[1].size() < 4)
            r[1].insert(r[1].begin(),0);
        if (r[2].size() < 4)
            r[2].insert(r[2].begin(),0);
        if (r[3].size() < 4)
            r[3].insert(r[3].begin(),0);
        if (r[0].size() == 4 && r[1].size() == 4 && r[2].size() == 4 && r[3].size() == 4)
            break;
    }

        for (int i = 0; i < 4; i++)
    {
        if (r[i][3] == r[i][2])
        {
            r[i][3] += r[i][2];
            if (r[i][0] == r[i][1])
            {
                r[i][2] = r[i][0] + r[i][1];
                r[i][0] = 0;
                r[i][1] = 0;
            }
            else
            {
                r[i][2] = r[i][1];
                r[i][1] = r[i][0];
                r[i][0] = 0;
            }
        }
        else if (r[i][2] == r[i][1])
        {
            r[i][2] += r[i][1];
            r[i][1] = r[i][0];
            r[i][0] = 0;
        }
        else if (r[i][0] == r[i][1])
        {
            r[i][1] += r[i][0];
            r[i][0] = 0;
        }
    }

    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            vec[j][i] = r[i][j];
        }
    }

    return vec;
}


int main()
{
    vector<vector<int>> vec(4, vector<int>(4));
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            cin >> vec[i][j];
    char cmd;
    cin >> cmd;
    if (cmd == 'L')
        vec = cmdL(vec);
    else if(cmd == 'R') vec = cmdR(vec);
    else if(cmd == 'U') vec = cmdU(vec);
    else if(cmd == 'D') vec = cmdD(vec);
    printvec(vec);
    return 0;
}