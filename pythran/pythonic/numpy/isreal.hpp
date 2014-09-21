#ifndef PYTHONIC_NUMPY_ISREAL_HPP
#define PYTHONIC_NUMPY_ISREAL_HPP

#include "pythonic/utils/proxy.hpp"
#include "pythonic/types/ndarray.hpp"
#include "pythonic/types/traits.hpp"

namespace pythonic {

    namespace numpy {

        namespace wrapper {
            template<class I>
                typename std::enable_if<types::is_complex<I>::value, bool>::type
                isreal(I const& a)
                {
                    return a.imag() == 0.;
                }

            template<class I>
                typename std::enable_if<not types::is_complex<I>::value, bool>::type
                isreal(I const& a)
                {
                    return true;
                }
        }

#define NUMPY_UNARY_FUNC_NAME isreal
#define NUMPY_UNARY_FUNC_SYM wrapper::isreal
#include "pythonic/types/numpy_unary_expr.hpp"

    }

}

#endif

