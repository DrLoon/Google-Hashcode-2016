#pragma once
#include <string>
#include <fstream>
#include <sstream>
#include <vector>
#include "Warehouse.h"
#include "Order.h"

class FileParser {
    public:
        FileParser(std::string arg);
        long ParseHead();
        std::vector<long> ParseWeights();
        std::vector<Warehouse> ParseWarehouses();
        std::vector<Order> ParseOrders();
        
    private:
        std::stringstream m_input;
        std::stringstream m_header;
        long m_nrProducts;
};
