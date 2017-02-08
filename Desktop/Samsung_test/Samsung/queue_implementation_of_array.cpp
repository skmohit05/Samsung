#include <stdio.h>
#include <stdlib.h>

int q[10];
int front = -1;
int rear = -1;

bool isEmpty(){
	if(front == rear && front == -1)
	return true;
	else
	return false;
}

bool isFull(){
	if(rear == 9)
	return true;
	
	else
	return false;
}

void push(int x){
if(isFull()){
	printf("queue is full\n");
}
else if(front == rear && front == -1){
q[++rear] = x;
++front;
}
else {
	q[++rear] = x;
}
}

void pop(){

}

void print(){
	for(int i=rear; i<=front;i--){
		printf("%d\n", q[i]);
	}
}


int main(){
	push(10);
	push(11);
	push(45);
	int i=rear;
	while(i != front-1){
	printf("%d\n", q[i]);
    i--;
	}

	return 0;
}
