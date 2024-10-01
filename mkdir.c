#include <stdlib.h>
#include <stdio.h>
#include "mkdir.h"




void mkdir(Directory *cur_dir, char name[]){
	
	// Creates directory struct
	Directory *new_dir = (Directory*)malloc(sizeof(Directory));
	strcpy(new_dir->name, name);
	new_dir->parentdirectory = cur_dir;
	
	// Connects current directory to the newly created folder
	cur_dir->subdirectories = 


}

	
