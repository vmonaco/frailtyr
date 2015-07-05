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
// phi_c
double phi_c(int k, int N_dot, double H_dot, double theta, String frailty);
RcppExport SEXP frailtyr_phi_c(SEXP kSEXP, SEXP N_dotSEXP, SEXP H_dotSEXP, SEXP thetaSEXP, SEXP frailtySEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    Rcpp::traits::input_parameter< int >::type N_dot(N_dotSEXP);
    Rcpp::traits::input_parameter< double >::type H_dot(H_dotSEXP);
    Rcpp::traits::input_parameter< double >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< String >::type frailty(frailtySEXP);
    __result = Rcpp::wrap(phi_c(k, N_dot, H_dot, theta, frailty));
    return __result;
END_RCPP
}
// phi_prime_c
double phi_prime_c(int k, int N_dot, double H_dot, double theta, String frailty, int deriv_idx);
RcppExport SEXP frailtyr_phi_prime_c(SEXP kSEXP, SEXP N_dotSEXP, SEXP H_dotSEXP, SEXP thetaSEXP, SEXP frailtySEXP, SEXP deriv_idxSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    Rcpp::traits::input_parameter< int >::type N_dot(N_dotSEXP);
    Rcpp::traits::input_parameter< double >::type H_dot(H_dotSEXP);
    Rcpp::traits::input_parameter< double >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< String >::type frailty(frailtySEXP);
    Rcpp::traits::input_parameter< int >::type deriv_idx(deriv_idxSEXP);
    __result = Rcpp::wrap(phi_prime_c(k, N_dot, H_dot, theta, frailty, deriv_idx));
    return __result;
END_RCPP
}
// bh
List bh(NumericVector d_, List X_, List K_, List Y_, List N_dot, NumericVector beta, NumericVector theta, String frailty);
RcppExport SEXP frailtyr_bh(SEXP d_SEXP, SEXP X_SEXP, SEXP K_SEXP, SEXP Y_SEXP, SEXP N_dotSEXP, SEXP betaSEXP, SEXP thetaSEXP, SEXP frailtySEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type d_(d_SEXP);
    Rcpp::traits::input_parameter< List >::type X_(X_SEXP);
    Rcpp::traits::input_parameter< List >::type K_(K_SEXP);
    Rcpp::traits::input_parameter< List >::type Y_(Y_SEXP);
    Rcpp::traits::input_parameter< List >::type N_dot(N_dotSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< String >::type frailty(frailtySEXP);
    __result = Rcpp::wrap(bh(d_, X_, K_, Y_, N_dot, beta, theta, frailty));
    return __result;
END_RCPP
}
// loglikelihood
double loglikelihood(List X_, List K_, List I_, List phi_1_, NumericVector Lambda, NumericVector beta);
RcppExport SEXP frailtyr_loglikelihood(SEXP X_SEXP, SEXP K_SEXP, SEXP I_SEXP, SEXP phi_1_SEXP, SEXP LambdaSEXP, SEXP betaSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List >::type X_(X_SEXP);
    Rcpp::traits::input_parameter< List >::type K_(K_SEXP);
    Rcpp::traits::input_parameter< List >::type I_(I_SEXP);
    Rcpp::traits::input_parameter< List >::type phi_1_(phi_1_SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Lambda(LambdaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type beta(betaSEXP);
    __result = Rcpp::wrap(loglikelihood(X_, K_, I_, phi_1_, Lambda, beta));
    return __result;
END_RCPP
}
// dH_dbeta
List dH_dbeta(NumericVector d_, List K_, List X_, List R_, List R_dot_, List N_dot_, List H_, List H_dot_, NumericVector Lambda, NumericVector lambda, NumericVector beta, NumericVector theta, int beta_idx, String frailty);
RcppExport SEXP frailtyr_dH_dbeta(SEXP d_SEXP, SEXP K_SEXP, SEXP X_SEXP, SEXP R_SEXP, SEXP R_dot_SEXP, SEXP N_dot_SEXP, SEXP H_SEXP, SEXP H_dot_SEXP, SEXP LambdaSEXP, SEXP lambdaSEXP, SEXP betaSEXP, SEXP thetaSEXP, SEXP beta_idxSEXP, SEXP frailtySEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type d_(d_SEXP);
    Rcpp::traits::input_parameter< List >::type K_(K_SEXP);
    Rcpp::traits::input_parameter< List >::type X_(X_SEXP);
    Rcpp::traits::input_parameter< List >::type R_(R_SEXP);
    Rcpp::traits::input_parameter< List >::type R_dot_(R_dot_SEXP);
    Rcpp::traits::input_parameter< List >::type N_dot_(N_dot_SEXP);
    Rcpp::traits::input_parameter< List >::type H_(H_SEXP);
    Rcpp::traits::input_parameter< List >::type H_dot_(H_dot_SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Lambda(LambdaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< int >::type beta_idx(beta_idxSEXP);
    Rcpp::traits::input_parameter< String >::type frailty(frailtySEXP);
    __result = Rcpp::wrap(dH_dbeta(d_, K_, X_, R_, R_dot_, N_dot_, H_, H_dot_, Lambda, lambda, beta, theta, beta_idx, frailty));
    return __result;
END_RCPP
}
// dH_dtheta
List dH_dtheta(NumericVector d_, List K_, List X_, List R_, List R_dot_, List N_dot_, List H_, List H_dot_, NumericVector Lambda, NumericVector lambda, NumericVector beta, NumericVector theta, int theta_idx, String frailty);
RcppExport SEXP frailtyr_dH_dtheta(SEXP d_SEXP, SEXP K_SEXP, SEXP X_SEXP, SEXP R_SEXP, SEXP R_dot_SEXP, SEXP N_dot_SEXP, SEXP H_SEXP, SEXP H_dot_SEXP, SEXP LambdaSEXP, SEXP lambdaSEXP, SEXP betaSEXP, SEXP thetaSEXP, SEXP theta_idxSEXP, SEXP frailtySEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type d_(d_SEXP);
    Rcpp::traits::input_parameter< List >::type K_(K_SEXP);
    Rcpp::traits::input_parameter< List >::type X_(X_SEXP);
    Rcpp::traits::input_parameter< List >::type R_(R_SEXP);
    Rcpp::traits::input_parameter< List >::type R_dot_(R_dot_SEXP);
    Rcpp::traits::input_parameter< List >::type N_dot_(N_dot_SEXP);
    Rcpp::traits::input_parameter< List >::type H_(H_SEXP);
    Rcpp::traits::input_parameter< List >::type H_dot_(H_dot_SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Lambda(LambdaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< int >::type theta_idx(theta_idxSEXP);
    Rcpp::traits::input_parameter< String >::type frailty(frailtySEXP);
    __result = Rcpp::wrap(dH_dtheta(d_, K_, X_, R_, R_dot_, N_dot_, H_, H_dot_, Lambda, lambda, beta, theta, theta_idx, frailty));
    return __result;
END_RCPP
}
// jacobian_beta_beta
double jacobian_beta_beta(Rcpp::List K_, Rcpp::List X_, Rcpp::List N_dot, Rcpp::List H_, Rcpp::List H_dot, Rcpp::List dH_dbeta_, Rcpp::List dH_dot_dbeta_, NumericVector beta, NumericVector theta, int beta_idx_1, int beta_idx_2, String frailty);
RcppExport SEXP frailtyr_jacobian_beta_beta(SEXP K_SEXP, SEXP X_SEXP, SEXP N_dotSEXP, SEXP H_SEXP, SEXP H_dotSEXP, SEXP dH_dbeta_SEXP, SEXP dH_dot_dbeta_SEXP, SEXP betaSEXP, SEXP thetaSEXP, SEXP beta_idx_1SEXP, SEXP beta_idx_2SEXP, SEXP frailtySEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< Rcpp::List >::type K_(K_SEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type X_(X_SEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type N_dot(N_dotSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type H_(H_SEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type H_dot(H_dotSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type dH_dbeta_(dH_dbeta_SEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type dH_dot_dbeta_(dH_dot_dbeta_SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< int >::type beta_idx_1(beta_idx_1SEXP);
    Rcpp::traits::input_parameter< int >::type beta_idx_2(beta_idx_2SEXP);
    Rcpp::traits::input_parameter< String >::type frailty(frailtySEXP);
    __result = Rcpp::wrap(jacobian_beta_beta(K_, X_, N_dot, H_, H_dot, dH_dbeta_, dH_dot_dbeta_, beta, theta, beta_idx_1, beta_idx_2, frailty));
    return __result;
END_RCPP
}
// jacobian_beta_theta
double jacobian_beta_theta(Rcpp::List K_, Rcpp::List X_, Rcpp::List N_dot, Rcpp::List H_, Rcpp::List H_dot, Rcpp::List dH_dtheta_, Rcpp::List dH_dot_dtheta_, NumericVector beta, NumericVector theta, int beta_idx, int theta_idx, String frailty);
RcppExport SEXP frailtyr_jacobian_beta_theta(SEXP K_SEXP, SEXP X_SEXP, SEXP N_dotSEXP, SEXP H_SEXP, SEXP H_dotSEXP, SEXP dH_dtheta_SEXP, SEXP dH_dot_dtheta_SEXP, SEXP betaSEXP, SEXP thetaSEXP, SEXP beta_idxSEXP, SEXP theta_idxSEXP, SEXP frailtySEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< Rcpp::List >::type K_(K_SEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type X_(X_SEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type N_dot(N_dotSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type H_(H_SEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type H_dot(H_dotSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type dH_dtheta_(dH_dtheta_SEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type dH_dot_dtheta_(dH_dot_dtheta_SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< int >::type beta_idx(beta_idxSEXP);
    Rcpp::traits::input_parameter< int >::type theta_idx(theta_idxSEXP);
    Rcpp::traits::input_parameter< String >::type frailty(frailtySEXP);
    __result = Rcpp::wrap(jacobian_beta_theta(K_, X_, N_dot, H_, H_dot, dH_dtheta_, dH_dot_dtheta_, beta, theta, beta_idx, theta_idx, frailty));
    return __result;
END_RCPP
}
// jacobian_theta_beta
double jacobian_theta_beta(Rcpp::List K_, Rcpp::List X_, Rcpp::List N_dot, Rcpp::List H_, Rcpp::List H_dot, Rcpp::List dH_dbeta_, Rcpp::List dH_dot_dbeta_, NumericVector beta, NumericVector theta, int theta_idx, int beta_idx, String frailty);
RcppExport SEXP frailtyr_jacobian_theta_beta(SEXP K_SEXP, SEXP X_SEXP, SEXP N_dotSEXP, SEXP H_SEXP, SEXP H_dotSEXP, SEXP dH_dbeta_SEXP, SEXP dH_dot_dbeta_SEXP, SEXP betaSEXP, SEXP thetaSEXP, SEXP theta_idxSEXP, SEXP beta_idxSEXP, SEXP frailtySEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< Rcpp::List >::type K_(K_SEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type X_(X_SEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type N_dot(N_dotSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type H_(H_SEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type H_dot(H_dotSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type dH_dbeta_(dH_dbeta_SEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type dH_dot_dbeta_(dH_dot_dbeta_SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< int >::type theta_idx(theta_idxSEXP);
    Rcpp::traits::input_parameter< int >::type beta_idx(beta_idxSEXP);
    Rcpp::traits::input_parameter< String >::type frailty(frailtySEXP);
    __result = Rcpp::wrap(jacobian_theta_beta(K_, X_, N_dot, H_, H_dot, dH_dbeta_, dH_dot_dbeta_, beta, theta, theta_idx, beta_idx, frailty));
    return __result;
END_RCPP
}
// jacobian_theta_theta
double jacobian_theta_theta(Rcpp::List K_, Rcpp::List X_, Rcpp::List N_dot, Rcpp::List H_, Rcpp::List H_dot, Rcpp::List dH_dtheta_, Rcpp::List dH_dot_dtheta_, NumericVector beta, NumericVector theta, int theta_idx_1, int theta_idx_2, String frailty);
RcppExport SEXP frailtyr_jacobian_theta_theta(SEXP K_SEXP, SEXP X_SEXP, SEXP N_dotSEXP, SEXP H_SEXP, SEXP H_dotSEXP, SEXP dH_dtheta_SEXP, SEXP dH_dot_dtheta_SEXP, SEXP betaSEXP, SEXP thetaSEXP, SEXP theta_idx_1SEXP, SEXP theta_idx_2SEXP, SEXP frailtySEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< Rcpp::List >::type K_(K_SEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type X_(X_SEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type N_dot(N_dotSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type H_(H_SEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type H_dot(H_dotSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type dH_dtheta_(dH_dtheta_SEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type dH_dot_dtheta_(dH_dot_dtheta_SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< int >::type theta_idx_1(theta_idx_1SEXP);
    Rcpp::traits::input_parameter< int >::type theta_idx_2(theta_idx_2SEXP);
    Rcpp::traits::input_parameter< String >::type frailty(frailtySEXP);
    __result = Rcpp::wrap(jacobian_theta_theta(K_, X_, N_dot, H_, H_dot, dH_dtheta_, dH_dot_dtheta_, beta, theta, theta_idx_1, theta_idx_2, frailty));
    return __result;
END_RCPP
}
// Q_beta
List Q_beta(List X_, List R_star, List N_dot_, List H_, List H_dot_, NumericVector theta, int r, String frailty);
RcppExport SEXP frailtyr_Q_beta(SEXP X_SEXP, SEXP R_starSEXP, SEXP N_dot_SEXP, SEXP H_SEXP, SEXP H_dot_SEXP, SEXP thetaSEXP, SEXP rSEXP, SEXP frailtySEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List >::type X_(X_SEXP);
    Rcpp::traits::input_parameter< List >::type R_star(R_starSEXP);
    Rcpp::traits::input_parameter< List >::type N_dot_(N_dot_SEXP);
    Rcpp::traits::input_parameter< List >::type H_(H_SEXP);
    Rcpp::traits::input_parameter< List >::type H_dot_(H_dot_SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< int >::type r(rSEXP);
    Rcpp::traits::input_parameter< String >::type frailty(frailtySEXP);
    __result = Rcpp::wrap(Q_beta(X_, R_star, N_dot_, H_, H_dot_, theta, r, frailty));
    return __result;
END_RCPP
}
// Q_theta
List Q_theta(List X_, List R_star, List N_dot_, List H_, List H_dot_, NumericVector theta, int r, String frailty);
RcppExport SEXP frailtyr_Q_theta(SEXP X_SEXP, SEXP R_starSEXP, SEXP N_dot_SEXP, SEXP H_SEXP, SEXP H_dot_SEXP, SEXP thetaSEXP, SEXP rSEXP, SEXP frailtySEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List >::type X_(X_SEXP);
    Rcpp::traits::input_parameter< List >::type R_star(R_starSEXP);
    Rcpp::traits::input_parameter< List >::type N_dot_(N_dot_SEXP);
    Rcpp::traits::input_parameter< List >::type H_(H_SEXP);
    Rcpp::traits::input_parameter< List >::type H_dot_(H_dot_SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< int >::type r(rSEXP);
    Rcpp::traits::input_parameter< String >::type frailty(frailtySEXP);
    __result = Rcpp::wrap(Q_theta(X_, R_star, N_dot_, H_, H_dot_, theta, r, frailty));
    return __result;
END_RCPP
}
// Ycal
NumericVector Ycal(List X_, List Y_, List N_dot_, List H_dot_, NumericVector beta, NumericVector theta, String frailty);
RcppExport SEXP frailtyr_Ycal(SEXP X_SEXP, SEXP Y_SEXP, SEXP N_dot_SEXP, SEXP H_dot_SEXP, SEXP betaSEXP, SEXP thetaSEXP, SEXP frailtySEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List >::type X_(X_SEXP);
    Rcpp::traits::input_parameter< List >::type Y_(Y_SEXP);
    Rcpp::traits::input_parameter< List >::type N_dot_(N_dot_SEXP);
    Rcpp::traits::input_parameter< List >::type H_dot_(H_dot_SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< String >::type frailty(frailtySEXP);
    __result = Rcpp::wrap(Ycal(X_, Y_, N_dot_, H_dot_, beta, theta, frailty));
    return __result;
END_RCPP
}
// eta
List eta(List N_dot_, List H_dot_, NumericVector theta, String frailty);
RcppExport SEXP frailtyr_eta(SEXP N_dot_SEXP, SEXP H_dot_SEXP, SEXP thetaSEXP, SEXP frailtySEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List >::type N_dot_(N_dot_SEXP);
    Rcpp::traits::input_parameter< List >::type H_dot_(H_dot_SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< String >::type frailty(frailtySEXP);
    __result = Rcpp::wrap(eta(N_dot_, H_dot_, theta, frailty));
    return __result;
END_RCPP
}
// Upsilon
NumericVector Upsilon(List X_, List K_, List R_dot_, List nu_, NumericVector Ycal_, NumericVector beta, NumericVector theta, String frailty);
RcppExport SEXP frailtyr_Upsilon(SEXP X_SEXP, SEXP K_SEXP, SEXP R_dot_SEXP, SEXP nu_SEXP, SEXP Ycal_SEXP, SEXP betaSEXP, SEXP thetaSEXP, SEXP frailtySEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List >::type X_(X_SEXP);
    Rcpp::traits::input_parameter< List >::type K_(K_SEXP);
    Rcpp::traits::input_parameter< List >::type R_dot_(R_dot_SEXP);
    Rcpp::traits::input_parameter< List >::type nu_(nu_SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Ycal_(Ycal_SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< String >::type frailty(frailtySEXP);
    __result = Rcpp::wrap(Upsilon(X_, K_, R_dot_, nu_, Ycal_, beta, theta, frailty));
    return __result;
END_RCPP
}
// xi_beta
NumericVector xi_beta(List X_, List I_, List N_dot, List H_, List H_dot_, NumericVector beta, NumericVector theta, int r, String frailty);
RcppExport SEXP frailtyr_xi_beta(SEXP X_SEXP, SEXP I_SEXP, SEXP N_dotSEXP, SEXP H_SEXP, SEXP H_dot_SEXP, SEXP betaSEXP, SEXP thetaSEXP, SEXP rSEXP, SEXP frailtySEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List >::type X_(X_SEXP);
    Rcpp::traits::input_parameter< List >::type I_(I_SEXP);
    Rcpp::traits::input_parameter< List >::type N_dot(N_dotSEXP);
    Rcpp::traits::input_parameter< List >::type H_(H_SEXP);
    Rcpp::traits::input_parameter< List >::type H_dot_(H_dot_SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< int >::type r(rSEXP);
    Rcpp::traits::input_parameter< String >::type frailty(frailtySEXP);
    __result = Rcpp::wrap(xi_beta(X_, I_, N_dot, H_, H_dot_, beta, theta, r, frailty));
    return __result;
END_RCPP
}
// xi_theta
NumericVector xi_theta(List X_, List I_, List N_dot, List H_, List H_dot_, NumericVector beta, NumericVector theta, int r, String frailty);
RcppExport SEXP frailtyr_xi_theta(SEXP X_SEXP, SEXP I_SEXP, SEXP N_dotSEXP, SEXP H_SEXP, SEXP H_dot_SEXP, SEXP betaSEXP, SEXP thetaSEXP, SEXP rSEXP, SEXP frailtySEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List >::type X_(X_SEXP);
    Rcpp::traits::input_parameter< List >::type I_(I_SEXP);
    Rcpp::traits::input_parameter< List >::type N_dot(N_dotSEXP);
    Rcpp::traits::input_parameter< List >::type H_(H_SEXP);
    Rcpp::traits::input_parameter< List >::type H_dot_(H_dot_SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< int >::type r(rSEXP);
    Rcpp::traits::input_parameter< String >::type frailty(frailtySEXP);
    __result = Rcpp::wrap(xi_theta(X_, I_, N_dot, H_, H_dot_, beta, theta, r, frailty));
    return __result;
END_RCPP
}
