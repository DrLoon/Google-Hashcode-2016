#pragma once
#include "MapInfo.h"
#include <vector>
#include <utility>
#include <map>


class Order: public MapInfo {
        public: 
        Order(int x, int y) : MapInfo(x, y) {}
        void addProduct(long nr); 
        private:
        std::map<long, long> m_numberOfItems;
};
