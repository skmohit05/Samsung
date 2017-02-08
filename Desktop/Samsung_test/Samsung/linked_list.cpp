#include <stdio.h>
#include <stdlib.h>

struct Node{
	int data;
	struct Node* next;
};

Node* getNewNode(int x){
	Node* newNode = (Node*)malloc(sizeof(newNode));
	newNode->data = x;
	newNode->next = NULL;
}

Node* insert(Node* head, int x){
	Node* temp = getNewNode(x);
	if(head == NULL){
		head = temp;
	}
	else {
		Node* temp2 = head;
		while(temp2->next != NULL){
			temp2 = temp2->next;
		}
		temp2->next = temp;
	}
	return head;
	}
}

int main(){
	Node* head = NULL;
	head = insert(head, 8);
	head = insert(head, 18);
	head = insert(head, 28);
}

void print(Node* head){
	if(head == NULL){
		printf("list is empty\n");
	}
	else {
		while(head != NULL){
			printf("%d->", head->data);
			head = head->next;
		}
	print(head);
	
	return 0;
}
