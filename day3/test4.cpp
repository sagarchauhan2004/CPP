#include <iostream>

int reverseNumber(int num) {
    int reversedNum = 0;
    while (num != 0) {
        reversedNum = reversedNum * 10 + num % 10;
        num /= 10;
    }
    return reversedNum;
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    std::cout << "Reversed number: " << reverseNumber(num) << std::endl;
    return 0;
}
