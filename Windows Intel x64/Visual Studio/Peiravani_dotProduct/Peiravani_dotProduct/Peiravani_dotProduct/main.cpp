#include <vector>

// Definition of the dotProduct function
float dotProduct(float* arr_1, float* arr_2, const int size) {
    float result = 0;

    // Iterate through both vectors and calculate the dot product
    for (int i = 0; i < size; i++) {
        result += arr_1[i] * arr_2[i];
    }
    return result;
}
