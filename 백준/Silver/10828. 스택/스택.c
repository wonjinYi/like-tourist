#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct _Node {
	struct _Node* next;
	int elem;
} Node;

typedef struct _Stack {
	Node* head;
	int size;
} Stack;

Node* getNode() {
	Node* p = (Node*)malloc(sizeof(Node));
	p->next = NULL;
	return p;
}

void putNode(Node* p) {
	free(p);
}

void push(Stack* S, int elem) {
	Node* p = getNode();
	p->next = S->head;
	p->elem = elem;
	S->head = p;

	(S->size)++;
}

int pop(Stack* S) {
	if (S->head == NULL)
		return -1;
	else {
		Node* q = S->head;
		int n = q->elem;
		S->head = (S->head)->next;
		putNode(q);
		(S->size)--;
		return n;
	}
}

int top(Stack* S) {
	if (S->head == NULL)
		return -1;
	else
		return (S->head)->elem;
}

int main() {
	Stack* S = (Stack *)malloc(sizeof(Stack));
	S->head = NULL;
	S->size = 0;

	int n;
	scanf("%d", &n); getchar();

	for (int i = 0; i < n; i++) {
		char command[6];
		scanf("%s", command); getchar();

		if (!strcmp(command, "push")) {
			int elem;
			scanf("%d", &elem); getchar();
			push(S, elem);
		}
		else if (!strcmp(command, "pop")) {
			printf("%d\n", pop(S));
		}
		else if (!strcmp(command, "top")) {
			printf("%d\n", top(S));
		}
		else if (!strcmp(command, "size")) {
			printf("%d\n", S->size);
		}
		else if (!strcmp(command, "empty")) {
			printf("%d\n", S->head == NULL ? 1 : 0);
		}
	}
}