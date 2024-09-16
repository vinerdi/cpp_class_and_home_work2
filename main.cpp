#include <iostream>
#include <vector>
#include <set>


int main()
{
	/*int M, N;

    std::cout << "size A: ";
    std::cin >> M;
    std::cout << "size B: ";
    std::cin >> N;

    std::vector<int> A(M), B(N);

    std::cout << "enter elements A: ";
    for (int i = 0; i < M; ++i) {
        std::cin >> A[i];
    }


    std::cout << "enter elements B: ";
    for (int i = 0; i < N; ++i) {
        std::cin >> B[i];
    }

    std::set<int> result;
    bool found;

    for (int i = 0; i < M; ++i) {
        found = false;
        
        for (int j = 0; j < N; ++j) {
            if (A[i] == B[j]) {
                found = true;
                break;
            }
        }
        if (!found) {
            result.insert(A[i]);
        }
    }

    std::cout << "result: ";
    for (int elem : result) {
        std::cout << elem << " ";
    }
    system("pause");*/

    int M, N;

    std::cout << "size A: ";
    std::cin >> M;
    std::cout << "size B: ";
    std::cin >> N;

    std::vector<int> A(M), B(N);

    std::cout << "enter elements A: ";
    for (int i = 0; i < M; ++i) {
        std::cin >> A[i];
    }

    std::cout << "enter elements B: ";
    for (int i = 0; i < N; ++i) {
        std::cin >> B[i];
    }

    std::set<int> result;  


    for (int i = 0; i < M; ++i) {
        bool found_in_B = false;

        for (int j = 0; j < N; ++j) {
            if (A[i] == B[j]) {
                found_in_B = true;
                break;
            }
        }

        if (!found_in_B) {
            result.insert(A[i]);
        }
    }


    for (int i = 0; i < N; ++i) {
        bool found_in_A = false;
        
        for (int j = 0; j < M; ++j) {
            if (B[i] == A[j]) {
                found_in_A = true;
                break;
            }
        }
        
        if (!found_in_A) {
            result.insert(B[i]);
        }
    }

    std::cout << "element masivy A i B, yaki ne e zagalnimi: ";
    for (int elem : result) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    return 0;
}


