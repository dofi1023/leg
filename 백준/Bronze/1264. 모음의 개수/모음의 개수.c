#include<stdio.h>
int main() {
	char monjang[256];
	int moum = 0;
	while (1) {
		gets(monjang);
		
		for (int i = 0;monjang[i] != '\0';i++) {

			if(monjang[i]=='a'|| monjang[i] == 'A'||monjang[i] == 'e' || 
				monjang[i] == 'E'|| monjang[i] == 'i'||monjang[i] == 'I' ||
				monjang[i] == 'o' || monjang[i] == 'O' || monjang[i] == 'u' ||
				monjang[i] == 'U')
			{
				moum++;
			}
		}
		if (monjang[0] == '#')
			break;

		printf("%d\n", moum);
		moum = 0;
	}
	
	return 0;
}




