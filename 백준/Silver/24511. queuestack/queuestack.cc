#include<stdio.h>
#include<queue>

using namespace std;

int qors [1000001] = { 0 };
int dt[1000001] = { 0 };

int main() {

	queue<int>q;
	int n = 0, m = 0, a = 0;

	scanf("%d", &n);
	for (int i = 0;i < n;i++) {
		scanf("%d", &qors[i]);
	}

	for (int i = 0;i < n;i++) {
		scanf("%d", &dt[i]);
	}

	for (int i = n - 1;i >= 0;i--) {
		if (qors[i] == 0)
			q.push(dt[i]);
		else {
			continue;
		}
	}
	scanf("%d", &m);
	for (int i = 0; i < m;i++) {
		scanf("%d", &a);
		q.push(a);
		printf("%d ", q.front());
		q.pop();
	}
}


	












