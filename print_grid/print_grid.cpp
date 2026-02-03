
int main() {
    const int cols = 11;       
    const char startRow = 'A'; 

    // Your
    std::println("Your Fleet");
    std::cout << ' ';
    for (int i = 0; i < cols; ++i) {
        std::cout << i;
        if (i < cols - 1) std::cout << ' ';
    }
    std::cout << '\n';
    for (int r = 0; r < 10; ++r) {
        std::cout << static_cast<char>(startRow + r) << '\n';
    }

    std::println();

    // Enemy 
    std::println("Enemy Waters");
    std::cout << ' ';
    for (int i = 0; i < cols; ++i) {
        std::cout << i;
        if (i < cols - 1) std::cout << ' ';
    }
    std::cout << '\n';
    for (int r = 0; r < 10; ++r) {
        std::cout << static_cast<char>(startRow + r) << '\n';
    }

    return 0;

}
