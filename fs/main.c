#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main(void) {
  FILE* f = fopen("output.txt", "w");
  if (f == 0) {
    perror("open");
    return 1;
  }
  fprintf(f, "Hello from ARM!\n");
  fclose(f);
  return 0;
}
