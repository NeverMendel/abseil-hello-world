#include <string>

#include "absl/strings/string_view.h"
#include "absl/strings/str_cat.h"

namespace hello_world {

std::string Greet(const absl::string_view name){
  return absl::StrCat("Hello ", name, "!");
}

}
