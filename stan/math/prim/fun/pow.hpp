#ifndef STAN_MATH_PRIM_FUN_POW_HPP
#define STAN_MATH_PRIM_FUN_POW_HPP

#include <stan/math/prim/meta.hpp>
#include <stan/math/prim/fun/constants.hpp>
#include <cmath>
#include <complex>

namespace stan {
namespace math {
namespace internal {

/**
 * Return the first argument raised to the power of the second
 * argument.  At least one of the arguments must be a complex number.
 *
 * @tparam U type of first argument
 * @tparam V type of second argument
 * @param[in] lhs first argument
 * @param[in] rhs second argument
 * @return first argument raised to the power of the second argument
 */
template <typename U, typename V>
inline complex_return_t<U, V> complex_pow(const U& x, const V& y) {
  return exp(y * log(x));
}
}  // namespace internal
}  // namespace math
}  // namespace stan
#endif
