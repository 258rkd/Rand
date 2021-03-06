#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "rand.h"
#include <iostream>
using namespace std;

Randomizer* Randomizer::rng = NULL;

Randomizer::Randomizer(){
  srand(time(NULL));
}

Randomizer* Randomizer::instance(){
  if(rng == NULL)
     rng = new Randomizer();
  return rng;
}

unsigned int Randomizer::randomBetween(unsigned int minimum, unsigned int maximum){
  return rand() % maximum + minimum;
}

int main(){
  Randomizer *rng = Randomizer::instance();
  int x = rng->randomBetween(0,10);
  for(int i = 0; i < 10; i++){
    cout << x << endl;
    x = rng->randomBetween(0,10);
  }
  return 0;
}
