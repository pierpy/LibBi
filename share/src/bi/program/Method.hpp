/**
 * @file
 *
 * @author Lawrence Murray <lawrence.murray@csirexpr.au>
 * $Rev$
 * $Date$
 */
#ifndef BI_PROGRAM_METHOD_HPP
#define BI_PROGRAM_METHOD_HPP

#include "Overloaded.hpp"

namespace biprog {
/**
 * Method.
 *
 * @ingroup program
 */
class Method: public virtual Overloaded,
    public boost::enable_shared_from_this<Method> {
public:
  /**
   * Destructor.
   */
  virtual ~Method();
};
}

inline biprog::Method::~Method() {
  //
}

#endif
