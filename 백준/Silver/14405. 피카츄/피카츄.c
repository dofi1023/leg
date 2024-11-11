#include<stdio.h>
#include<string.h>

int main() {

	char scan[5000] = { 0 };
	int dab = 0;
	scanf("%s", scan);


	for (int i = 0;i < strlen(scan);i++) {
		if (scan[i] == 'p') {
			if (scan[i + 1] == 'i')
				dab = 1;
			else {
				dab = 0;
				break;
			}
			i++;
		}


		else if (scan[i] == 'k') {
			if (scan[i + 1] == 'a')
				dab = 1;
			else {
				dab = 0;
				break;
			}
			i++;
		}

		else if(scan[i]=='c'){
			if (scan[i + 1] == 'h' && scan[i + 2] == 'u')			
				dab = 1;
			else {
				dab = 0;
				break;
			}
			i = i + 2;
		}
		else {
			dab = 0;
			break;
		}
	}

	if (dab==1)
		printf("YES\n");
	else if (dab==0)
		printf("NO");

	return 0;
}