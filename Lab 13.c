#include <stdio.h>
#include <stdlib.h>

int main(){
srand(55); // we set the seed here
  int n = rand(); // now, lets generate  a "random" number
  printf("Pseudo-random number: %d\n", n); // print it
}
