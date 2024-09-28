#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Directory{

	char name[100];
	struct Directory directories[100];
	

};



void ls();
void mkdir(char name[]); 

	int main(){
		
		int exit = 0;
		char *command = (char*)malloc(100 * (sizeof(char)));
		int i,j;
		

		while(exit != 1){
			i = 0;
			j = 0;

			char *exec;
			printf("abendezu$ ");
			command = fgets(command, 100, stdin);
			*(command + strlen(command) - 1) = '\0';
			
			while(*(command+i) != '\0'){
				
				
				if(*(command+i) == ' '){
					exec = (char*)calloc(i+2,sizeof(char));
					opt = (char*)malloc(100*sizeof(char));
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
					}
				i++;
				}	
			
// we have to create a root folder then we can add folders
// list all directories

			if(strcmp(exec, "ls") == 0){
				ls();
				continue;

			} else if(strcmp(exec, "mkdir") == 0){
				mkdir(opt);
				continue;
			}else if(strcmp(command, "exit") == 0){

				exit = 1;
			}


			free(exec);
		}

		free(command);

		return 0;
	}



void ls(){

	}


void mkdir(char name[]){
	struct Directory *dir = (struct Directory*)malloc(sizeof(Directory));

	strcpy(dir->name, name);
	

}
