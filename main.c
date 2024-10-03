#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "mkdir.h"
#include "ls.h"


int main(){		
	
	int exit = 0;
	
	char *command = (char*)malloc(100 * (sizeof(char)));
	
	// Creates root directory
	Directory *root = (Directory*)malloc((sizeof(Directory)));
  root->num_subdirectories = 0;

	strcpy(root->name, "~ ");
	root->parentdirectories = NULL;
	int i,j;

	Directory *cur_dir = root;
		

	while(exit != 1){
		i = 0;
		j = 0;

		printf("abendezu$ %s", cur_dir->name);
		command = fgets(command, 100, stdin);
		*(command + strlen(command) - 1) = '\0';
		char *exec = (char*)calloc(i+2,sizeof(char));
		char *opt = (char*)malloc(100*sizeof(char));
	
			
		while(*(command+i) != '\0'){				
			if(*(command+i) == ' '){

				while(j != i){
					*(exec + j) = *(command+j);
					j++;
					
	
			}
					*(exec+j+1) = '\0';
					i++;
				while(*(command + i) != '\0'){
					*(opt+i) = *(command+i);
					i++;	
				}

				*(opt+i+1) = '\0';
				break;
			}
				
			i++;
		}	
			

			if(strcmp(command,"ls") == 0){

				ls(cur_dir);
				continue;

			} else if(strcmp(exec, "mkdir") == 0){
					
				mkdir(cur_dir, opt);
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

