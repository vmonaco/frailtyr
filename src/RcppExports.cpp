// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppGSL.h>
#include <Rcpp.h>

using namespace Rcpp;

// dgamma_c
NumericVector dgamma_c(NumericVector x, NumericVector theta);
RcppExport SEXP frailtyr_dgamma_c(SEXP xSEXP, SEXP thetaSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type theta(thetaSEXP);
    __result = Rcpp::wrap(dgamma_c(x, theta));
    return __result;
END_RCPP
}
// deriv_dgamma_c
NumericVector deriv_dgamma_c(NumericVector x, NumericVector theta);
RcppExport SEXP frailtyr_deriv_dgamma_c(SEXP xSEXP, SEXP thetaSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type theta(thetaSEXP);
    __result = Rcpp::wrap(deriv_dgamma_c(x, theta));
    return __result;
END_RCPP
}
// lt_dgamma_c
double lt_dgamma_c(int p, double s, double theta);
RcppExport SEXP frailtyr_lt_dgamma_c(SEXP pSEXP, SEXP sSEXP, SEXP thetaSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< int >::type p(pSEXP);
    Rcpp::traits::input_parameter< double >::type s(sSEXP);
    Rcpp::traits::input_parameter< double >::type theta(thetaSEXP);
    __result = Rcpp::wrap(lt_dgamma_c(p, s, theta));
    return __result;
END_RCPP
}
// deriv_lt_dgamma_c
double deriv_lt_dgamma_c(int p, double s, double theta);
RcppExport SEXP frailtyr_deriv_lt_dgamma_c(SEXP pSEXP, SEXP sSEXP, SEXP thetaSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< int >::type p(pSEXP);
    Rcpp::traits::input_parameter< double >::type s(sSEXP);
    Rcpp::traits::input_parameter< double >::type theta(thetaSEXP);
    __result = Rcpp::wrap(deriv_lt_dgamma_c(p, s, theta));
    return __result;
END_RCPP
}
// deriv_deriv_lt_dgamma_c
double deriv_deriv_lt_dgamma_c(int p, double s, double theta);
RcppExport SEXP frailtyr_deriv_deriv_lt_dgamma_c(SEXP pSEXP, SEXP sSEXP, SEXP thetaSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< int >::type p(pSEXP);
    Rcpp::traits::input_parameter< double >::type s(sSEXP);
    Rcpp::traits::input_parameter< double >::type theta(thetaSEXP);
    __result = Rcpp::wrap(deriv_deriv_lt_dgamma_c(p, s, theta));
    return __result;
END_RCPP
}
// dlognormal_c
NumericVector dlognormal_c(NumericVector x, NumericVector theta);
RcppExport SEXP frailtyr_dlognormal_c(SEXP xSEXP, SEXP thetaSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type theta(thetaSEXP);
    __result = Rcpp::wrap(dlognormal_c(x, theta));
    return __result;
END_RCPP
}
// deriv_dlognormal_c
NumericVector deriv_dlognormal_c(NumericVector x, NumericVector theta);
RcppExport SEXP frailtyr_deriv_dlognormal_c(SEXP xSEXP, SEXP thetaSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type theta(thetaSEXP);
    __result = Rcpp::wrap(deriv_dlognormal_c(x, theta));
    return __result;
END_RCPP
}
// dinvgauss_c
NumericVector dinvgauss_c(NumericVector x, NumericVector theta);
RcppExport SEXP frailtyr_dinvgauss_c(SEXP xSEXP, SEXP thetaSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type theta(thetaSEXP);
    __result = Rcpp::wrap(dinvgauss_c(x, theta));
    return __result;
END_RCPP
}
// deriv_dinvgauss_c
NumericVector deriv_dinvgauss_c(NumericVector x, NumericVector theta);
RcppExport SEXP frailtyr_deriv_dinvgauss_c(SEXP xSEXP, SEXP thetaSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type theta(thetaSEXP);
    __result = Rcpp::wrap(deriv_dinvgauss_c(x, theta));
    return __result;
END_RCPP
}
// lt_dpvf_coef
double lt_dpvf_coef(int p, int j, double alpha);
RcppExport SEXP frailtyr_lt_dpvf_coef(SEXP pSEXP, SEXP jSEXP, SEXP alphaSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< int >::type p(pSEXP);
    Rcpp::traits::input_parameter< int >::type j(jSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    __result = Rcpp::wrap(lt_dpvf_coef(p, j, alpha));
    return __result;
END_RCPP
}
// dposstab_c
NumericVector dposstab_c(NumericVector x, NumericVector alpha);
RcppExport SEXP frailtyr_dposstab_c(SEXP xSEXP, SEXP alphaSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type alpha(alphaSEXP);
    __result = Rcpp::wrap(dposstab_c(x, alpha));
    return __result;
END_RCPP
}
// lt_dposstab_c
double lt_dposstab_c(int p, double s, double alpha);
RcppExport SEXP frailtyr_lt_dposstab_c(SEXP pSEXP, SEXP sSEXP, SEXP alphaSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< int >::type p(pSEXP);
    Rcpp::traits::input_parameter< double >::type s(sSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    __result = Rcpp::wrap(lt_dposstab_c(p, s, alpha));
    return __result;
END_RCPP
}
// deriv_lt_dposstab_c
double deriv_lt_dposstab_c(int p, double s, double alpha);
RcppExport SEXP frailtyr_deriv_lt_dposstab_c(SEXP pSEXP, SEXP sSEXP, SEXP alphaSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< int >::type p(pSEXP);
    Rcpp::traits::input_parameter< double >::type s(sSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    __result = Rcpp::wrap(deriv_lt_dposstab_c(p, s, alpha));
    return __result;
END_RCPP
}
// dpvf_c
NumericVector dpvf_c(NumericVector x, NumericVector alpha);
RcppExport SEXP frailtyr_dpvf_c(SEXP xSEXP, SEXP alphaSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type alpha(alphaSEXP);
    __result = Rcpp::wrap(dpvf_c(x, alpha));
    return __result;
END_RCPP
}
// lt_dpvf_c
double lt_dpvf_c(int p, double s, double alpha);
RcppExport SEXP frailtyr_lt_dpvf_c(SEXP pSEXP, SEXP sSEXP, SEXP alphaSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< int >::type p(pSEXP);
    Rcpp::traits::input_parameter< double >::type s(sSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    __result = Rcpp::wrap(lt_dpvf_c(p, s, alpha));
    return __result;
END_RCPP
}
// deriv_lt_dpvf_c
double deriv_lt_dpvf_c(int p, double s, double alpha);
RcppExport SEXP frailtyr_deriv_lt_dpvf_c(SEXP pSEXP, SEXP sSEXP, SEXP alphaSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< int >::type p(pSEXP);
    Rcpp::traits::input_parameter< double >::type s(sSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    __result = Rcpp::wrap(deriv_lt_dpvf_c(p, s, alpha));
    return __result;
END_RCPP
}
// zeta
double zeta(double s);
RcppExport SEXP frailtyr_zeta(SEXP sSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< double >::type s(sSEXP);
    __result = Rcpp::wrap(zeta(s));
    return __result;
END_RCPP
}
