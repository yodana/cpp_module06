#include <iostream>

int main(int argc, char *argv[]){
    if (argc != 2){
        std::cerr << "Error numbers arguments" << std::endl;
        return 0;
    }
    
    std::cout << "char: " << argv[1] << std::endl;
    return 0;
}