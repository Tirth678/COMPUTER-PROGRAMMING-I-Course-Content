int factorial(int n) {
    int i, fact = 1;
    while(i <= n) {
        fact *= i;
        i++;
    }
    return fact;
}
