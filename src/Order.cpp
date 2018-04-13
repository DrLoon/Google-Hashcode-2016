#include "../inc/Order.h"


void Order::addProduct(long nr)
{
    m_numberOfItems[nr] += 1;
}
