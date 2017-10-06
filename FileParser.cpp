#include "FileParser.h"
#include <iostream>
#include <cstring>

FileParser::FileParser(std::string arg) {
    std::ifstream in(arg);
    m_input << in.rdbuf();
    in.close();
}

long FileParser::ParseHead(){
    std::string line;
    std::getline(m_input, line, ' ');
    return std::stol(line);
}
