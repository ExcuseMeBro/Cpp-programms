//1.Ikkita ro‟yhat birlashtirilsin
#include <list>
#include <iterator>
#include <algorithm>
#include <iostream>

int main() {
  std::list<char> A = {'1','2','3','4'};
  std::list<char> B = {'a','d','e'};

  copy(A.rbegin(), A.rend(), front_inserter(B));

  for(auto c : B)
    std::cout << c;
  std::cout << "\n";
  return 0;
}