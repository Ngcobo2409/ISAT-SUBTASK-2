// Validate binary input: returns true if string only contains '0' or '1'
bool isValidBinary(const string& binary) {
    for (char c : binary) {
        if (c != '0' && c != '1') return false;
    }
    return true;
}

// Validate hex input: returns true if string only contains hex chars
bool isValidHex(const string& hex) {
    for (char c : hex) {
        if (!isxdigit(c)) return false;
    }
    return true;
}

// Usage in main:
else if (choice == 2) {
    string binary;
    cout << "Enter binary number: ";
    cin >> binary;
    if (!isValidBinary(binary)) {
        cout << "Invalid binary input! Only 0 and 1 allowed.\n";
    } else {
        cout << "Decimal: " << binaryToDecimal(binary) << endl;
    }
}
else if (choice == 4) {
    string hex;
    cout << "Enter hexadecimal number: ";
    cin >> hex;
    if (!isValidHex(hex)) {
        cout << "Invalid hexadecimal input!\n";
    } else {
        cout << "Decimal: " << hexToDecimal(hex) << endl;
    }
}
