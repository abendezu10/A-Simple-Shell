#include <stdlib.h>
#include <stdio.h>
#include "mkdir.h"




void mkdir(Directory *parent_directory, char name[]){

  Directory *new_directory = create_directory(cur_dir, name);
 
  add_subdirectory(parent_directory, new_dir);
  
}

Directory *create_directory(Directory *parent_directory, const char name[] ){
    Directory *new_directory = (Directory*)malloc(sizeof(Directory));
    strcpy(new_dir->name, name);
    new_directory->parent_directory = parent_directory;



    return new_directory;

  } 

void add_subdirectory(Directory *parent_directory, Directory *sub_directory){


  
}
