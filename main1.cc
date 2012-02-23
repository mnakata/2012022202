#include <iostream>
#include <string>

#include <cstring>

using namespace std;


class PikachuEasy {
public:
  string check(string word);
};

std::string PikachuEasy::check(string word)
{
  char* p = (char*)(word.c_str());

  while (*p != '\0')
    if (strncmp(p, "pi", 2) == 0) {
      p += 2;
    }
    else if (strncmp(p, "ka", 2) == 0) {
      p += 2;
    }
    else if (strncmp(p, "chu", 3) == 0) {
      p += 3;
    }
    else {
      return "NO";
    }

  return "YES";
}


int main(int argc, char** argv)
{
  std::string word;

  std::cin >> word;

  std::cout << PikachuEasy().check(word) << std::endl;
}
