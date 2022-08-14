#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <cmath>
using namespace std;
int stl(char *s)
{
	int i,k=0;
	for(i=0;s[i];i++)k++;
	return k;
}
int main()
{
	char s[100010];
	int summ = 0;
	scanf("%s",s);
	int len = stl(s);
	for(int i=0;i<len;i++)
	{
		if(s[i] == 'w') summ+=1;
		if(s[i] == 'w' && s[i+1] == 'w') summ+=1;
		cout << summ << endl;
	}
	cout << summ;
	return 0;
}