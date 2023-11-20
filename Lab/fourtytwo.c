#include <stdio.h>
#include <dirent.h>
int main(void){
   struct dirent *files;
   DIR *dir = opendir(".");
   if (dir == NULL){
      printf("Directory cannot be opened!" );
      return 0;
   }
   while ((files = readdir(dir)) != NULL)
   printf("%s", files->d_name);
   closedir(dir);
   return 0;
}