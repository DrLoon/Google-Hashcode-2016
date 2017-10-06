#pragma once
#include "MapInfo.h"
#include "Drone.h"
#include "Order.h"
#include "Warehouse.h"
#include "FileParser.h"

class Functions {
        public: 

        static int theOne(const Drone &d, const Warehouse &w, long productWight);
        static int deliverTruns(const Drone &d, int row, int column);
        static long findWarehouse(long productType, const Warehouse &w);
        static int load(const Drone &d, const Warehouse &w, Order &oi);

};
