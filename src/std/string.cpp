#include "std/string.hpp"

namespace std {

u32 String::length(string content) {
  u32 length = 0;
  while (content[length]) {
    length++;
  }

  return length;
}

} // namespace Std
