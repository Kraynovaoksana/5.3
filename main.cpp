#include <iostream>
#include <cmath>
void f(float n) {
    int a = n;
    std::cout << (a > 0) << '\n';
}
int main () {
    f(12.0034);
    f(0.12003);
    return 0;
}