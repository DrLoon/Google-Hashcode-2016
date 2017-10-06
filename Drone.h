#pragma once
#include <utility>
#include "MapInfo.h"


class Drone: public MapInfo {
        public:
        Drone(int x, int y, int droneId) : MapInfo(x, y) {}
        void setItemCount(long itemCount);
        long getItemCount() const;
        void setCurrentLoad(long currentLoad);
        long getCurrentLoad();
        long getDroneId() const;
        private:
        long m_droneId;
        long m_currentLoad;
        long m_itemCount; 
};
