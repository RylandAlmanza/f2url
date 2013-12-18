#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main(int args, char *argv[]) {
  if (args != 2) {
    printf("Usage: f2url <file>");
    return 0;
  }

  char *filename = argv[1];

  char url[1024];
  strcpy(url, "file://");
  if (filename[0] != '/') {
    char current_directory[1024];
    if (getcwd(current_directory, sizeof(current_directory)) != NULL) {
      strcat(url, current_directory);
      strcat(url, "/");
    } else {
      printf("Error getting current working directory");
    }
  }

  strcat(url, filename);
  
  printf("%s\n", url);

  return 0;
}
