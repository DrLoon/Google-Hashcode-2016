#include "../inc/Map.h"

Map::Map(int nrRows, int nrCols)
{
    rows = nrRows;
    cols = nrCols;
}

Map::Map(const Map &map)
{
    rows = map.rows;
    cols = map.cols;
}

int Map::getRows()
{
    return rows;
}

int Map::getCols()
{
    return cols;
}

void Map::setRows(int nrRows)
{
    rows = nrRows;
}

void Map::setCols(int nrCols)
{
    cols = nrCols;
}