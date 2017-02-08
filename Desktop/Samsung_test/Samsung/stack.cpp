#include <stdio.h>
#include <stdlib.h>

int s[10];
int top = -1;


bool isEmpty(){
	if(top == -1)
	return true;
	
	else
	return false;
}

bool isFull(){
	if(top == 9)
	return true;
	
	else 
	return false;
}

void push(int x){
	if(isFull()){
		printf("stack is full\n");
	}
	else {
		s[++top] = x;
	}
}

void pop(){
	if(isEmpty()){
		printf("stack is empty\n");
	}
	else {
		s[top] = 0;
		top--;
	}
}

void print(){
	for(int i=0; i<=top; i++){
		printf("%d\n", s[i]);
	}
}

int main(){
	
	push(10);
	push(45);
	push(95);
	push(56);
	push(10);
	push(45);
	push(95);
	push(56);
	push(10);
	push(45);

    pop();
	pop();
	print();	
	return 0;
}
