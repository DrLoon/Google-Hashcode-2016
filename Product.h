#pragma once
#include <vector>

class Product{
        public:
        long getNrWeight();
        void setNrWeigth(long nr);

        private:
        std::vector<long> m_weight;
};
