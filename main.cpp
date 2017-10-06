#include <iostream>
#include <string>
#include <fstream>
#include "FileParser.h"

int main(int argc, char *argv[]){
    if(argc != 2){
        std::cout << "Insert ONE .in file" << std::endl;
        return 0;
    }

    std::string input = argv[1];
    FileParser fp = FileParser(input);

    long m_nrRows = fp.ParseHead();
    long m_nrColumns = fp.ParseHead();
    long m_nrDrones = fp.ParseHead();
    long m_nrTuns = fp.ParseHead();
    long m_maxPayload = fp.ParseHead();
}
