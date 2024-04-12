template<typename T> auto offset(T& x, T const& delta) -> void
{
  x += delta;
}

template<typename T> auto offset2(T& x, T const& delta) -> void
{
  offset(x, delta);
  offset(x, delta);
}

auto foo(int i) -> void
{
  i += 5;
}

#define ZERO 0
#define NOTZERO_PROMISE 0

auto bar(int i) -> void
{
  auto ii = i/0;
  auto xx = i/ZERO;
  auto yy = i/NOTZERO_PROMISE;
  auto b = 4;
  auto c = 1/(b - 4);
}

auto main() -> int
{
  int x {3};
  int *p = new int(99);
  int **pp = &p;
  delete *pp;
  if (&x == *pp)
    offset2(x, x);
  for (auto i = 0; i < 10; ++i) {  }
  for (auto i = 10; i > 0; --i) {  }

  double *xx = new double [10];
  xx[0] = 03.34;
  xx[9] = 3.4;
  delete [] xx;
  return 0;
}
