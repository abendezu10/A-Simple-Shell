#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "mkdir.h"


void mkdir(Directory *parent_directory, char name[]){

  Directory *new_directory = create_directory(parent_directory, name);

  printf("%d\n", parent_directory->num_subdirectories);
 	
}

Directory *create_directory(Directory *parent_directory, const char name[] ){

  Directory *new_directory = (Directory*)malloc(sizeof(Directory));
  strcpy(new_directory->name, name);
  new_directory->num_subdirectories = 0;
  
  new_directory->parentdirectory = parent_directory;

  add_subdirectory(parent_directory, new_directory);
  
  return new_directory;
  } 

void add_subdirectory(Directory *parent_directory, Directory *sub_directory){

  parent_directory->subdirectories = (Directory**)realloc(parent_directory->subdirectories,
                                      (parent_directory->num_subdirectories + 1) * sizeof(Directory *));
  
 parent_directory->subdirectories[parent_directory->num_subdirectories] = sub_directory;

 parent_directory->num_subdirectories++; 
}
