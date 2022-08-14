#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
string s[1010];
int main()
{
    int n,j=0;
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        char a[20];
        string b,c;
        cin >> a ;
        if(a[0] == 't') 
        {
            cin >>b;
            s[j] = b;
            j++;
        } 
        if(a[1] == 'm')
        {
            cin >> b;
            for(int l=0;l<j;l++)
            {
                if(s[l] == b)
                {
                    s[l] = '0';
                    j--;
                }
            }
        }
        if(a[0] == 'l') 
        {
            for(int l=0;l<j;l++)
            {
                cout << s[l] <<endl;
            }
        }
        if(a[1] == 'e') 
        {
            cin >> b >> c;
            for(int l=0;l<=j;l++)
            {
                if(s[l] == b) s[l] = c;
            }
        }
    }
    return 0;
}