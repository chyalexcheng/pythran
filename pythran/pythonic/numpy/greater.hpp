#ifndef PYTHONIC_NUMPY_GREATER_HPP
#define PYTHONIC_NUMPY_GREATER_HPP

#include "pythonic/utils/proxy.hpp"
#include "pythonic/types/ndarray.hpp"
#include "pythonic/operator_/gt.hpp"

namespace pythonic {

    namespace numpy {

    #define NUMPY_BINARY_FUNC_NAME greater
    #define NUMPY_BINARY_FUNC_SYM pythonic::operator_::gt
    #include "pythonic/types/numpy_binary_expr.hpp"

    }

}

#endif

