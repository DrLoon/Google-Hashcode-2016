#pragma once
#include "MapInfo.h"
#include <vector>

class Warehouse : public MapInfo {
    public:
        Warehouse(int x, int y);
        void addProduct(long amount);
    private:
        std::vector<long> m_productList;
};
