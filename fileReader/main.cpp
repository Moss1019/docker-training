
#include <string>
#include <iostream>

#include "../shared/filehandler.h"

int main() 
{
    FileHandler f("/root/content.txt", std::fstream::in);
    std::string content = f.readFile();
    std::cout << content << std::endl;
    return 0;
}
