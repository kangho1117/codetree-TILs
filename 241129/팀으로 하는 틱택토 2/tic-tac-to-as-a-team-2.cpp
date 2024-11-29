#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
int main() {
	char arr[4][4]= {0,};
	vector<map<char,int>> v(8,map<char,int>());
	map<pair<char,char>,bool> win;
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
	{
	    if(a.size()==2) 
	    {
	        //cout<<"a : "<<a.begin()->first<<" "<<a.rbegin()->first<<"\n";
	        win.insert({{a.begin()->first,a.rbegin()->first},1});
	    }
	}
// 	for(auto a : win)
// 	    cout<<a.first.first<<" "<<a.first.second<<"\n";
	cout<<win.size();
	return 0;
}