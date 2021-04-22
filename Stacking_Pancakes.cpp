#include<stdio.h>
#define MOD 1000000007
#define LIM 1001
int dp[LIM][LIM];
int main()
{
	int t, k;
	dp[1][0]=1;
	dp[1][1]=1;
	for(int i=2; i<LIM; i++)
	{
		dp[i][1]=1;
		dp[i][0]=1;
		for(int j=2; j<=i; j++)
		{
			dp[i][j] = (j*(long long int)dp[i-1][j] + dp[i-1][j-1])%MOD;
			dp[i][0] = (dp[i][0] + dp[i][j])%MOD;
		}
	}
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&k);
		if(k==1)	printf("1\n");
		else
		printf("%d\n",dp[k][0]);
	}
	return 0;
}
