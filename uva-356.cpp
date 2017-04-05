#include <algorithm>
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
	int n,in,on,count = 0;
	while (cin >> n) {
		in = 0,on = 0;
		double r,l = n-0.5;
		for (int i = 1 ; i < n ; ++ i) {
			r = sqrt((n-0.5)*(n-0.5)-i*i);
			on += ((int)(l+1-1e-12) - (int)(r+1-1e-12)+1)<<2;
			in += ((int)(r+1e-12))<<2;
			l = r;
		}
		on += ((int)(l+1-1e-10))<<2;
		if (count ++) printf("\n");
		printf("In the case n = %d, %d cells contain segments of the circle.\n",n,on);
		printf("There are %d cells completely contained in the circle.\n",in);
	}
    return 0;
}

