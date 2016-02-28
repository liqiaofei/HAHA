#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
	const char s[]={'W','T','L'};
	double c[3],i,j,sum=1.0;
	int index;
	for(i=0;i<3;++i)
	{
		cin>>c[0]>>c[1]>>c[2];
		index=c[0]>c[1]?0:1;
		index=max(c[0],c[1])>c[2]?index:2;
		cout<<s[index]<<" ";
		sum*=c[index];
	}
	sum=(sum*0.65-1)*2;
	printf("%.2lf\n",sum);
	return 0;
}
/*
1.1 2.5 1.7
1.2 3.0 1.6
4.1 1.2 1.1
*/
