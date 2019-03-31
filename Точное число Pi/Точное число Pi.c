#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	char ch;

	do {
		int i = 1;
		double pres, degree, fir, sec, pi;
		pi = 0;
		sec = 4;

		printf("Input presicion: ");
		scanf_s("%lf", &pres);

		degree = pow(0.1, pres);
		do {
			
			pi += sec;
			fir = sec;
			sec = fir * (-i) / (i + 2);
			i += 2;
		} while (fabs(fir - sec) > degree);	//Проверка точности

		pi += sec / 2; //Среднее между верхней и нижней границей

		printf("%.14f", pi);

		//Повтор программы
		printf("\nDo you wish to restart program? (y/n)\n");
		getchar();
		scanf_s("%c", &ch);
	} while (ch == 'y' || ch == 'Y');

	return 0;
}