#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void func1(char* name, int n){
	name[4] = 'L';
	printf("%s", name);
}

int main(){
	// if you are taking any word or sentence as a string then you can't store it in a char, you will have to store it in a char array you don't have to specify size of array here
	char name[] = "mohit";
	printf("%s\n", name);
	
	//array elements are stored in curly braces when initialized
	int values[5] = {1,2,3,4,5};
	printf("%d\n", values[3]);
	
	char arr[5];
	
	//here for scanning an char array '&' sign is not required
	scanf("%s", arr);
	printf("%s\n", arr);
	
	//we need to pass the pointer to first element of character array and also the size of array to know when to stop
	func1(arr, 5);
	
	return 0;
}
