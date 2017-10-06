#pragma once
#include <vector>

class Product{
        public:
        static long getNrWight();
        static void setNrWeigth(long nr);
        private:
        std::vector<long> m_weight;
};
