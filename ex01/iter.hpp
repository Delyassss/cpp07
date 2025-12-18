#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>

template <typename Tp, typename Fn>
void iter(Tp *arr, const size_t size, Fn f)
{
    for (size_t i = 0; i < size; i++)
    {
        f(arr[i]);
    }
}

#endif