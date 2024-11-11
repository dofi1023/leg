#include<stdio.h>
#include<string.h>
using namespace std;
int deque[20000];
int f = 10000,b = 10000;
void push_front(int item) {
	deque[--f] = item;
}
void push_back(int item) {
	deque[b++] = item;
}
void pop_front() {
	if (f == b) {
		printf("-1\n");
	}
	else {
		printf("%d\n", deque[f]);
		f++;
	}
}
void pop_back() {
	if (f == b) {
		printf("-1\n");
	}
	else {
		printf("%d\n", deque[b - 1]);
		b--;
	}
}

void size() {
	printf("%d\n", b - f);
}

void empty() {
	if (f == b)
		printf("1\n");
	else {
		printf("0\n");
	}
}

void front() {
	if (f == b) {
		printf("-1\n");
	}
	else 
		printf("%d\n", deque[f]);
}

void back() {
	if (f == b) {
		printf("-1\n");
	}
	else 
		printf("%d\n", deque[b-1]);
}

int main() {
	int item = 0;
	int num = 0;
	char hamsu[11];
	scanf("%d", &num);
	for (int i = 0;i < num;i++) {
		scanf("%s", hamsu);
		if (strcmp(hamsu, "push_front") == 0) {
			scanf("%d", &item);
			push_front(item);
		}
		else if (strcmp(hamsu, "push_back") == 0) {
			scanf("%d", &item);
			push_back(item);
		}
		else if (strcmp(hamsu, "pop_front") == 0)
			pop_front();
		else if (strcmp(hamsu, "pop_back") == 0)
			pop_back();
		else if (strcmp(hamsu, "size") == 0)
			size();
		else if (strcmp(hamsu, "empty") == 0)
			empty();
		else if (strcmp(hamsu, "front") == 0)
			front();
		else if (strcmp(hamsu, "back") == 0)
			back();
		
		
	}
	return 0;
}