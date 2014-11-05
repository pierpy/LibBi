/**
 * @file
 *
 * @author Lawrence Murray <lawrence.murray@csirexpr.au>
 * $Rev$
 * $Date$
 */
#include "MethodOverload.hpp"

bool biprog::MethodOverload::operator<(const Expression& o) const {
  try {
    const MethodOverload& expr = dynamic_cast<const MethodOverload&>(o);
    return *parens < *expr.parens && *braces < *expr.braces;
  } catch (std::bad_cast e) {
    return false;
  }
}

bool biprog::MethodOverload::operator<=(const Expression& o) const {
  try {
    const MethodOverload& expr = dynamic_cast<const MethodOverload&>(o);
    return *parens <= *expr.parens && *braces <= *expr.braces;
  } catch (std::bad_cast e) {
    return false;
  }
}

bool biprog::MethodOverload::operator>(const Expression& o) const {
  try {
    const MethodOverload& expr = dynamic_cast<const MethodOverload&>(o);
    return *parens > *expr.parens && *braces > *expr.braces;
  } catch (std::bad_cast e) {
    return false;
  }
}

bool biprog::MethodOverload::operator>=(const Expression& o) const {
  try {
    const MethodOverload& expr = dynamic_cast<const MethodOverload&>(o);
    return *parens >= *expr.parens && *braces >= *expr.braces;
  } catch (std::bad_cast e) {
    return false;
  }
}

bool biprog::MethodOverload::operator==(const Expression& o) const {
  try {
    const MethodOverload& expr = dynamic_cast<const MethodOverload&>(o);
    return *parens == *expr.parens && *braces == *expr.braces;
  } catch (std::bad_cast e) {
    return false;
  }
}

bool biprog::MethodOverload::operator!=(const Expression& o) const {
  try {
    const MethodOverload& expr = dynamic_cast<const MethodOverload&>(o);
    return *parens != *expr.parens || *braces != *expr.braces;
  } catch (std::bad_cast e) {
    return true;
  }
}

void biprog::MethodOverload::output(std::ostream& out) const {
  out << "method " << name << *parens << ' ' << *braces;
}
