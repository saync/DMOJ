#include <iostream>

int main() {
    int n;

    scanf("%d", &n);

	for (int i = 0; i < n; ++i) {
		long long a, b, c;
		scanf("%lld %lld %lld", &a, &b, &c);

		if(a * b != c){
			printf("16 BIT S/W ONLY\n");
		}
		else{
			printf("POSSIBLE DOUBLE SIGMA\n");
		}
    }

    return 0;
}