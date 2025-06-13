void seeding(int n) {

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < n - i + 1; j++) {
            std::cout << "* ";
        }
        std::cout << "\n";
    }

}
