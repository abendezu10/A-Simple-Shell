#include <stdio.h>
#include "ls.h"


void ls(Directory *parent_directory){

	int i = 0;

	while(parent_directory->subdirectories[i] != NULL){

		printf("%s", parent_directory->subdirectories[i]->name);
    if(parent_directory->num_subdirectories != i - 1){
      printf("\t");
    }
    i++;
	}

  printf("\n");

}
