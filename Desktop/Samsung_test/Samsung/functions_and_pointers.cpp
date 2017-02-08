#include <stdio.h>
#include <stdlib.h>

void func1(int* y){
	*y = 11;
}

int main(){
   
   int x = 10;
   
   // if you dont want to reutrn from a function a want to chage the value of a variable then pass the pointer variable in the function, this is called passing vby reference
   func1(&x);
   printf("%d", x);
   	
	return 0;
}
