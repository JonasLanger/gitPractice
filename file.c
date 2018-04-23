#include <stdio.h>
#include <stdlib.h>

int main (int argc, char* argv[]) {
	// this program takes in a file and prints all of the words as a list to the terminal

	FILE * fp = fopen(argv[1], "r");
	char buffer[100];
	int count = 0;
	int newLine = 0;  //checks if the buffer contained any words
	int was_In_Word=0;
	while (fgets(buffer,100,fp)) {
		count = 0;
		while (buffer[count]!='\0') { // from start to end of buffer
			if (buffer[count] > 96 && buffer[count] < 123) {  // between 'a' and 'z'
				printf("%c",buffer[count]);
				was_In_Word=1;
				count++;
			}
			else {
				if (was_In_Word==1) {
					printf("\n");
					was_In_Word=0;
				}
				count++;
			}
		}
		if (was_In_Word==1) { //skipping line at the end of loop if it was in word
			printf("\n");
			was_In_Word=0;
		}
	}

}