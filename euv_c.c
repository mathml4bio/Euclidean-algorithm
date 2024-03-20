#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
int iabs(int x) { return (x<0) ? -x : x; }
int eu_mod(int x, int y) {
	int r;
	assert(y != 0);
	r = x%y;
	if (r<0) 
		r += iabs(y);
	return r;
}
int gcd(int x, int y) {
        while(y != 0) {
                int tmp;
                tmp = x;
                x = y;
                y = eu_mod(tmp, y);
        }
        return x;
}

int main() {
	int x, y, g, res;
	res = scanf("%d%d", &x, &y);
	if (res != 2 || y == 0) {
		printf("%s\n", "wrong input");
		abort();
	}
	g = gcd(x, y);
	printf("%d\n", g);
}
