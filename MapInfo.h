#pragma once
#include <utility>

class MapInfo {
    public:
        MapInfo(int x, int y);
        virtual ~MapInfo() {};
        std::pair<int, int> getCoordinates(); 
        void setCoordinates(int x, int y);
        static long getNrDrones();
        static void setNrDrones(long nr);
        static long getNrWarehouses();
        static void setNrWarehouses(long nr);
        static long getNrOrders();
        static void setNrOrders(long nr);
        static long getNrRows();
        static void setNrRows(long nr);
        static long getNrColumns();
        static void setNrColumns(long nr);
    private:
        std::pair<int, int> m_coordinates;
        static long m_nrDrones;
        static long m_nrWarehouses;
        static long m_nrOrders;
        static long m_nrRows;
        static long m_nrColumns;
};
