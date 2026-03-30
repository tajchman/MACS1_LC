#include <stdio.h>

#define FORMAT(T)                 \
  _Generic( (T),                  \
    _Bool             : "%d\n",   \
    char              : "%c\n",   \
    signed char       : "%hhd\n", \
    unsigned char     : "%hhu\n", \
    short             : "%hd\n",  \
    int               : "%d\n",   \
    long              : "%ld\n",  \
    long long         : "%lld\n", \
    unsigned short    : "%hu\n",  \
    unsigned int      : "%u\n",   \
    unsigned long     : "%lu\n",  \
    unsigned long long: "%llu\n", \
    float             : "%f\n",   \
    double            : "%f\n",   \
    long double       : "%Lf\n",  \
    char*             : "%s\n",   \
    char const*       : "%s\n",   \
    wchar_t*          : "%ls\n",  \
    wchar_t const*    : "%ls\n",  \
    void*             : "%p\n",   \
    void const*       : "%p\n"    \
  )

#define print(X)  printf( FORMAT( (X) ), (X) )

int main()
{
    print(3);
    print(2.4);
    print("texte");
}
