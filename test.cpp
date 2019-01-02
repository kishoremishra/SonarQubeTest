#include "iostream"
using namespace std;
int main()
{
  char a[10] = "hello";
  char *ptr = a;
  uintptr_t number = (uintptr_t)ptr;
  return 0;
}
