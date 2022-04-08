
#include <string>
#include <iostream>

#include <fstream>

#include "../shared/filehandler.h"

int main() {
    FileHandler f("/root/content.txt", std::fstream::out);
    std::string input;
    do 
    {
        std::cin >> input;
        std::cout << input << std::endl;
        f.writeLine(input);
    } while (input != "-quit");
    return 0;
}
