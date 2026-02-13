#include <stdio.h>
#include <limits.h>

void signedInts()
{
  printf("\n");
  printf("sizeof(short) =     %zd min %lld max %lld\n",
       sizeof(short), (long long) SHRT_MIN, (long long) SHRT_MAX);
  printf("sizeof(int) =       %zd min %lld max %lld\n",
       sizeof(int),   (long long) INT_MIN,  (long long) INT_MAX);
  printf("sizeof(long) =      %zd min %lld max %lld\n",
       sizeof(long),  (long long) LONG_MIN,  (long long) LONG_MAX);
  printf("sizeof(long long) = %zd min %lld max %lld\n",
       sizeof(long long),  (long long) LLONG_MIN,  (long long) LLONG_MAX);
  printf("\n");
}

void unsignedInts()
{
  printf("\n");
  printf("sizeof(unsigned short) =     %zd min 0 max %u\n",
       sizeof(unsigned short),     USHRT_MAX);
  printf("sizeof(unsigned int) =       %zd min 0 max %u\n",
       sizeof(unsigned int),       UINT_MAX);
  printf("sizeof(unsigned long) =      %zd min 0 max %lu\n",
       sizeof(unsigned long),      ULONG_MAX);
  printf("sizeof(unsigned long long) = %zd min 0 max %llu\n",
       sizeof(unsigned long long), ULLONG_MAX);
  printf("\n");
}

int main()
{
  signedInts();
  unsignedInts();
  return 0;
}
