#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

void signedInts()
{
  int8_t i8;
  int16_t i16;
  int32_t i32;
  int64_t i64;

  printf("\n");
  printf("sizeof(int8_t)    =  %zd  min = %"PRId8" max = %"PRId8"\n",
          sizeof(i8), INT8_MIN, INT8_MAX);
  printf("sizeof(int16_t)   =  %zd  min = %"PRId16" max = %"PRId16"\n",
          sizeof(i16), INT16_MIN, INT16_MAX);
  printf("sizeof(int32_t)   =  %zd  min = %"PRId32" max = %"PRId32"\n",
          sizeof(i32), INT32_MIN, INT32_MAX);
  printf("sizeof(int64_t)   =  %zd  min = %"PRId64" max = %"PRId64"\n",
          sizeof(i64), INT64_MIN, INT64_MAX);

  printf("\n");
}

void unsignedInts()
{
  uint8_t ui8;
  uint16_t ui16;
  uint32_t ui32;
  uint64_t ui64;

  printf("\n");
  printf("sizeof(uint8_t)  = %zd  min = %"PRIu8" max = %"PRIu8"\n", sizeof(ui8), 0, UINT8_MAX);
  printf("sizeof(uint16_t) = %zd  min = %"PRIu16" max = %"PRIu16"\n", sizeof(ui16), 0, UINT16_MAX);
  printf("sizeof(uint32_t) = %zd  min = %"PRIu32" max = %"PRIu32"\n", sizeof(ui32), 0, UINT32_MAX);
  printf("sizeof(uint64_t) = %zd  min = %"PRIu64" max = %"PRIu64"\n", sizeof(ui64), 0, UINT64_MAX);
  printf("\n");
}

int main()
{
  signedInts();
  unsignedInts();
  return 0;
}
