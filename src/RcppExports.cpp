// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// altsqp_main_loop_rcpp
double altsqp_main_loop_rcpp(const arma::mat& X, arma::mat& F, arma::mat& Fn, arma::mat& Fy, arma::mat& Fbest, arma::mat& L, arma::mat& Ln, arma::mat& Ly, arma::mat& Lbest, double f, double fbest, const arma::vec& xsrow, const arma::vec& xscol, double best, double betamax, int numiter, int nc, int extrapolate, double betainit, double betaincrease, double betareduce, double betamaxincrease, double e, arma::mat& progress, bool verbose);
RcppExport SEXP _fastTopics_altsqp_main_loop_rcpp(SEXP XSEXP, SEXP FSEXP, SEXP FnSEXP, SEXP FySEXP, SEXP FbestSEXP, SEXP LSEXP, SEXP LnSEXP, SEXP LySEXP, SEXP LbestSEXP, SEXP fSEXP, SEXP fbestSEXP, SEXP xsrowSEXP, SEXP xscolSEXP, SEXP bestSEXP, SEXP betamaxSEXP, SEXP numiterSEXP, SEXP ncSEXP, SEXP extrapolateSEXP, SEXP betainitSEXP, SEXP betaincreaseSEXP, SEXP betareduceSEXP, SEXP betamaxincreaseSEXP, SEXP eSEXP, SEXP progressSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type F(FSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type Fn(FnSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type Fy(FySEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type Fbest(FbestSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type L(LSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type Ln(LnSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type Ly(LySEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type Lbest(LbestSEXP);
    Rcpp::traits::input_parameter< double >::type f(fSEXP);
    Rcpp::traits::input_parameter< double >::type fbest(fbestSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type xsrow(xsrowSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type xscol(xscolSEXP);
    Rcpp::traits::input_parameter< double >::type best(bestSEXP);
    Rcpp::traits::input_parameter< double >::type betamax(betamaxSEXP);
    Rcpp::traits::input_parameter< int >::type numiter(numiterSEXP);
    Rcpp::traits::input_parameter< int >::type nc(ncSEXP);
    Rcpp::traits::input_parameter< int >::type extrapolate(extrapolateSEXP);
    Rcpp::traits::input_parameter< double >::type betainit(betainitSEXP);
    Rcpp::traits::input_parameter< double >::type betaincrease(betaincreaseSEXP);
    Rcpp::traits::input_parameter< double >::type betareduce(betareduceSEXP);
    Rcpp::traits::input_parameter< double >::type betamaxincrease(betamaxincreaseSEXP);
    Rcpp::traits::input_parameter< double >::type e(eSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type progress(progressSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(altsqp_main_loop_rcpp(X, F, Fn, Fy, Fbest, L, Ln, Ly, Lbest, f, fbest, xsrow, xscol, best, betamax, numiter, nc, extrapolate, betainit, betaincrease, betareduce, betamaxincrease, e, progress, verbose));
    return rcpp_result_gen;
END_RCPP
}
// cost_rcpp
double cost_rcpp(const arma::mat& X, const arma::mat& A, const arma::mat& B, double e);
RcppExport SEXP _fastTopics_cost_rcpp(SEXP XSEXP, SEXP ASEXP, SEXP BSEXP, SEXP eSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type A(ASEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type B(BSEXP);
    Rcpp::traits::input_parameter< double >::type e(eSEXP);
    rcpp_result_gen = Rcpp::wrap(cost_rcpp(X, A, B, e));
    return rcpp_result_gen;
END_RCPP
}
// mixsqp_rcpp
arma::vec mixsqp_rcpp(const arma::mat& L, const arma::vec& w, const arma::vec& x0, double tol, double zerothreshold, double zerosearchdir, double suffdecr, double stepsizereduce, double minstepsize, const arma::vec& e, int numiter, int maxiteractiveset, bool verbose);
RcppExport SEXP _fastTopics_mixsqp_rcpp(SEXP LSEXP, SEXP wSEXP, SEXP x0SEXP, SEXP tolSEXP, SEXP zerothresholdSEXP, SEXP zerosearchdirSEXP, SEXP suffdecrSEXP, SEXP stepsizereduceSEXP, SEXP minstepsizeSEXP, SEXP eSEXP, SEXP numiterSEXP, SEXP maxiteractivesetSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type L(LSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type w(wSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type x0(x0SEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< double >::type zerothreshold(zerothresholdSEXP);
    Rcpp::traits::input_parameter< double >::type zerosearchdir(zerosearchdirSEXP);
    Rcpp::traits::input_parameter< double >::type suffdecr(suffdecrSEXP);
    Rcpp::traits::input_parameter< double >::type stepsizereduce(stepsizereduceSEXP);
    Rcpp::traits::input_parameter< double >::type minstepsize(minstepsizeSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type e(eSEXP);
    Rcpp::traits::input_parameter< int >::type numiter(numiterSEXP);
    Rcpp::traits::input_parameter< int >::type maxiteractiveset(maxiteractivesetSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(mixsqp_rcpp(L, w, x0, tol, zerothreshold, zerosearchdir, suffdecr, stepsizereduce, minstepsize, e, numiter, maxiteractiveset, verbose));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_fastTopics_altsqp_main_loop_rcpp", (DL_FUNC) &_fastTopics_altsqp_main_loop_rcpp, 25},
    {"_fastTopics_cost_rcpp", (DL_FUNC) &_fastTopics_cost_rcpp, 4},
    {"_fastTopics_mixsqp_rcpp", (DL_FUNC) &_fastTopics_mixsqp_rcpp, 13},
    {NULL, NULL, 0}
};

RcppExport void R_init_fastTopics(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
