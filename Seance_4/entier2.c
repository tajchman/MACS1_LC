#include <stdio.h>
#include <stdint.h>

#define printInfo(bytes) \
  printf("sizeof(int%d_t)   =  %zd  min = %I"#bytes"d max = %I"#bytes"d\n", \
          bytes, sizeof(int##bytes##_t), INT##bytes##_MIN, INT##bytes##_MAX)
   
void signedInts()
{
  int8_t i8;
  int16_t i16;
  int32_t i32;
  int64_t i64;

  printf("\n");
  printf("sizeof(int8_t)    =  %zd  min = %lld max = %lld\n", \
          sizeof(int8_t), (long long) INT8_MIN, (long long) INT8_MAX);
  printf("sizeof(int16_t)   =  %zd  min = %lld max = %lld\n", \
          sizeof(int16_t), (long long) INT16_MIN, (long long) INT16_MAX);
  printf("sizeof(int32_t)   =  %zd  min = %lld max = %lld\n", \
          sizeof(int32_t), (long long) INT32_MIN, (long long) INT32_MAX);
  printf("sizeof(int64_t)   =  %zd  min = %lld max = %lld\n", \
          sizeof(int64_t), (long long) INT64_MIN, (long long) INT64_MAX);

  printf("\n");
}

void unsignedInts()
{
  uint8_t ui8;
  uint16_t ui16;
  uint32_t ui32;
  uint64_t ui64;

  printf("\n");
  printf("sizeof(uint8_t)  = %zd  min = %ld max = %lld\n", sizeof(ui8), 0,(long long) (long long) UINT8_MAX);
  printf("sizeof(uint16_t) = %zd  min = %lld max = %lld\n", sizeof(ui16),(long long) 0,(long long) UINT16_MAX);
  printf("sizeof(uint32_t) = %zd  min = %lld max = %lld\n", sizeof(ui32),(long long) 0,(long long) UINT32_MAX);
  printf("sizeof(uint64_t) = %zd  min = %lld max = %lld\n", sizeof(ui64),(long long) 0,(long long) UINT64_MAX);
  printf("\n");
}

int main()
{
  signedInts();
  unsignedInts();
  return 0;
}