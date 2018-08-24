#include<iostream>
using namespace std;
int main()
{
	int n,i,j,t,s=0;
	cin>>t;
	for(i=1;i<=t;t++)
	{
		cin>>n;
		s=0;
		for(j=2;j<=2*n;j=j+2)
		{
			s=s+j*j;
		}
		cout<<s<<endl;
	}
}
