#ifndef NUTILITY_HPP
#define NUTILITY_HPP

#include <random>

class Irand{
public:
    Irand() = default;
    Irand(int min, int max) : m_dist{min, max}{}
    int operator()();
private:
    std::uniform_int_distribution<int> m_dist;
};



#endif // NUTILITY_HPP
