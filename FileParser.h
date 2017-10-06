#pragma once
#include <string>
#include <fstream>
#include <sstream>

class FileParser {
    public:
        FileParser(std::string arg);
        long ParseHead();
        
    private:
        std::stringstream m_input;
};
