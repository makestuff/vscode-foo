#include <iostream>
#include <foo/mul.h>

int main(int, const char*[])
{
  std::cout << "10 * 20 = " << foo::mul(10, 20) << '\n';
  return 0;
}
