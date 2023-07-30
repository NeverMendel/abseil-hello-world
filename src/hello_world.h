#ifndef SRC_HELLO_WORLD_H
#define SRC_HELLO_WORLD_H

#include <string>

#include "absl/strings/string_view.h"

namespace hello_world {

std::string Greet(const absl::string_view name = "World");

}

#endif // SRC_HELLO_WORLD_H
