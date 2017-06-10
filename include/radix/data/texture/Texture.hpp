#ifndef RADIX_TEXTURE_HPP
#define RADIX_TEXTURE_HPP

namespace radix {

struct Texture {
  Texture() = default;
  Texture(unsigned int handle, int width, int height)
      : handle(handle), width(width), height(height) {}

  unsigned int handle = 0;
  int width;
  int height;
};

} /* namespace radix */

#endif /* RADIX_TEXTURE_HPP */
