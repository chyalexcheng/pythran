#ifndef PYTHONIC_NUMPY_MULTIPLY_HPP
#define PYTHONIC_NUMPY_MULTIPLY_HPP

#include "pythonic/utils/proxy.hpp"
#include "pythonic/types/ndarray.hpp"
#include "pythonic/operator_/mul.hpp"

namespace pythonic {

    namespace numpy {

    #define NUMPY_BINARY_FUNC_NAME multiply
    #define NUMPY_BINARY_FUNC_SYM pythonic::operator_::mul
    #include "pythonic/types/numpy_binary_expr.hpp"

    }

}

#endif

