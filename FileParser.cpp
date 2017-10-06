#include "FileParser.h"
#include "Product.h"
#include <iostream>
#include <cstring>

FileParser::FileParser(std::string arg) {
    std::ifstream in(arg);
    m_input << in.rdbuf();
    std::string tmp;
    std::getline(m_input, tmp);
    m_header.str(tmp);
    in.close();
}

long FileParser::ParseHead(){
    std::string word;
    std::getline(m_header, word, ' '); 
    std::cout << word << " " ;
    return std::stol(word);
}

std::vector<long> FileParser::ParseWeights(){
    std::string line;
    std::vector<long> v;
    std::getline(m_input, line);
    m_nrProducts = std::stol(line);
    std::cout << "\n" << line << std::endl;
    for(int i = 0; i < m_nrProducts; ++i){
        long value;
        m_input >> value;
        v.push_back(value);
        std::cout << value << " ";
    }
    std::cout << std::endl;
    return v;
}

std::vector<Warehouse> FileParser::ParseWarehouses(){
    std::vector<Warehouse> whl;
    long nr, x, y, pr;
    m_input >> nr;
    for(int i = 0; i < nr; ++i){
        m_input >> x;
        m_input >> y;
        std::cout << x << " " << y << " ";
        Warehouse wh = Warehouse(x,y);
        for(int j = 0; j < m_nrProducts; ++j){
            m_input >> pr;
            wh.addProduct(pr);
            std::cout << pr << " ";
        }
        std::cout << std::endl;
        whl.push_back(wh);
    }
    return whl;
}

std::vector<Order> FileParser::ParseOrders(){
    std::vector<Order> ol;
    long nr, x, y, o, it;
    m_input >> nr;
    for(int i = 0; i < nr; ++i){
        m_input >> x;
        m_input >> y;
        Order order = Order(x,y);
        std::cout << x << " " << y << " ";
        m_input >> it;
        for(int j = 0; j < it; ++j){
            m_input >> o;
            order.addProduct(o);
            std::cout << o << " ";
        }
        std::cout << std::endl;
        ol.push_back(order);
    }
    return ol;
}
        
