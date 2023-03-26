#ifndef COUNTER_HPP
#define COUNTER_HPP

#include <iosfwd>

class Counter
{
public:
    Counter() = default;
    explicit Counter(int);

    //RAII sınıfı değil kaynak kullanmadıgından
};

std::ostream &operator<<(std::ostream &, Counter);

#endif // COUNTER_HPP
