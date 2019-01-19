#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float funkcjaKwadratowa(float a, float b, float c, float delta, float x1, float x2, float x0);
main()
{
while(1) {
  
	float a, b, c;
	float delta;
	float x1, x2, x0;
	printf("Podaj wspolczynniki trojmianu a, b i c\n");
	scanf("%f %f %f", &a, &b, &c);
	funkcjaKwadratowa(a, b, c, delta, x1, x2, x0);
	system("pause");
}

}
float funkcjaKwadratowa(float a, float b, float c, float delta, float x1, float x2, float x0) {
	if (a!=0) {
	delta=b*b-4*a*c;
		if (delta>0) {
	x1=(-b-sqrt(delta))/(2*a);
	x2=(-b+sqrt(delta))/(2*a);
	printf("Miejsca zerowe to: %.2f %.2f", x1, x2); }
	if (delta==0) {
	
	x0=(-b)/(2*a);
	printf("Podwojne miejsce zerowe to %.2f\n\n", x0);
}
	if (delta<0) {
		printf("Brak miejsc zerowych\n");
	}
}
    if (a==0 && b!=0 && c!=0) {
    	x0=(-c)/b;
    	printf("Podwojny pierwiastek to: %.2f", x0);
	}

    	if (a==0 && b==0 && c!=0) {
    		printf("Brak miejsc zerowych funkcji");
		}

		if (a==0 && b==0 && c==0) {
		printf("Nieskonczenie wiele pierwiastkow");
		}


	}
