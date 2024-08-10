// 38. Write a program to return more than one value from a function.
// there can be many ways to return more than one values from a function
// 1. using pointers (swap function)
// 2. using structures(example as follows)
// 3. using arrays
// 4. using return values and output parameters(makes code hard to read)
#include <stdio.h>
struct Point {
    int x;
    int y;
};
struct Point getPoint() {
    struct Point p;
    p.x = 10;
    p.y = 20;
    return p;
}
int main() {
    struct Point p = getPoint();
    printf("x = %d, y = %d\n", p.x, p.y);
    return 0;
}
