
//Bài này hoàn toàn được làm bởi Bing chat do nhóm em không đủ khả nang làm
#include <iostream>
#include <cmath>

struct Point {
    int x, y;
};

double area(Point A, Point B, Point C) {
    return abs(A.x*(B.y - C.y) + B.x*(C.y - A.y) + C.x*(A.y - B.y)) / 2.0;
}

Point findPoint(Point A, Point B, double x) {
    Point C;
    for (C.x = A.x; ; ++C.x) {
        for (C.y = A.y; ; ++C.y) {
            if (area(A, B, C) > x) {
                return C;
            }
        }
    }
}

int main() {
    Point A, B;
    double x;

    std::cout << "Nhap toa do A: ";
    std::cin >> A.x >> A.y;

    std::cout << "Nhap toa do B: ";
    std::cin >> B.x >> B.y;

    std::cout << "Nhap x: ";
    std::cin >> x;

    Point C = findPoint(A, B, x);

    std::cout << "Toa do cua C lala: " << C.x << ", " << C.y << std::endl;

    return 0;
}