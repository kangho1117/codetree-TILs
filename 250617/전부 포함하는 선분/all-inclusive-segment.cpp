#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	int ans1=0,ans2=0,ans3=0,ans4=0,n;
	cin >> n;
	vector<vector<bool>> v(n,vector<bool>(101,0)), v2(n,vector<bool>(101,0));
	for (int i = 0,a,b; i < n; i++) {
		cin>>a>>b;
		for(int j=a; j<=b; j++) v[i][j] = 1;
	}
	v2 = v;

	for(int j = 1; j<= 100; j++)
	{
		for(int i=0; i<n; i++)
		{
			if(v[i][j])
			{
				vector<bool> temp(101,0);
				v[i] = temp;
				j = 200;
				break;
			}
		}
	}

	for(int j = 1; j<= 100; j++)
	{
		for(int i=0; i<n; i++)
		{
			if(v[i][j])
			{
				ans1 = j;
				j = 200;
				break;
			}
		}
	}
	for(int j = 100; j>= 1; j--)
	{
		for(int i=0; i<n; i++)
		{
			if(v[i][j])
			{
			    ans2 = j;
				j = 0;
				break;
			}

		}
	}

	for(int j = 100; j>= 1; j--)
	{
		for(int i=0; i<n; i++)
		{
			if(v2[i][j])
			{
				vector<bool> temp(101,0);
				v2[i] = temp;
				j = 0;
				break;
			}
		}
	}


	for(int j = 1; j<= 100; j++)
	{
		for(int i=0; i<n; i++)
		{
			if(v2[i][j])
			{
				ans3 = j;
				j = 200;
				break;
			}
		}
	}
	for(int j = 100; j>= 1; j--)
	{
		for(int i=0; i<n; i++)
		{
			if(v2[i][j])
			{
			    ans4 = j;
				j = 0;
				break;
			}

		}
	}



	cout<<min(ans2-ans1,ans4-ans3);
	return 0;
}