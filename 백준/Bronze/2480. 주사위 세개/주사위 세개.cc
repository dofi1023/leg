#include<stdio.h>
int main(void) {
	int dice1, dice2, dice3, money;
	scanf("%d %d %d", &dice1, &dice2, &dice3);
	if (dice1 == dice2 && dice1 == dice3) {
		money = 10000 + (1000 * dice1);
	}
	else if (dice1 == dice2) {
		money = 1000 + (100 * dice1);
	}
	else if (dice2 == dice3) {
		money = 1000+ (100 * dice2);
	}
	else if (dice1 == dice3) {
		money = 1000 + (100 * dice3);
	}
	else
		if (dice1 > dice2 && dice1 > dice3) {
			money = 100 * dice1;
		}
		else if (dice2 > dice1 && dice2 > dice3) {
		money = 100 * dice2;
		}
		else 
		money = 100 * dice3;
	printf("%d", money);
	return 0;
}