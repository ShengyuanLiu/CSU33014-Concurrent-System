#include <xmmintrin.h>
#include <stdio.h>

int main(){
   __m128 value_v = _mm_set1_ps(3);
   float array[4] ={1,2,3,4};
   __m128 vector = _mm_load_ps(&array[0]);
   _mm_store_ps(&(array[0]),_mm_mul_ps(value_v,vector));
   printf("%f",array[0]);
    printf("%f",array[1]);
    printf("%f",array[2]);
    printf("%f",array[3]);
}

