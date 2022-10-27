#include "Convert.hpp"

Convert::Convert():{
    return ;
}

Convert::~Convert(void){
    return ;
}

Convert::Convert(Convert const &src){
    *this = src;
}

Convert& Convert::operator=(Convert const & rhs){
    if (this != &rhs){
    }
    return *this;
}