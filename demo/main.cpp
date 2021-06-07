#include <header.hpp>
Log* Log::singleton_ = nullptr;

int main(int argc, char* argv[]) {
  std::vector<int> i;
  i.push_back(1);
  i.push_back(2);
  std::cout << i.capacity() << std::endl;
  std::cout << i.size() << std::endl;
}