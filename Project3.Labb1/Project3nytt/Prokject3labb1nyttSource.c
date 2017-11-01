#include <stdio.h>

int main(void)
{
	/*Programmet summerar de f�rsta udda positiva heltalen upp till det antal som anv�ndaren �nskar*/
	int tal; //Ett tal som skall testas om det �r udda
	int totaltAntal;

	//Antalet tal som skall summeras. L�ses in fr�n anv�ndaren
	int antalSummerade; //H�ller reda p� hur m�nga som hittils summerats
	int summa = 0;

	/*Tala om f�r anv�ndaren vad programmer skall g�ra*/
	printf("Programmet summerar de f�rsta udda positiva heltalen 1 + 3 +...\nS� m�nga som �nskas\n\n");

	/*L�s in hir m�nga tal som skall summeras*/
	printf("Hur m�nga tal som skall summeras: ");
	scanf_s("%d", &totaltAntal);
	getchar();

	/*Ber�kna summan*/
	antalSummerade = 0;
	tal = 1;
	//0 r�knas som varken positivt eller negativt och tas d�rf�r inte med
	while (antalSummerade < totaltAntal)
	{
		if (tal % 2 == 1) {
				summa = summa + tal;
				antalSummerade = antalSummerade + 1;
		}
		tal++;
	}

	/*Skriv ut den resulterande summan*/
	printf("\nSumman av de %d f�rsta udda talen �r %d\n", totaltAntal, summa);
	getchar();
	return 0;
}