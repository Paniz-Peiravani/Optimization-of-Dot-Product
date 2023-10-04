#include <iostream>
#include <vector>       // Library for Vector
#include <windows.h>    // Library for QueryPerformanceCounter
#include <algorithm>    // std::vector

using namespace std;

const int max_arr_size = 65536; // Set the largest vector size to 2^16
vector<float> A(max_arr_size); // Vector A
vector<float> B(max_arr_size); // Vector B

float dotProduct(float* arr_1, float* arr_2, const int size);

int main() {
    _int64 ctr_1 = 0, ctr_2 = 0, freq = 0;
    int acc = 0, n = 0, d_prod = 0;
    double total_time = 0;

    // Initialize the values of A and B
    for (int n = 0; n < max_arr_size; n++) {
        A[n] = n / 2.0;
        B[n] = n / 3.0;
    }

    // Define the vector of sizes as powers of 2
    //                      2^4                                                               2^16
    vector<size_t> sizes = { 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 32768, 65536 };

    // print array size
    for (size_t size : sizes) {
        cout << "Vector size: " << size << endl;

        // Run the dotProduct function 10 times for each size and calculate time
        for (int i = 0; i < 10; i++) {
            // Start timing the code
            if (QueryPerformanceCounter((LARGE_INTEGER*)&ctr_1) != 0) {
                // Call the dotProduct function
                d_prod = dotProduct(&A[0], &B[0], size);

                // Finish timing the code.
                QueryPerformanceCounter((LARGE_INTEGER*)&ctr_2);

                // Get the performance counter frequency
                QueryPerformanceFrequency((LARGE_INTEGER*)&freq);

                // min resolution
                cout << "QueryPerformance min resolution: 1/" << freq << " seconds" << endl; 

                // Calculate the exectution time in seconds
                cout << "Run number: " << i + 1 << endl << "Running time: " << (ctr_2 - ctr_1) * 1.0 / freq << " seconds" << endl;
                total_time += (ctr_2 - ctr_1) * 1.0 / freq;

            }
            else {
                DWORD dwError = GetLastError();
                cout << "Error value: " << dwError << endl;
            }
        }

        // Print the average time for the current size
        cout << "Average time: " << (total_time / 10) << endl;
        cout << "TotalTime: " << total_time << endl << endl;
        cout << "---------------------------------------" << endl;
    }

    system("pause");
    return 0;
}
