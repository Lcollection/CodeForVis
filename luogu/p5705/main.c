#include <stdio.h>
#include <string.h>
int main()
{
	int num,i;
	char a[10];
	scanf("%c" ,a);
	num = strlen(a);

	for(i=num ; i>0 ;i--)
	{
		printf("%c" ,a[i]);	
	}
}