#include <stdio.h>

int main(){
	const int width = 9; // Base of pyramid is 9 chars (*)
	for (int star = 1; star < width; star += 2){
		const int spaces = (width - star) / 2;
		for (int l = 0; l < spaces; l++){
			printf(" ");
		}
		for (int chars = 0; chars < star; chars++){
			printf("*");
		}
		printf("\n");
	}
}