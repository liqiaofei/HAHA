#include<stdio.h>
#include<string.h>
#define MAX 1001
static int n,m,k;
int visit[MAX];
int edge[MAX][MAX];
void dfs(int i)
{
	int j;
	visit[i]=1;
	for(j=1;j<=n;++j)
		if(!visit[j]&&edge[i][j]==1)
			dfs(j);
}
int main()
{
	scanf("%d %d %d",&n,&m,&k);
	int v1,v2,num,i;
	while(m--)
	{
		scanf("%d %d",&v1,&v2);
		edge[v1][v2]=1;
		edge[v2][v1]=1;
	}
	while(k--)
	{
		num=0;
		scanf("%d",&v1);
		memset(visit,0,(n+1)*sizeof(int));
		visit[v1]=1;
		for(i=1;i<=n;++i)
		   if(visit[i]==0)
		   {
				num++;
				dfs(i);
		   }
		printf("%d\n",num-1);
	}
	return 0;
}
