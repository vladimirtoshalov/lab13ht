#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, ".UTF8");

	int a[100], index = -1, n;

	printf("Введите количество элементов n\n");
	if (scanf("%d", &n) != 1 || n <= 0 || n >= 100) {
		printf("Ошибка ввода\n");
		return 1;
	}

	for (int i = 0; i < n; i++) {
		printf("a[%d] = ", i);
		if (scanf("%d", &a[i]) != 1) {
			printf("Ошибка ввода\n");
			return 1;
		}
		if (i > 0 && a[i] == a[i - 1] && index == -1) index = i - 1;
	}
	if (index != -1) printf("Индекс совпадения %d", index);
	else printf("Совпадений нет");
	return 0;
}