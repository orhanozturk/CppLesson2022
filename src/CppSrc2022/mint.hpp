#ifndef MINT_HPP
#define MINT_HPP

#include <iosfwd>

class Mint{
private:
    int mval{};

public:
    Mint() = default;
    explicit Mint(int val) : mval{val}{}

    Mint & operator++()
    {
        ++mval;
        return *this;
    }

    Mint operator++(int)
    {
        Mint retval{*this};
        ++(*this);
        return retval;
    }

    Mint & operator--()
    {
        --mval;
        return *this;
    }

    Mint operator--(int)
    {
        Mint retval{*this};
        --(*this);
        return retval;
    }

    Mint &operator+=(const Mint &other)
    {
        mval += other.mval;

        return *this;
    }

    Mint &operator-=(const Mint &other)
    {
        mval -= other.mval;

        return *this;
    }


    Mint &operator*=(const Mint &other)
    {
        mval *= other.mval;

        return *this;
    }

    Mint &operator/=(const Mint &other)
    {
        mval /= other.mval;

        return *this;
    }

    explicit operator bool()const
    {
        return mval != 0;
    }

    friend bool operator==(const Mint &m1, const Mint &m2)
    {
        return m1.mval == m2.mval;
    }

    friend bool operator<(const Mint &m1, const Mint &m2)
    {
        return m1.mval < m2.mval;
    }


    friend std::ostream &operator<<(std::ostream &os, const Mint val);
    friend std::istream &operator>>(std::istream &is, Mint &m);

    static Mint Random();
};

inline bool operator>(const Mint &x, const Mint &y)
{
    return y < x;
}

inline bool operator>=(const Mint &x, const Mint &y)
{
    return !(x < y);
}

inline bool operator<=(const Mint &x, const Mint &y)
{
    return !(y < x);
}

inline bool operator!=(const Mint &x, const Mint &y)
{
    return !(x == y);
}

inline Mint operator+(Mint x, const Mint &y)
{
    return x += y;

}

inline Mint operator-(Mint x, const Mint &y)
{
    return x -= y;
}

inline Mint operator*(Mint x, const Mint &y)
{
    return x *= y;
}

inline Mint operator/(Mint x, const Mint &y)
{
    return x /= y;
}

#endif // MINT_HPP
