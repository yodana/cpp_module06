#ifndef CONVERT_H
# define CONVERT_H

#include <iostream>

class Convert {
    public:
        Convert();
        ~Convert(void);
        Convert(Convert const &src);
        Convert & operator=(Convert const & rhs);
};

#endif%            