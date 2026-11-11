#include<iostream>
#include<vector>
#include<deque>
#include<list>
#include<set>
#include<map>
#include<string>
#include<ctime>
#include<unordered_set>
#include<unordered_map>

using namespace std;

struct Product {
    int productId;
    string name;
    string category;
};

struct Order {
    int orderId;
    int productId;
    int quantity;
    string customerId;
    time_t orderDate;
};


int main() {
    vector<Product> products = {
        { 101,"Laptop","Electronics" },
        { 102,"Smart phone","Electronics" },
        { 103,"Coffee maker","Kitchen" },
        { 104,"Desk lamp","Home" },
        { 105,"Blender","Kitchen" },
    };


    deque<string> recentCustomer = { "C001","C002","C003" };

    recentCustomer.push_back("C004");
    recentCustomer.push_front("C005");

    list<Order> orderHistory;
    orderHistory.push_back({ 1,101,1,"C001" ,time(0) });
    orderHistory.push_back({ 2,101,2,"C002" ,time(0) });
    orderHistory.push_back({ 3,103,3,"C003" ,time(0) });

    set<string> categories;
    for (const auto& product : products) {
        categories.insert(product.category);
    }

    map<int, int> productStock = {
        { 101,10 },
        { 102,15 },
        { 103,19 },
        { 104,12 },
        { 105,17 }
    };

    multimap<string, Order> customerOrders;
    for (const auto& order : orderHistory) {
        customerOrders.insert({ order.customerId,order });
    }

    unordered_map<string, string>customerData = {
        { "C001","Alice" },
        { "C002","Max" },
        { "C003","Peter" },
        { "C004","osagi" },
        { "C005","chyscia" }
    };

    unordered_set<int>uniqueProductIds;
    for (const auto& product : products) {
        uniqueProductIds.insert(product.productId);
    }


    return 0;


}


