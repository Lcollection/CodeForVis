#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int main()
{
	short a;
	int b;
	long c;
	long long d;
	cout << "The size of short is "<<sizeof(a) << " bytes." <<endl;
	cout << "The size of int is "<< sizeof(b) << " bytes." <<endl;
	cout << "The size of long is " << sizeof(c) << " bytes." <<endl;
	cout << "The size of long long is " << sizeof(d) << " bytes." <<endl;	
	return 0;
}
