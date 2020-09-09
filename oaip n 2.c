#include<stdio.h>
#include<locale.h>
int main() {
	setlocale(LC_ALL,"Russian");
	int i, j = 0, k, s1 = 0, s2 = 0, a[4][5], b[5];
	printf("Введите элементы матрицы А(4,5):\n");
	for (i = 0; i <= 3; i++) {
		for (j = 0; j <= 4; j++) {

			scanf_s("%d", &a[i][j]);
		}
	}
	printf("Введите элементы вектора B(5):\n");
	for (k = 0; k <= 4; k++) {
		scanf_s("%d", &b[k]);
	}
	printf("Ваша новая матрица А1:\n");
	for (i = 0; i <= 3; i++) {
		for (j = 0; j <= 4; j++) {
			s1 = a[i][j] * b[j];
			s2 = s2 + s1;
		}
            printf("%d ",s2);
		if (i == 1) {
			printf("\n");
		}
		else printf(" ");
		
		s2 = 0;
	}

		return 0;
}
	