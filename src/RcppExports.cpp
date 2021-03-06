// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// multBoot
NumericVector multBoot(List x, List eif, const int n, const int reps);
RcppExport SEXP _simul_multBoot(SEXP xSEXP, SEXP eifSEXP, SEXP nSEXP, SEXP repsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type x(xSEXP);
    Rcpp::traits::input_parameter< List >::type eif(eifSEXP);
    Rcpp::traits::input_parameter< const int >::type n(nSEXP);
    Rcpp::traits::input_parameter< const int >::type reps(repsSEXP);
    rcpp_result_gen = Rcpp::wrap(multBoot(x, eif, n, reps));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_simul_multBoot", (DL_FUNC) &_simul_multBoot, 4},
    {NULL, NULL, 0}
};

RcppExport void R_init_simul(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
