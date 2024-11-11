#include<stdio.h>
#include<stack>
using namespace std;
int main() {
	char dan[100001] = { 0 };
	int num = 0;
	int cnt = 0;
	scanf("%d", &num);

	for (int i = 0; i < num;i++) {
		stack<char>s;
		scanf("%s", dan);
		for (int j = 0; dan[j] != '\0'; j++) {
			if (s.empty() == 1)
				s.push(dan[j]);
			else {
				if (dan[j] == s.top())
					s.pop();
				else
					s.push(dan[j]);
			}
		}	
		if (s.empty() == 1)
			cnt++;
	}
	printf("%d", cnt);
}