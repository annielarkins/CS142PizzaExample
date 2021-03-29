//
// Created by Annie Larkins on 3/29/21.
//

#ifndef PIZZA_CUSTOMERORDER_H
#define PIZZA_CUSTOMERORDER_H

using namespace std;

#include "Pizza.h"

class CustomerOrder {
private:
    string customerName;
    vector<Pizza> pizzas;
public:
    CustomerOrder();
    CustomerOrder(string inputName, vector<Pizza> inputPizzas);
    void AddPizza(Pizza newPizza);
    double CalculateOrderCost();

    const string &getCustomerName() const;

    void setCustomerName(const string &customerName);

    const vector<Pizza> &getPizzas() const;

    void setPizzas(const vector<Pizza> &pizzas);

};


#endif //PIZZA_CUSTOMERORDER_H
