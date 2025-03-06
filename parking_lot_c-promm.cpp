#include<stdio.h>

/*
	Parking lot whereby They charge:
		5$ < 5 hours
		10$ = 5 hours
		For > 5 hours, add 1$ per each additional hour.
*/

int calc(int hrs, int min) {
	int time = hrs * 60;
	
	time += min;
	
	int fee;
	
	if (time < 300) {
		fee = 5;
	}
	
	if (time >= 300) {
		
		fee = 10;
		
		for (int i = 301; i <= time; i+=60) {
			fee += 1;
		}
	}
	
	return fee;
}

int main () {
	
	printf("Parking Lot Fee\n");
	printf("----------------\n");
	
	int hr, min;
	
	printf("Enter hrs and minutes: \n");
	scanf("%d%d", &hr,&min);
	
	
	int value;
	
	value = calc(hr, min);
	
	printf("The fee would be %d $", value);
	
	return 0;
}