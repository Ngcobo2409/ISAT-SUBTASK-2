string decimalToHex(int decimal) {
    stringstream ss;
    ss << hex << decimal;
    string hexStr = ss.str();
    // Convert to uppercase
    transform(hexStr.begin(), hexStr.end(), hexStr.begin(), ::toupper);
    return hexStr;
}

// Add comments
// Converts decimal integer to binary string representation
string decimalToBinary(int decimal) {
    // ... function body ...
}
