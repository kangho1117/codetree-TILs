#include <iostream>
using namespace std;
int N;
int a[100], b[100],ans=0;
int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> a[i] >> b[i];
    }

    for (int i = 0, aa=0, bb=0; i < N; i++)
    {//1 가위 2 주먹 3 보자기
        if(a[i]==1)
        {
            if(b[i]==2) bb++;
            else if(b[i]==3) aa++;
        }
        else if(a[i]==2)
        {
            if(b[i]==1) aa++;
            else if(b[i]==3) bb++;
        }
        else if(a[i]==3)
        {
            if(b[i]==1) bb++;
            else if(b[i]==2) aa++;
        }
        if(ans < aa) ans = aa;
    }

    for (int i = 0, aa=0, bb=0; i < N; i++)
    {//1 가위 2 보자기 3 주먹
        if(a[i]==1)
        {
            if(b[i]==2) aa++;
            else if(b[i]==3) bb++;
        }
        else if(a[i]==2)
        {
            if(b[i]==1) bb++;
            else if(b[i]==3) aa++;
        }
        else if(a[i]==3)
        {
            if(b[i]==1) aa++;
            else if(b[i]==2) bb++;
        }
        if(ans < aa) ans = aa;
    }

    for (int i = 0, aa=0, bb=0; i < N; i++)
    {//1 주먹 2 가위 3 보자기 
        if(a[i]==1)
        {
            if(b[i]==2) aa++;
            else if(b[i]==3) bb++;
        }
        else if(a[i]==2)
        {
            if(b[i]==1) bb++;
            else if(b[i]==3) aa++;
        }
        else if(a[i]==3)
        {
            if(b[i]==1) aa++;
            else if(b[i]==2) bb++;
        }
        if(ans < aa) ans = aa;
    }

    for (int i = 0, aa=0, bb=0; i < N; i++)
    {//1 주먹 2 보자기 3 가위 
        if(a[i]==1)
        {
            if(b[i]==2) bb++;
            else if(b[i]==3) aa++;
        }
        else if(a[i]==2)
        {
            if(b[i]==1) aa++;
            else if(b[i]==3) bb++;
        }
        else if(a[i]==3)
        {
            if(b[i]==1) bb++;
            else if(b[i]==2) aa++;
        }
        if(ans < aa) ans = aa;
    }

    for (int i = 0, aa=0, bb=0; i < N; i++)
    {//1 보자기 2 가위 3 주먹
        if(a[i]==1)
        {
            if(b[i]==2) bb++;
            else if(b[i]==3) aa++;
        }
        else if(a[i]==2)
        {
            if(b[i]==1) aa++;
            else if(b[i]==3) bb++;
        }
        else if(a[i]==3)
        {
            if(b[i]==1) aa++;
            else if(b[i]==2) bb++;
        }
        if(ans < aa) ans = aa;
    }

    for (int i = 0, aa=0, bb=0; i < N; i++)
    {//1 보자기 2 주먹 3 가위 
        if(a[i]==1)
        {
            if(b[i]==2) aa++;
            else if(b[i]==3) bb++;
        }
        else if(a[i]==2)
        {
            if(b[i]==1) bb++;
            else if(b[i]==3) aa++;
        }
        else if(a[i]==3)
        {
            if(b[i]==1) aa++;
            else if(b[i]==2) bb++;
        }
        if(ans < aa) ans = aa;
    }
    return 0;
}