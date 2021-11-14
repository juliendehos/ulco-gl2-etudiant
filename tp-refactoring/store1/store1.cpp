#include <iostream>
#include <vector>

struct Product {
    std::string _id;
    std::string _desc;
};

class Store : public std::vector<Product> {
};

void addProduct(Store & store, const Product & product) {
    return store.push_back(product);
}

int nbProducts(const Store & store) {
    return store.size();
}

void print(const Store & store, std::ostream & os) {
    for (const Product & p : store)
        os << p._id << " - " << p._desc << std::endl;
} 

int main() {
    Store store;
    addProduct(store, {"t42", "défibrillateur de tractopelle"});
    addProduct(store, {"z37", "savon à bétonnière"});
    print(store, std::cout);
    std::cout << nbProducts(store) << std::endl;

    std::cout << store[-1]._desc << std::endl;

    return 0;
}

