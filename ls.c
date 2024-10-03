#include <stdio.h>
#include "ls.h"


void ls(Directory *parent_directory){

	int i = 0;

	while(parent_directory->subdirectories[i] != NULL){
		printf("%s", parent_directory->subdirectories[i]->name);
		printf("\t");

	}



}
