#ifndef EX02_ARRAY_HPP
# define EX02_ARRAY_HPP
# define YELLOW "\033[0;33m"
# define PURPLE "\033[0;35m"
# define RED "\033[0;31m"
# define BLUE "\033[0;34m"
# define GREEN "\033[0;32m"
# define DARK_YELLOW "\033[2;33m"
# define DARK_PURPLE "\033[2;35m"
# define DARK_RED "\033[2;31m"
# define DARK_GREEN "\033[2;32m"
# define END "\033[0;0m"
# define MAX_VAL 750
# include <iostream>

template<class T>
class Array
{
public:
	Array() : _size(0)
    {
        _array = nullptr;
    }
	Array(unsigned int val) : _size(val)
    {
        if (_size > 0)
        	_array = new T[_size];
		else
			_array = nullptr;
	}
	Array(const Array &other)
    {
        this->_size = other._size;
		if (this->_size > 0)
		{
			this->_array = new T[this->_size];
			for (unsigned int i = 0; i < this->_size; i++)
			{
				this->_array[i] = other._array[i];
			}
		}
		else
			this->_array = nullptr;
    }
	virtual ~Array()
    {
		//std::cout << "Destructor call." << std::endl;
        delete[] _array;
        _array = nullptr;
        _size = 0;
    }
	Array& operator=(const Array &other)
    {
        if (this == &other)
        {
            return *this;
        }
        if (this->_size != 0)
        {
            delete[] this->_array;
        }
        this->_size = other._size;
		if (this->_size > 0)
		{
			this->_array = new T[this->_size];
			for (unsigned int i = 0; i < this->_size; i++)
			{
				this->_array[i] = other._array[i];
			}
		}
		else
			this->_array = nullptr;
		return *this;
    }
	T& operator[](size_t index)
	{
		if (index >= this->_size)
		{
			throw IndexOut();
		}
		return this->_array[index];
	}
	unsigned int getSize() const
	{
		return _size;
	}
	class IndexOut : public std::exception
	{
	public:
		virtual const char *what() const throw()
		{
			return "Out of index range.";
		}
	};
private:
    unsigned int _size;
    T* _array;
};

#endif
