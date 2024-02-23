#include <iostream>
#include <vector>

void array();
int array2(int A[], int N, int T);

int main() {

    //array();

    const int N = 10; 
    int A[N] = {10, 3, 5, 7, 9, 6, 4, 2, 8, 1}; 
    int T = 6;

    int result = array2(A, N, T);

    if (result != -1) {
        std::cout << "The number of the last maximum positive element greater than " << T << ": " << result << std::endl;
    } else {
        std::cout << "There are no positive elements greater than " << T << std::endl;
    }

    system("pause");
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
}

int array2(int A[], int N, int T) {
    int lastMaxIndex = -1; 
    int maxElement = INT_MIN; 

    for (int i = 0; i < N; ++i) {
        if (A[i] > T && A[i] > maxElement) {
            maxElement = A[i];
            lastMaxIndex = i;
        }
    }

    return lastMaxIndex;
}