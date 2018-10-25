// start Utilities.cpp
int clamp(int x, int lower, int upper) {
    return std::min(upper, std::max(x, lower));
}

float clamp(float x, float lower, float upper) {
    return std::min(upper, std::max(x, lower));
}

int Ease(int value1, int value2, float amount) {
    amount = clamp(amount,0.,1.);
    //  Linear Interpolation
    return (int)(value1 + (value2 - value1) * amount);
}
// end Utilities.cpp
