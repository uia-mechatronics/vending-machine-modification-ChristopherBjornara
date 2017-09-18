#ifndef SODA_H
#define SODA_H

#include <string>

// Soda class declaration. See .cpp file with same name for definition / implementation.
class Soda
{
public:

    Soda(std::string name, unsigned int price, unsigned int inventory);

    std::string name_;
    unsigned int price_;
    unsigned int inventory_;

};

#endif // SODA_H
