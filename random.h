#ifndef RANDOM_H
#define RANDOM_H

class Random
{
public:
    Random(int seed=-1);
    //permet de récupérer un entier aléatoire
    int get(int max);
    double getFloat();
};

#endif // MYRANDOM_H
