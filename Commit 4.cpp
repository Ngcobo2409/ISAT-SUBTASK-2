string decimalToBinary(int decimal) {
    if (decimal == 0) return "0";
    bool isNegative = false;
    if (decimal < 0) {
        isNegative = true;
        decimal = -decimal;  // work with absolute value for conversion
    }
    string binary;
    while (decimal > 0) {
        binary += (decimal % 2) ? '1' : '0';
        decimal /= 2;
    }
    reverse(binary.begin(), binary.end());
    if (isNegative) binary = "-" + binary;
    return binary;
}
