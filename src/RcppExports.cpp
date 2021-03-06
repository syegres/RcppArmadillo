// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/RcppArmadillo.h"
#include <Rcpp.h>

using namespace Rcpp;

// fastLm
List fastLm(const arma::mat& X, const arma::colvec& y);
RcppExport SEXP RcppArmadillo_fastLm(SEXP XSEXP, SEXP ySEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP );
        Rcpp::traits::input_parameter< const arma::colvec& >::type y(ySEXP );
        List __result = fastLm(X, y);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// armadillo_version
IntegerVector armadillo_version(bool single);
RcppExport SEXP RcppArmadillo_armadillo_version(SEXP singleSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< bool >::type single(singleSEXP );
        IntegerVector __result = armadillo_version(single);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// armadillo_set_seed_random
void armadillo_set_seed_random();
RcppExport SEXP RcppArmadillo_armadillo_set_seed_random() {
BEGIN_RCPP
    {
        Rcpp::RNGScope __rngScope;
        armadillo_set_seed_random();
    }
    return R_NilValue;
END_RCPP
}
// armadillo_set_seed
void armadillo_set_seed(unsigned int val);
RcppExport SEXP RcppArmadillo_armadillo_set_seed(SEXP valSEXP) {
BEGIN_RCPP
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< unsigned int >::type val(valSEXP );
        armadillo_set_seed(val);
    }
    return R_NilValue;
END_RCPP
}
