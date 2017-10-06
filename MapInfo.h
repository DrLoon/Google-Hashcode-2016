#pragma once
#include <utility>

class MapInfo {
    public:
        MapInfo(int x, int y);
        virtual ~MapInfo() {};
        std::pair<int, int> getCoordinates(); 
        void setCoordinates(int x, int y);
        long getNrDrones();
        long getNrWarehouses();
        long getNrOrders();
    protected:
        std::pair<int, int> m_coordinates;
        long m_nrDrones;
        long m_nrWarehouses;
        long m_nrOrders;
};
