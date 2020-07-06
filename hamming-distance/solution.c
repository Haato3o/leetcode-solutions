int hammingDistance(int x, int y){
    int i = 0;
    x ^= y;
    while (x > 0) {
        i += x % 2;
        x = x >> 1;
    }
    return i;
}