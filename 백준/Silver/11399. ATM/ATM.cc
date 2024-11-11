/*#include<stdio.h>
#include<string.h>
using namespace std;
int deque[20001];
int f = 10000,b = 10000;
void push_front(int item) {
	deque[--f] = item;
}
void push_back(int item) {
	deque[b++] = item;
}
int pop_front() {
	if (f == b) {
		printf("-1");
	}
	printf("%d", deque[f]);
	f++;
}
int pop_back() {
	if (f == b) {
		printf("-1");
	}
	printf("%d", deque[b-1]);
	b--;
}

int size() {
	printf("%d", b - f);
}

int empty() {
	if (f == b)
		printf("1");
	else
		printf("0");
}

void front() {
	if (f == b) {
		printf("-1");
	}
	printf("%d", deque[f]);
}

int back() {
	if (f == b) {
		printf("-1");
	}
	printf("%d", deque[b]);
}

int main() {
	int item = 0;
	int num = 0;
	char hamsu[11] = { 0 };
	scanf("%d", &num);
	for (int i = 0;i < num;i++) {
		scanf("%s", hamsu);
		if (strcmp(hamsu, "push_front") == 0)
			scanf("%d", &item);
		else if (strcmp(hamsu, "push_back") == 0)
			scanf("%d", &item);
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
		
		return 0;
	}
}
*/
#include<stdio.h>


void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
void sort(int* arr, int n) {
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < n - 1;j++) {
			if (arr[j] > arr[j + 1])
				swap(&arr[j], &arr[j + 1]);
		}
	}
}


int main() {
	int sum = 0, ssum = 0;
	int n = 0;
	int arr[1001] = { 0 };
	
	scanf("%d", &n);
	for (int i = 0;i < n;i++) {
		scanf("%d", &arr[i]);
	}
	sort(arr,n);
	for (int j = 0;j < n;j++) {
		sum = sum + arr[j];
		ssum += sum;
	}
	printf("%d", ssum);
	return 0;
}











