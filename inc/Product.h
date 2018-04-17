#pragma once

class Product
{
        public:
                Product();
                Product(const Product&);
                ~Product();
                int getWeight();
                void setWeight(int newWeight);
                int getAmount();
                void setAmount(int newAmount);

        private:
                int weight;
                int amount;
};
