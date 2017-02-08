#include <stdio.h>
#include <stdlib.h>

// void function with argument 
void func1(int y){
	printf("%d\n", y);
	
	//changing argument value
	y = 11;
	printf("%d\n", y);
}

//function with argument
int func2(int z){
	z = 15;
	return z;
}

int main(){

    int x = 10;
    func1(x);
    
    printf("%d\n", func2(x));
     
	return 0;
}
