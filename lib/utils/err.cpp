#include <ecl/err.hpp>

using namespace ecl;

const char* ecl::err_to_str(err error)
{
    switch (error) {
    case err::ok:       // 0
        return "OK";
    case err::busy:
        return "Device or resource busy";
    case err::inval:
        return "Invalid parameters given";
    case err::perm:
        return "Operation not permitted";
    case err::srch:
        return "No such process";
    case err::generic:  // -79
        return "Generic error occur";
    default:
        return "Unknown error code";
    }
}

