#include <iostream>
#include <vector>

void array();

int main() {
    array();
    return 0;
}

void array() {
    int N;
    std::cout << "Enter size of A: ";
    std::cin >> N;

    std::vector<int> A(N);
    std::cout << "Enter elements A:\n";
    for (int i = 0; i < N; ++i) {
        std::cin >> A[i];
    }

    std::vector<int> B;
    for (int i = 0; i < N; ++i) {
        if (A[i] > 0) {
            B.push_back(A[i]);
        }
    }

    std::cout << "Array B(+):\n";
    for (int i = 0; i < B.size(); ++i) {
        std::cout << B[i] << " ";
    }
    std::cout << "\n";

    system("pause");
}