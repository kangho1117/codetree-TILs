#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
int main() {
	char arr[4][4]= {0,};
	vector<map<int,int>> v(8,map<int,int>());
	for(int i=1; i<=3; i++)
		for(int j=1; j<=3; j++)
			cin>>arr[i][j];
	int num=0,ans=0;
	for(int i=1; i<=3; i++)
	{
		for(int j=1; j<=3; j++)
			v[num].insert({arr[i][j],1});
		num++;
	}
	for(int i=1; i<=3; i++)
	{
		for(int j=1; j<=3; j++)
			v[num].insert({arr[j][i],1});
		num++;
	}
	for(int i=1,j=1; i<=3&&j<=3; i++,j++)
		v[num].insert({arr[i][j],1});
	num++;
	for(int i=1,j=3; i<=3&&j>=1; i++,j--)
		v[num].insert({arr[i][j],1});
	num++;
	for(auto &a : v)
		if(a.size()==2) ans++;
	cout<<ans;
	return 0;
}