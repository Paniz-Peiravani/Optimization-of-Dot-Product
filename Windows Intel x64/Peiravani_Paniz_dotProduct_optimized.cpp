// Definition of the dotProduct function
float dotProduct_optimized(float* arr_1, float* arr_2, const int N) {
    float result = 0.0;

    // Iterate through both vectors and calculate the dot product
    /*for (int i = 0; i < size; i++) {
        result += arr_1[i] * arr_2[i];
    }
    */
    _asm {
        pxor xmm0, xmm0;

        mov eax, dword ptr[arr_1];
        mov ebx, dword ptr[arr_2];
        mov ecx, dword ptr[N];

    $MyLoop:
        movups xmm0, [eax];
        movups xmm1, [ebx];
        mulps xmm1, xmm2;
        addps xmm0, xmm1;

        add eax, 16;
        add ebx, 16;
        sub ecx, 4;
        jnz $MyLoop;

        haddps xmm0, xmm0;
        haddps xmm0, xmm0;
        movss dword ptr[result], xmm0;
    }

    return result;
}
