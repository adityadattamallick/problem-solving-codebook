void nStarDiamond(int n) {
    // Part 1
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < ((n - i) - 1); j++) {
            std::cout << " ";
        }

        for (int j = 0; j < ((2 * i) + 1); j++) {
            std::cout << "*";
        }
        for (int j = 0; j < ((n - i) - 1); j++) {
            std::cout << " ";
        }
        std::cout << std::endl;
    }

    // Part 2
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            std::cout << " ";
        }

        for (int j = 0; j < ((2 * n) - (2 * i) - 1); j++) {
            std::cout << "*";
        }
        for (int j = 0; j < i; j++) {
            std::cout << " ";
        }
        std::cout << std::endl;
    }
}