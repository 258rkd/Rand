#ifndef RAND_H
#define RAND_H

using namespace std;

class Randomizer{
  public:
    static Randomizer *instance();
    unsigned int randomBetween(unsigned int minimum, unsigned int maximum);
    Randomizer();
  private:
    static Randomizer *rng;
};
#endif  
