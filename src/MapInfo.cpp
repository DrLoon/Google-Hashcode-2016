#include "MapInfo.h"

MapInfo::MapInfo(int x, int y) : m_coordinates(x, y) {};

std::pair<int, int> MapInfo::getCoordinates(){
    return m_coordinates;
}

void MapInfo::setCoordinates(int x, int y){
    m_coordinates.first = x;
    m_coordinates.second = y;
}

void MapInfo::setNrOrders(long nr)
{
        m_nrOrders =nr;
}

void MapInfo::setNrWarehouses(long nr)
{
        m_nrWarehouses =nr;
}

void MapInfo::setNrDrones(long nr)
{
        m_nrDrones =nr;
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

void MapInfo::setNrRows(long nr)
{
        m_nrRows =nr;
}

long MapInfo::getNrRows(){
    return m_nrRows;
}

void MapInfo::setNrColumns(long nr)
{
        m_nrColumns =nr;
}

long MapInfo::getNrColumns(){
    return m_nrColumns;
}

long MapInfo::m_nrOrders=0;
long MapInfo::m_nrWarehouses=0;
long MapInfo::m_nrDrones=0;
long MapInfo::m_nrRows=0;
long MapInfo::m_nrColumns=0;
