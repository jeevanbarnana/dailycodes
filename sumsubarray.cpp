#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cout<<"enter the your size of the array:"<<endl;
	cin>>n;
	vector<int>arr(n);
	cout<<"enter your elements into the array"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int total=0;
	for(int i=0;i<n;i++)
	{
		total+=(arr[i]*(i+1)*(n-i));
		
	}
	cout<<total;	
	return 0;
}
