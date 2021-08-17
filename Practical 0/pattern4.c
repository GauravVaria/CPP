#include <stdio.h>

int main(){
	for (int i = 0; i < 5; i++){
		for (int spaces = 0; spaces < (4 - i); spaces++){
			printf("   ");
		}
		int num = 5;
		for (int j = 0; j < (i + 1); j++){
			printf(" %i ", num);
			num--;
		}
		printf("\n");
	}
}