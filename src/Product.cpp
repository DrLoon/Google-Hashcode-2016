#include "Product.h"
#include <vector>

std::vector<long> m_weight;
long getWeight(int nr)
{
        return m_weight[nr];
}
void setNrWeight(long nr)
{
        m_weight.push_back(nr);
}
