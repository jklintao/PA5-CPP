#include <iostream>
#include "import.h"

using namespace std;

void shippingInfo();
void custInfo();

int main() {
    shippingInfo();
    custInfo();
}

void shippingInfo(){
    shippingAddress n;
    n.Constructor();
    n.getinfo();
    n.formattedPrint();
};

void custInfo(){
    customerInfo u;
    u.Constructor();
    u.getInfo();
    u.printInfo();
};

