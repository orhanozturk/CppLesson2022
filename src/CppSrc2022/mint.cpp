#include "mint.hpp"
#include <ostream>
#include <istream>
#include "nutility.hpp"

std::ostream &operator<<(std::ostream &os, const Mint val)
{
    return os << "[" << val.mval << "]";
}


std::istream &operator>>(std::istream &is, Mint &m)
{
    return is >> m.mval;
}

Mint Mint::Random()
{
    //return Mint{0};
    return Mint{Irand{0, 1000}()};
}
