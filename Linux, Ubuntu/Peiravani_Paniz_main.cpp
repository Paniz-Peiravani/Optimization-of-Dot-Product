#include <iostream>
#include <vector>
#include <algorithm>
#include <time.h>

using namespace std;

const int max_arr_size = 65536; // Set the largest vector size to 2^16
vector<float> A(max_arr_size); // Vector A
vector<float> B(max_arr_size); // Vector B

// Function to calculate the dot product of two vectors
float dotProduct(float* arr_1, float* arr_2, const int size);

int main() {
    timespec start_time, end_time;
    double elapsed_time, total_time;
    int d_prod = 0;

    // Initialize the values of A and B
    for (int n = 0; n < max_arr_size; n++) {
        A[n] = n / 2.0;
        B[n] = n / 3.0;
    }

    // Define the vector of sizes as powers of 2
    vector<size_t> sizes = { 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 32768, 65536 };

    // Iterate over each vector size
    for (size_t size : sizes) {
        cout << "Vector size: " << size << endl;
        total_time = 0;

        // Run the dotProduct function 10 times for each size and calculate time
        for (int i = 0; i < 10; i++) {
            // Start timing the code
            clock_gettime(CLOCK_MONOTONIC, &start_time);

            // Call the dotProduct function
            d_prod = dotProduct(&A[0], &B[0], size);

            // Finish timing the code
            clock_gettime(CLOCK_MONOTONIC, &end_time);

            // Calculate the elapsed time in seconds
            elapsed_time = (end_time.tv_sec - start_time.tv_sec) + (end_time.tv_nsec - start_time.tv_nsec) / 1e9;
            //cout << "Run number: " << i + 1 << endl << "Running time: " << elapsed_time << " seconds" << endl;
            total_time += elapsed_time;
        }

        // Print the average time for the current size
        cout << "Average time: " << (total_time / 10) << endl;
        //cout << "TotalTime: " << total_time << endl << endl;
        cout << "---------------------------------------" << endl;
    }

    return 0;
}
