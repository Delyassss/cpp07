#ifndef TEST_HPP
#define TEST_HPP



template <typename Tp>
Tp multiply(Tp a, Tp b)
{
    return (a * b);
}
template <>
std::string multiply (std::string a , std::string b)
{
    return (a + "_" + b);
}

template <typename T>
class Box
{
    private  :
        T _content;
    public :
    Box(T concent)
    {
        _content = concent;
    }
    T unleash()
    {
        return _content;
    }

};




#endif