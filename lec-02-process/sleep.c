#include <stdbool.h>
#include <stdio.h>
#include <unistd.h>

int main() {

  while (true) {
    printf("going to sleep\n");
    sleep(5);
  }
}
