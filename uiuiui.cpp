#include<stdio.h>
int main(void)
{
	int n,i;

	char ch[100];
	
	scanf("%d",&n);
	getchar();
	for(i=0;i<n;i++)
	{
		scanf("%c",&ch[i]);
		getchar();
	}
	for(i=0;i<n;i++)
		printf("%c\n",ch[i]+32);
	return 0;
} 
