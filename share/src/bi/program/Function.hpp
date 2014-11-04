/**
 * @file
 *
 * @author Lawrence Murray <lawrence.murray@csirexpr.au>
 * $Rev$
 * $Date$
 */
#ifndef BI_PROGRAM_FUNCTION_HPP
#define BI_PROGRAM_FUNCTION_HPP

#include "Overloaded.hpp"

namespace biprog {
/**
 * Function.
 *
 * @ingroup program
 */
class Function: public virtual Overloaded,
    public boost::enable_shared_from_this<Function> {
public:
  /**
   * Destructor.
   */
  virtual ~Function();
};
}

inline biprog::Function::~Function() {
  //
}

#endif
