#include<stdio.h>
int main() {
	char dan[16];
	int time = 0;

	scanf("%s", dan);
	for (int i = 0;dan[i] != '\0';i++) {
		switch (dan[i])
		{	// 2
		case 65:
		case 66:
		case 67:
			time = time + 3;
			break;
			// 3
		case 68:
		case 69:
		case 70:
			time = time + 4;
			break;
			//4
		case 71:
		case 72:
		case 73:
			time = time + 5;
			break;
			// 5
		case 74:
		case 75:
		case 76:
			time = time + 6;
			break;
			//6
		case 77:
		case 78:
		case 79:
			time = time + 7;
			break;
			// 7
		case 80:
		case 81:
		case 82:
		case 83:
			time = time + 8;
			break;
			// 8
		case 84:
		case 85:
		case 86:
			time = time + 9;
			break;

		case 87:
		case 88:
		case 89:
		case 90:
			time = time + 10;
			break;
		}
	}

	printf("%d", time);
	return 0;
}