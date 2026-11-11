#include <iostream>
using namespace std;

// Pattern 1: square of stars
void pattern1(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

// Pattern 2: right-angled star triangle
void pattern2(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

// Pattern 3: number triangle (1, 12, 123...)
void pattern3(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << j + 1;
        }
        cout << endl;
    }
}

// Pattern 4: number triangle (1, 22, 333...)
void pattern4(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << i + 1;
        }
        cout << endl;
    }
}

// Pattern 5: inverted star triangle
void pattern5(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

// Pattern 6: inverted number triangle (12345, 1234...)
void pattern6(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            cout << j + 1;
        }
        cout << endl;
    }
}

// Pattern 7: pyramid
void pattern7(int n) {
    for (int i = 0; i < n; i++) {
        // spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        // stars
        for (int j = 0; j < 2 * i + 1; j++) {
            cout << "*";
        }
        // spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        cout << endl;
    }
}

// Pattern 8: inverted pyramid
void pattern8(int n) {
    for (int i = 0; i < n; i++) {
        // spaces
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        // stars
        for (int j = 0; j < 2 * (n - i) - 1; j++) {
            cout << "*";
        }
        // spaces
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        cout << endl;
    }
}

// Pattern 9: diamond (pyramid + inverted pyramid)
void pattern9(int n) {
    for (int i = 0; i < n; i++) {
        // space
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        // stars
        for (int j = 0; j < 2 * i + 1; j++) {
            cout << "*";
        }
        // space
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++) {
        // spaces
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        // stars
        for (int j = 0; j < 2 * (n - i) - 1; j++) {
            cout << "*";
        }
        // spaces
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        cout << endl;
    }
}

// Pattern 10: half diamond (right-pointing arrow)
void pattern10(int n) {
    for (int i = 0; i < n; i++) {
        // stars
        for (int j = 0; j < i + 1; j++) {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = 0; i < n - 1; i++) {
        // stars
        for (int j = 0; j < n - i - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

// Pattern 11: binary number triangle (1, 01, 101...)
void pattern11(int n) {
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j <= i; j++) {
                if (j % 2 == 0) {
                    cout << "1 ";
                } else {
                    cout << "0 ";
                }
            }
        } else {
            for (int j = 0; j <= i; j++) {
                if (j % 2 == 0) {
                    cout << "0 ";
                } else {
                    cout << "1 ";
                }
            }
        }
        cout << endl;
    }
}

// Pattern 12: number crown
void pattern12(int n) {
    for (int i = 0; i < n; i++) {
        // numbers
        for (int j = 0; j < i + 1; j++) {
            cout << j + 1;
        }
        // spaces
        for (int j = 0; j < 2 * (n - i - 1); j++) {
            cout << " ";
        }
        // numbers
        for (int j = 0; j < i + 1; j++) {
            cout << i - j + 1;
        }
        cout << endl;
    }
}

// Pattern 13: Floyd's triangle (1, 2 3, 4 5 6...)
void pattern13(int n) {
    int count = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
}

// Pattern 14: alphabet triangle (A, AB, ABC...)
void pattern14(int n) {
    for (int i = 0; i < n; i++) {
        char ch = 'A';
        for (int j = 0; j <= i; j++) {
            cout << ch;
            ch++;
        }
        cout << endl;
    }
}

// Pattern 15: inverted alphabet triangle (ABCDE, ABCD...)
void pattern15(int n) {
    for (int i = 0; i < n; i++) {
        char ch = 'A';
        for (int j = 0; j < n - i; j++) {
            cout << ch;
            ch++;
        }
        cout << endl;
    }
}

// Pattern 16: alphabet triangle (A, BB, CCC...)
void pattern16(int n) {
    char ch = 'A';
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << ch;
        }
        ch++;
        cout << endl;
    }
}

// Pattern 17: alphabet pyramid (A, ABA, ABCBA...)
void pattern17(int n) {
    for (int i = 0; i < n; i++) {
        char ch = 'A';
        // space
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        // letters
        for (int j = 0; j <= i; j++) {
            cout << ch;
            ch++;
        }
        ch--;
        ch--;
        // letters reverse
        for (int j = 0; j < i; j++) {
            cout << ch;
            ch--;
        }
        // space
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        cout << endl;
    }
}

// Pattern 18: alphabet triangle (E, DE, CDE...)
void pattern18(int n) {
    for (int i = 0; i < n; i++) {
        char ch = 'A' + n - 1 - i;
        for (int j = 0; j <= i; j++) {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
}

// Pattern 19: symmetric void (stars shrink, then grow)
void pattern19(int n) {
    for (int i = 0; i < n; i++) {
        // stars
        for (int j = 0; j < n - i; j++) {
            cout << "*";
        }
        // spaces
        for (int j = 0; j < 2 * i; j++) {
            cout << " ";
        }
        // stars
        for (int j = 0; j < n - i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++) {
        // stars
        for (int j = 0; j <= i; j++) {
            cout << "*";
        }
        // spaces
        for (int j = 0; j < 2 * (n - 1 - i); j++) {
            cout << " ";
        }
        // stars
        for (int j = 0; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

// Pattern 20: symmetric butterfly
void pattern20(int n) {
    for (int i = 0; i < n; i++) {
        // stars
        for (int j = 0; j <= i; j++) {
            cout << "*";
        }
        // spaces
        for (int j = 0; j < 2 * (n - i - 1); j++) {
            cout << " ";
        }
        // stars
        for (int j = 0; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = 0; i < n - 1; i++) {
        // stars
        for (int j = 0; j < n - i - 1; j++) {
            cout << "*";
        }
        // spaces
        for (int j = 0; j < 2 * (i + 1); j++) {
            cout << " ";
        }
        // stars
        for (int j = 0; j < n - i - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

// Pattern 21: hollow square
void pattern21(int n) {
    for (int i = 0; i < n; i++) {
        if (i == 0 || i == (n - 1)) {
            for (int j = 0; j < n; j++) {
                cout << "*";
            }
        } else {
            for (int j = 0; j < n; j++) {
                if (j == 0 || j == (n - 1)) {
                    cout << "*";
                } else {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }
}

int main() {
    int n = 5;

    cout << "Pattern 1" << endl;  pattern1(n);
    cout << "Pattern 2" << endl;  pattern2(n);
    cout << "Pattern 3" << endl;  pattern3(n);
    cout << "Pattern 4" << endl;  pattern4(n);
    cout << "Pattern 5" << endl;  pattern5(n);
    cout << "Pattern 6" << endl;  pattern6(n);
    cout << "Pattern 7" << endl;  pattern7(n);
    cout << "Pattern 8" << endl;  pattern8(n);
    cout << "Pattern 9" << endl;  pattern9(n);
    cout << "Pattern 10" << endl; pattern10(n);
    cout << "Pattern 11" << endl; pattern11(n);
    cout << "Pattern 12" << endl; pattern12(n);
    cout << "Pattern 13" << endl; pattern13(n);
    cout << "Pattern 14" << endl; pattern14(n);
    cout << "Pattern 15" << endl; pattern15(n);
    cout << "Pattern 16" << endl; pattern16(n);
    cout << "Pattern 17" << endl; pattern17(n);
    cout << "Pattern 18" << endl; pattern18(n);
    cout << "Pattern 19" << endl; pattern19(n);
    cout << "Pattern 20" << endl; pattern20(n);
    cout << "Pattern 21" << endl; pattern21(n);

    return 0;
}