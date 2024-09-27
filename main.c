#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void ls();

	int main(){
		
		int exit = 0;
		char *command= (char*)malloc(100 * (sizeof(char)));

		while(exit != 1){

			printf("abendezu$ ");
			command = fgets(command, 100, stdin);
			*(command + strlen(command) - 1) = '\0';
			if(strcmp(command, "ls") == 0){
				ls();
			}
			
			if(strcmp(command, "exit") == 0){


				exit = 1;
			}

		}
			
		free(command);

		return 0;
	}

void ls(){




	}
