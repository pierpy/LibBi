/**
 * @file
 *
 * @author Lawrence Murray <lawrence.murray@csiro.au>
 * $Rev $
 * $Date$
 */
#ifndef BI_MISC_ASSERT_HPP
#define BI_MISC_ASSERT_HPP

#include "macro.hpp"

#include <cassert>
#include <cstdlib>
#include <iostream>

/**
 * @def BI_ASSERT(cond, msg)
 *
 * Checks condition, terminating and printing error if failed. Debugging
 * mode only.
 *
 * @arg @p cond Condition.
 * @arg @p msg Message to print if condition failed.
 */
#ifndef NDEBUG
#define BI_ASSERT(cond, msg) \
  if (!(cond)) { \
    std::cerr << "Error: " << msg << std::endl; \
  } \
  assert (cond)
#else
#define BI_ASSERT(cond, msg)
#endif

/**
 * @def BI_ERROR(cond, msg)
 *
 * Checks condition, terminating and printing error if failed.
 *
 * @arg @p cond Condition.
 * @arg @p msg Message to print if condition failed.
 */
#ifdef NDEBUG
#define BI_ERROR(cond, msg) \
  if (!(cond)) { \
    std::cerr << "Error: " << msg << std::endl; \
    exit(1); \
  }
#else
#define BI_ERROR BI_ASSERT
#endif

/**
 * @def BI_WARN
 *
 * Checks condition, printing warning if failed.
 *
 * @arg @p cond Condition.
 * @arg @p msg Message to print.
 */
#define BI_WARN(cond, msg) \
  if (!(cond)) { \
    std::cerr << "Warning: " << msg << std::endl; \
  }

#endif
