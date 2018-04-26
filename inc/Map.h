#pragma once

class Map {
    public:
        Map(int nrows, int nrCols);
        Map(const Map &map);
        virtual ~Map();
        int getRows();
        int getCols();
        void setRows(int nrRows);
        void setCols(int nrCols);
    private:
        int rows;
        int cols;
};