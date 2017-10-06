#include "MapInfo.h"

MapInfo::MapInfo(int x, int y) : m_coordinates(x, y) {};

std::pair<int, int> MapInfo::getCoordinates(){
    return m_coordinates;
}

void MapInfo::setCoordinates(int x, int y){
    m_coordinates.first = x;
    m_coordinates.second = y;
}

long MapInfo::getNrDrones(){
    return m_nrDrones;
}

long MapInfo::getNrWarehouses(){
    return m_nrWarehouses;
}

long MapInfo::getNrOrders(){
    return m_nrOrders;
}
