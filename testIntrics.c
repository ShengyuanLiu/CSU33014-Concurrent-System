#include<x86intrin.h>
#include<stdio.h>
int main(){
    int mask;
    float array[4];
    array[0] =0.0f;
    array[1] =0.0f;
    array[2] =0.0f;
    array[3] =4.0f;
    __m128 zero = _mm_setr_ps(0.0f, 0.0f, 0.0f, 0.0f);
    __m128 value = _mm_load_ps(&array[0]);
    __m128 result = _mm_cmpneq_ps (value, zero);
    mask = _mm_movemask_ps(result);
    /*
    int tmpv;
    __m128 tmp = _mm_setzero_ps();
    __m128 fn =  _mm_setr_ps(1.0f,2.0f,3.0f,4.0f);
    
    tmp = _mm_hadd_ps(result,result);
    tmp = _mm_hadd_ps(tmp,tmp);
    tmpv =_mm_cvt_ss2si(tmp);
    */
    printf("%d\n", mask);
    return 0;
}