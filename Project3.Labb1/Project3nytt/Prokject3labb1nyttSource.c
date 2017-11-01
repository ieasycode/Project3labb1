#include <stdio.h>

int main(void)
{
	/*Programmet summerar de första udda positiva heltalen upp till det antal som användaren önskar*/
	int tal; //Ett tal som skall testas om det är udda
	int totaltAntal;

	//Antalet tal som skall summeras. Läses in från användaren
	int antalSummerade; //Håller reda på hur många som hittils summerats
	int summa = 0;

	/*Tala om för användaren vad programmer skall göra*/
	printf("Programmet summerar de första udda positiva heltalen 1 + 3 +...\nSå många som önskas\n\n");

	/*Läs in hir många tal som skall summeras*/
	printf("Hur många tal som skall summeras: ");
	scanf_s("%d", &totaltAntal);
	getchar();

	/*Beräkna summan*/
	antalSummerade = 0;
	tal = 1;
	//0 räknas som varken positivt eller negativt och tas därför inte med
	while (antalSummerade < totaltAntal)
	{
		if (tal % 2 == 1) {
				summa = summa + tal;
				antalSummerade = antalSummerade + 1;
		}
		tal++;
	}

	/*Skriv ut den resulterande summan*/
	printf("\nSumman av de %d första udda talen är %d\n", totaltAntal, summa);
	getchar();
	return 0;
}