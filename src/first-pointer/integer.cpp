#include "integer.h"

Integer::Integer() {
  integer = 0;
}

int Integer::getInteger() const {
  return integer;
}

void Integer::setInteger(int integer) {
  this->integer = integer;
}