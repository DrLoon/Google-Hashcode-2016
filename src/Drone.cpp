#include "../inc/Drone.h"


void Drone::setItemCount(long itemCount)
{
        m_itemCount = itemCount;
}
long Drone::getItemCount() const
{
        return m_itemCount;
}
void Drone::setCurrentLoad(long currentLoad)
{
        m_currentLoad = currentLoad;
}
long Drone::getCurrentLoad()
{
        return m_currentLoad;
}
long Drone::getDroneId() const
{
        return m_droneId;
}
long Drone::m_maxLoad = 0;
void setMaxLoad(long load)
{
        //m_maxLoad = load;
        return;
}
