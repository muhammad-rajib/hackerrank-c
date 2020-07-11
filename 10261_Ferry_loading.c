#include <stdio.h>
#include <string.h>

int main() {

	int t;
	for (scanf("%d", &t); t; t--) {
		int n;
		scanf("%d", &n);
		n *= 100;
		int T[10001], c[202];
		bool R[202][10001];
		memset(R, false, sizeof(R));
		memset(T, 255, sizeof(T));
		int oo = T[0];
		T[0] = 0;
		int j, sum = 0;
		unsigned long long int i = 0;
		scanf("%d", &j);
		int s = 0, sol = 0;
		bool yet = true;
		while (j) {
			i++;
			if (yet && sum + j <= n * 2) {
				sum += j;
				c[i] = j;
				for (int k = n - j; k >= 0; k--)
					if (T[k] != oo && sum - (k + j) <= n) {
						T[k + j] = i;
						R[i][k + j] = true;
						s = k + j;
						sol = i;
					}
			} else
				yet = false;
			scanf("%d", &j);
		}
		bool left[202];
		memset(left, false, sizeof(left));
		for (int i = sol; i >= 0; i--) {
			if (R[i][s]) {
				left[i] = true;
				s -= c[i];
			}
		}
		printf("%d\n", sol);
		for (int i = 1; i <= sol; i++)
			printf("%s\n", left[i] ? "port" : "starboard");
		if (t > 1)
			printf("\n");
	}

	return 0;
}