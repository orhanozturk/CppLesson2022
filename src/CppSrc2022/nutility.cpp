#include "nutility.hpp"


namespace  {
    std::mt19937& urng()
    {
        static std::mt19937 eng{std::random_device{}()};

        return eng;
    }
}

int Irand::operator()()
{
    return m_dist(urng());
}
