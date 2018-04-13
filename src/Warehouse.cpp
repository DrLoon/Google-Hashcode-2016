#include "../inc/Warehouse.h"

Warehouse::Warehouse(int x, int y) : MapInfo(x, y), m_productList(std::vector<long>()){};

void Warehouse::addProduct(long amount){
    m_productList.push_back(amount);
}
