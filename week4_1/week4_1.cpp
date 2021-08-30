#include<stdio.h>
int main() {
	int x, y, z, n, m;
	x = 1;
	printf("Enter number : ");
	scanf_s("%d", &n);
	m = 1;
	x = n;
	while (x >= 1) {
		y = x;
		while (y >= 1) {
			printf(" ");
			y--;
		}
		z = 1;
		while (z <= m) {
			printf("*");
			z++;
		}
		y = x;
		while (y >= 1) {
			printf(" ");
			y--;
		}
		printf("\n");
		x--;
		m = m + 2;
	}
}