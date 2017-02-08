#include <stdio.h>
#include <stdlib.h>

struct point {
	int x;
	int y;
};

void struct_function(){
	//struct variables are accessed by dot '.' operator
	struct point p2;
	
	p2.x=20;
	p2.y=21;
	
	printf("%d %d\n", p2.x,p2.y);
	
	// scanf function works the same way for struct variables too
	scanf("%d %d", &(p2.x), &(p2.y));
	printf("\n%d %d\n", p2.x,p2.y);
}

void struct_pointer_function(){
	// if oyu are creating a pointer then you need to allocate memory for the same otherwise the program will stop running 
	// int struct pointer variable are accessed by arroy '->' symbol
    struct point* p1 = (point*)malloc(sizeof(point));
    
    p1->x = 10;
    p1->y = 11;
    
    printf("\n%d %d\n", p1->x,p1->y);
    
    // scanf fucntion works the same way on struct pointer variables too
    scanf("%d %d", &(p1->x), &(p1->y));	
	printf("\n%d %d", p1->x,p1->y);
}


int main(){

    struct_function();
    struct_pointer_function();
    
	return 0;
}
