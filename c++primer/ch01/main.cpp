#include <iostream>
#include "Sales_item.h"

// chapter 01
int main() {
    std::clog << "Hello, World!" << std::endl;
//    int i = 0, j = 0;
//    int i, j;
//    std::cout << "input 2 number:" << std::endl;
//    std::cin >> i >> j;
//    std::cout << "i: " << i << " j: " << j << std::endl;

// 1.3 for while
//    std::cout << "input some numbers:";
//    int sum = 0, val = 0;
//    while (std::cin >> val) {
//        std::cout << "do while.." << std::endl;
//        sum += val;
//    }
//    std::cout << "sum " << sum << std::endl;

// 1.4.4 if
//    int currentVal, val;
//    if (std::cin >> currentVal) {
//        int count = 1;
//        while (std::cin >> val) {
//            if (val == currentVal) {
//                count++;
//            } else {
//                std::cout << currentVal << " occurs " << count << " times." << std::endl;
//                currentVal = val;
//                count = 1;
//            }
//        }
//        std::cout << currentVal << " occurs " << count << " times." << std::endl;
//
//    }

// 1.5 class
//    Sales_item book;
//    std::cin >> book;
//    std::cout << book << std::endl;
//    Sales_item item1, item2;
//    std::cin >> item1 >> item2;
//    if (item1.isbn() == item2.isbn()) {
//        std::cout << item1 + item2 << std::endl;
//        return 0;
//    } else {
//        std::cerr << "isbn not same" << std::endl;
//    }

// 1.6 exercise
    Sales_item total;
    if (std::cin >> total) {
        Sales_item trans;
        while (std::cin >> trans) {
            if (trans.isbn() == total.isbn()) {
                total += trans;
            } else {
                std::cout << total << std::endl;
                total = trans;
            }
        }
        std::cout << total << std::endl;
        std::cout << "end..";
    }
//    return 0;
//    return 1;
}
