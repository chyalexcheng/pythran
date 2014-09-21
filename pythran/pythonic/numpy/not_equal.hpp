#ifndef PYTHONIC_NUMPY_NOTEQUAL_HPP
#define PYTHONIC_NUMPY_NOTEQUAL_HPP

#include "pythonic/utils/proxy.hpp"
#include "pythonic/types/ndarray.hpp"
#include "pythonic/operator_/ne.hpp"

namespace pythonic {

    namespace numpy {
    #define NUMPY_BINARY_FUNC_NAME not_equal
    #define NUMPY_BINARY_FUNC_SYM pythonic::operator_::ne
    #include "pythonic/types/numpy_binary_expr.hpp"

    }

}

#endif

