#include <stdio.h>

void f(int **pip);


int main(){
	int **pip;
	f(pip);
	
	printf("number, address: %d, %p\n", **pip, *pip); 
		// pip is a dangling pointer 
		// (value may or may not be 10 here)
	
	f(pip);
	**pip = 20;
	printf("number, address: %d, %p\n", **pip, *pip); 
		// pip is a dangling pointer 
		// (value may or may not be 20 here)

	return 0;
}


void f(int **pip){
	int a = 10;
	*pip = &a;
	return;
}