//
// Created by Annie Larkins on 3/29/21.
//

#include "CustomerOrder.h"

CustomerOrder::CustomerOrder() {
    customerName = "none";
    pizzas = vector<Pizza>();
}

CustomerOrder::CustomerOrder(string inputName, vector<Pizza> inputPizzas) {
    customerName = inputName;
    pizzas = inputPizzas;
}

void CustomerOrder::AddPizza(Pizza newPizza) {
    pizzas.push_back(newPizza);
}

double CustomerOrder::CalculateOrderCost() {
    double totalCost = 0;
    for(unsigned int i = 0; i < pizzas.size(); ++i){
        totalCost += pizzas.at(i).CalculatePrice();
    }
    return totalCost;
}

const string &CustomerOrder::getCustomerName() const {
    return customerName;
}

void CustomerOrder::setCustomerName(const string &customerName) {
    CustomerOrder::customerName = customerName;
}

const vector<Pizza> &CustomerOrder::getPizzas() const {
    return pizzas;
}

void CustomerOrder::setPizzas(const vector<Pizza> &pizzas) {
    CustomerOrder::pizzas = pizzas;
}
