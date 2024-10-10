#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "mkdir.h"
#include "ls.h"
#include "parse.h"

int main(){		
	
	int exit = 0;
	
	char *command = (char*)malloc(100 * (sizeof(char)));
	
	// Creates root directory
	Directory *root = (Directory*)malloc((sizeof(Directory)));
  root->num_subdirectories = 0;

	strcpy(root->name, "~ ");
	root->parentdirectory = NULL;
	int i,j;

	Directory *current_dir = root;
		

	while(exit != 1){
		i = 0;
		j = 0;

		printf("abendezu$ %s", current_dir->name);
		command = fgets(command, 100, stdin);
		*(command + strlen(command) - 1) = '\0';
		char *exec = (char*)calloc(100,sizeof(char));
		char *opt = (char*)malloc(100*sizeof(char));
	
    parse_command(command, exec, opt);
			
		if(strcmp(command,"ls") == 0){

			ls(current_dir);
			continue;
		} else if(strcmp(exec, "mkdir") == 0){ 

			mkdir(current_dir, opt);
			continue;
		} 

	  if(strcmp(command, "exit") == 0){

			exit = 1;
		}

		free(exec);
			
	}

	free(command);
	
	return 0;
}

