#include <test/unit/math/test_ad.hpp>

TEST(mathMixMatFun, PhiApprox) {
  auto f = [](const auto& x1) { return stan::math::Phi_approx(x1); };
  stan::test::expect_common_unary_vectorized(f);
  stan::test::expect_unary_vectorized(f, -27.5, -15.2, -10, 1, 1.3, 5, 10,
                                      27.5);
}
