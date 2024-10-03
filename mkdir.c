#include <stdlib.h>
#include <stdio.h>
#include "mkdir.h"




void mkdir(Directory *parent_directory, char name[]){

  Directory *new_directory = create_directory(cur_dir, name);
  parent_directory->num_subdirectories++;

  add_subdirectory(parent_directory, new_dir);
  
}

Directory *create_directory(Directory *parent_directory, const char name[] ){
  Directory *new_directory = (Directory*)malloc(sizeof(Directory));
  strcpy(new_dir->name, name);
  
  new_directory->num_subdirectories = 0;
  
  new_directory->parent_directory = parent_directory;
  

  add_subdirectory(parent_directory, new_directory);
  

  return new_directory;

  } 

void add_subdirectory(Directory *parent_directory, Directory *sub_directory){

  parent_directory->sub_directories = (Directory**)realloc(parent_directory->sub_directories,
                                      (parent_directory->num_subdirectories + 1) * sizeof(Directory *));
  


 parent_directory->sub_directories[parent_directory->num_subdirectories] = sub_directory;

 parent_directory->num_subdirectories++;

}
