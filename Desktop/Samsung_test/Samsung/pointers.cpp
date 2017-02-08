#include <stdio.h>
#include <stdlib.h>


int main(){
   	//we cannot aSSIGN POINTER TO VALUE
	//int* p = 11;
	
	int x = 11;
//	int* p = x is wrong,    int* p = &x is correct

    int* p = &x;
	
	printf("%d", *p);
	
	return 0;
}
