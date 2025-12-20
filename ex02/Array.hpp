#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>

template <typename T>
class Array
{
    private:
        T *data;
        unsigned int arrsize;
    
    public:
        Array()
        {
            data = NULL;
            arrsize = 0;
        }
        Array(unsigned int n)
        {
            data = new T[n];
            arrsize = n;
        }
        Array(const Array &other) : data(NULL), arrsize(0)
        {
            this->arrsize = other.arrsize;
            if (other.data != NULL && arrsize > 0)
            {
                this->data = new T[arrsize];
                for (int i = 0; i < arrsize; i++)
                {
                    this->data[i] = other.data[i];
                }
            }
        }
        Array &operator=(const Array &other)
        {
            if (this != &other)
            {
                delete [] data;
                arrsize = other.arrsize;
                data = new T[arrsize];
                for (int i = 0; i < arrsize; i++)
                {
                    data[i] = other.data[i];
                }
            }
            return *this;
        }
        T &operator[](unsigned int index)
        {
            if (index >= arrsize)
                throw outofrange();
            return data[index];
        }
        ~Array()
        {
            if (data != NULL)
            {
                delete [] data;
            }
        }
        unsigned int size() const
        {
            return arrsize;
        }
        class outofrange : public std::exception
        {
            public :
                virtual const char *what() const throw()
                {
                    return ("out of range exception");
                }
        };
};
#endif