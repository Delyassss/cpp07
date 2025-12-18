#ifndef WHATEVER_H
#define WHATEVER_H

#include <iostream>
#include <string>


template <typename Tp>
void swap(Tp &a, Tp &b)
{
    Tp tmp = a;// if you set tmp as ref and tried to change a like above the tmp will change too cuz it a ref duuh!
    a = b;
    b = tmp;
}
template <typename Tp>
Tp max(const Tp &a, const Tp &b)
{
    return a > b ? a : b;
}

template <typename Tp>
Tp min(const Tp &a, const Tp &b)
{
    return a < b ? a : b;
}
#endif

