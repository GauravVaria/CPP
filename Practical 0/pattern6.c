#include <stdio.h>

int main(){
	
	const int y = 9;
	for (int x = 1; x < y; x += 2){
		const int spaces = (y - x) / 2;
		for (int l = 0; l < spaces; l++){
			printf(" ");
		}
		for (int chars = 0; chars < x; chars++){
			printf("*");
		}
		printf("\n");
	}
}