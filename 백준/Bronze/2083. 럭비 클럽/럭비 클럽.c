#include <stdio.h>
int main() {
	char name[11];
	int age = 0;
	int g = 0;
	while (1) {
		scanf("%s %d %d", name, &age, &g);
		if (name[0] == '#' && age == 0 && g == 0)
			break;
		printf("%s ", name);
		if (age > 17 || g >= 80) 
			printf("Senior\n");
		else printf("Junior\n");

		
	}
	return 0;
}