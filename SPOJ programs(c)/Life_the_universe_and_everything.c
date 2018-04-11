#include <stdio.h>

int main(void) {
	int n[1000],i = 0,j;
	scanf("%d",&n[i]);

	do
	{
		i++;
		scanf("%d",&n[i]);

	}while(n[i-1] != 42);
	i--;
	for(j = 0; j < i ; j++)
		printf("%d\n",n[j]);

	return 0;
}
