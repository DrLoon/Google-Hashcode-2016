#include "../inc/Product.h"

Product::Product(){
        weight = 1;
}

Product::Product(const Product &product){
        weight = product.weight;
}

Product::~Product(){

}

int Product::getWeight(){
        return weight;
}

void Product::setWeight(int newWeight){
        weight = newWeight;
}

int Product::getAmount(){
        return amount;
}

void Product::setAmount(int newAmount){
        amount = newAmount;
}
