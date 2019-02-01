#include <stdio.h>
#include <emscripten/emscripten.h>

int main(int argc, char ** argv) {
    printf("This is web assembly, written in C, executed from main.\n");
}

#ifdef __cplusplus
extern "C" {
#endif

void EMSCRIPTEN_KEEPALIVE myFunction(int argc, char ** argv) {
  printf("This is my custom function in C that is being called from JavaScript!\n");
}

#ifdef __cplusplus
}
#endif
