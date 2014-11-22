/**
 * @file
 *
 * @author Lawrence Murray <lawrence.murray@csiro.au>
 * $Rev$
 * $Date$
 */
#ifndef BI_PROGRAM_BRACED_HPP
#define BI_PROGRAM_BRACED_HPP

#include "Expression.hpp"
#include "Typed.hpp"

namespace biprog {
/**
 * Braced expression.
 *
 * @ingroup program
 */
class Braced: public virtual Expression {
public:
  /**
   * Constructor.
   *
   * @param in Expression in curly brackets.
   */
  Braced(boost::shared_ptr<Typed> braces);

  /**
   * Destructor.
   */
  virtual ~Braced() = 0;

protected:
  /**
   * First statement in in brackets.
   */
  boost::shared_ptr<Typed> braces;
};
}

inline biprog::Braced::Braced(boost::shared_ptr<Typed> braces) :
    braces(braces) {
  //
}

inline biprog::Braced::~Braced() {
  //
}

#endif

