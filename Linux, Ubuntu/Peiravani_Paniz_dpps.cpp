#include <immintrin.h>
#include <stdio.h>

// Calculate the dot product of two float arrays using the DPPS instruction
float dotProduct_DPPS(float* a, float* b, int size)
{
// Declare 256-bit wide vector registers and initialize ymm2 to zero
    __m256 ymm0, ymm1, ymm2 = _mm256_setzero_ps();
    const int resultV = 0xF1;	// resultV for DPPS instruction
    float product = 0.0;

// Loop through the arrays in parallel, processing 8 elements at a time
#pragma loop(hint_parallel(8))
    for (int i = 0; i < size / 8; i++) {
    	// Load 8 float values from array 'a' into ymm0
        ymm0 = _mm256_loadu_ps(a + i * 8); 
        // Load 8 float values from array 'b' into ymm1
        ymm1 = _mm256_loadu_ps(b + i * 8); 
        // Perform dot product using DPPS instruction and store the result in ymm2
        ymm2 = _mm256_dp_ps(ymm0, ymm1, resultV);
	
	// Convert the address of the ymm2 vector register to a float pointer
        float* temp = (float*)&ymm2;
        // Add the first and fifth elements in ymm2 to the product
        product += (temp[0] + temp[4]);
    }

    return product;
}
