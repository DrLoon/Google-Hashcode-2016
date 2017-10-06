#pragma once
#include "MapInfo.h"
#include <vector>

class Warehouse : public MapInfo {
    public:
        Warehouse(int x, int y);
    private:
        std::vector<long> m_productList;
}
