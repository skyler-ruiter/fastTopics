// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// altsqp_update_factors_rcpp
arma::mat altsqp_update_factors_rcpp(const arma::mat& X, const arma::mat& F, const arma::mat& L, const arma::vec& xscol, const arma::vec& ls, double e, double numem, double numsqp, Rcpp::List control);
RcppExport SEXP _fastTopics_altsqp_update_factors_rcpp(SEXP XSEXP, SEXP FSEXP, SEXP LSEXP, SEXP xscolSEXP, SEXP lsSEXP, SEXP eSEXP, SEXP numemSEXP, SEXP numsqpSEXP, SEXP controlSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type F(FSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type L(LSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type xscol(xscolSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type ls(lsSEXP);
    Rcpp::traits::input_parameter< double >::type e(eSEXP);
    Rcpp::traits::input_parameter< double >::type numem(numemSEXP);
    Rcpp::traits::input_parameter< double >::type numsqp(numsqpSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type control(controlSEXP);
    rcpp_result_gen = Rcpp::wrap(altsqp_update_factors_rcpp(X, F, L, xscol, ls, e, numem, numsqp, control));
    return rcpp_result_gen;
END_RCPP
}
// altsqp_update_factors_sparse_rcpp
arma::mat altsqp_update_factors_sparse_rcpp(const arma::sp_mat& X, const arma::mat& F, const arma::mat& L, const arma::vec& xscol, const arma::vec& ls, double e, double numem, double numsqp, Rcpp::List control);
RcppExport SEXP _fastTopics_altsqp_update_factors_sparse_rcpp(SEXP XSEXP, SEXP FSEXP, SEXP LSEXP, SEXP xscolSEXP, SEXP lsSEXP, SEXP eSEXP, SEXP numemSEXP, SEXP numsqpSEXP, SEXP controlSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type F(FSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type L(LSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type xscol(xscolSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type ls(lsSEXP);
    Rcpp::traits::input_parameter< double >::type e(eSEXP);
    Rcpp::traits::input_parameter< double >::type numem(numemSEXP);
    Rcpp::traits::input_parameter< double >::type numsqp(numsqpSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type control(controlSEXP);
    rcpp_result_gen = Rcpp::wrap(altsqp_update_factors_sparse_rcpp(X, F, L, xscol, ls, e, numem, numsqp, control));
    return rcpp_result_gen;
END_RCPP
}
// altsqp_update_factors_rcpp_parallel
arma::mat altsqp_update_factors_rcpp_parallel(const arma::mat& X, const arma::mat& F, const arma::mat& L, const arma::vec& xscol, const arma::vec& ls, double e, double numem, double numsqp, Rcpp::List control);
RcppExport SEXP _fastTopics_altsqp_update_factors_rcpp_parallel(SEXP XSEXP, SEXP FSEXP, SEXP LSEXP, SEXP xscolSEXP, SEXP lsSEXP, SEXP eSEXP, SEXP numemSEXP, SEXP numsqpSEXP, SEXP controlSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type F(FSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type L(LSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type xscol(xscolSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type ls(lsSEXP);
    Rcpp::traits::input_parameter< double >::type e(eSEXP);
    Rcpp::traits::input_parameter< double >::type numem(numemSEXP);
    Rcpp::traits::input_parameter< double >::type numsqp(numsqpSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type control(controlSEXP);
    rcpp_result_gen = Rcpp::wrap(altsqp_update_factors_rcpp_parallel(X, F, L, xscol, ls, e, numem, numsqp, control));
    return rcpp_result_gen;
END_RCPP
}
// altsqp_update_factors_rcpp_parallel_sparse
arma::mat altsqp_update_factors_rcpp_parallel_sparse(const arma::sp_mat& X, const arma::mat& F, const arma::mat& L, const arma::vec& xscol, const arma::vec& ls, double e, double numem, double numsqp, Rcpp::List control);
RcppExport SEXP _fastTopics_altsqp_update_factors_rcpp_parallel_sparse(SEXP XSEXP, SEXP FSEXP, SEXP LSEXP, SEXP xscolSEXP, SEXP lsSEXP, SEXP eSEXP, SEXP numemSEXP, SEXP numsqpSEXP, SEXP controlSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type F(FSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type L(LSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type xscol(xscolSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type ls(lsSEXP);
    Rcpp::traits::input_parameter< double >::type e(eSEXP);
    Rcpp::traits::input_parameter< double >::type numem(numemSEXP);
    Rcpp::traits::input_parameter< double >::type numsqp(numsqpSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type control(controlSEXP);
    rcpp_result_gen = Rcpp::wrap(altsqp_update_factors_rcpp_parallel_sparse(X, F, L, xscol, ls, e, numem, numsqp, control));
    return rcpp_result_gen;
END_RCPP
}
// altsqp_update_loadings_rcpp
arma::mat altsqp_update_loadings_rcpp(const arma::mat& X, const arma::mat& F, const arma::mat& L, const arma::vec& xsrow, const arma::vec& fs, double e, double numem, double numsqp, Rcpp::List control);
RcppExport SEXP _fastTopics_altsqp_update_loadings_rcpp(SEXP XSEXP, SEXP FSEXP, SEXP LSEXP, SEXP xsrowSEXP, SEXP fsSEXP, SEXP eSEXP, SEXP numemSEXP, SEXP numsqpSEXP, SEXP controlSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type F(FSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type L(LSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type xsrow(xsrowSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type fs(fsSEXP);
    Rcpp::traits::input_parameter< double >::type e(eSEXP);
    Rcpp::traits::input_parameter< double >::type numem(numemSEXP);
    Rcpp::traits::input_parameter< double >::type numsqp(numsqpSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type control(controlSEXP);
    rcpp_result_gen = Rcpp::wrap(altsqp_update_loadings_rcpp(X, F, L, xsrow, fs, e, numem, numsqp, control));
    return rcpp_result_gen;
END_RCPP
}
// altsqp_update_loadings_sparse_rcpp
arma::mat altsqp_update_loadings_sparse_rcpp(const arma::sp_mat& X, const arma::mat& F, const arma::mat& L, const arma::vec& xsrow, const arma::vec& fs, double e, double numem, double numsqp, Rcpp::List control);
RcppExport SEXP _fastTopics_altsqp_update_loadings_sparse_rcpp(SEXP XSEXP, SEXP FSEXP, SEXP LSEXP, SEXP xsrowSEXP, SEXP fsSEXP, SEXP eSEXP, SEXP numemSEXP, SEXP numsqpSEXP, SEXP controlSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type F(FSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type L(LSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type xsrow(xsrowSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type fs(fsSEXP);
    Rcpp::traits::input_parameter< double >::type e(eSEXP);
    Rcpp::traits::input_parameter< double >::type numem(numemSEXP);
    Rcpp::traits::input_parameter< double >::type numsqp(numsqpSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type control(controlSEXP);
    rcpp_result_gen = Rcpp::wrap(altsqp_update_loadings_sparse_rcpp(X, F, L, xsrow, fs, e, numem, numsqp, control));
    return rcpp_result_gen;
END_RCPP
}
// altsqp_update_loadings_rcpp_parallel
arma::mat altsqp_update_loadings_rcpp_parallel(const arma::mat& X, const arma::mat& F, const arma::mat& L, const arma::vec& xsrow, const arma::vec& fs, double e, double numem, double numsqp, Rcpp::List control);
RcppExport SEXP _fastTopics_altsqp_update_loadings_rcpp_parallel(SEXP XSEXP, SEXP FSEXP, SEXP LSEXP, SEXP xsrowSEXP, SEXP fsSEXP, SEXP eSEXP, SEXP numemSEXP, SEXP numsqpSEXP, SEXP controlSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type F(FSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type L(LSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type xsrow(xsrowSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type fs(fsSEXP);
    Rcpp::traits::input_parameter< double >::type e(eSEXP);
    Rcpp::traits::input_parameter< double >::type numem(numemSEXP);
    Rcpp::traits::input_parameter< double >::type numsqp(numsqpSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type control(controlSEXP);
    rcpp_result_gen = Rcpp::wrap(altsqp_update_loadings_rcpp_parallel(X, F, L, xsrow, fs, e, numem, numsqp, control));
    return rcpp_result_gen;
END_RCPP
}
// altsqp_update_loadings_rcpp_parallel_sparse
arma::mat altsqp_update_loadings_rcpp_parallel_sparse(const arma::sp_mat& X, const arma::mat& F, const arma::mat& L, const arma::vec& xsrow, const arma::vec& fs, double e, double numem, double numsqp, Rcpp::List control);
RcppExport SEXP _fastTopics_altsqp_update_loadings_rcpp_parallel_sparse(SEXP XSEXP, SEXP FSEXP, SEXP LSEXP, SEXP xsrowSEXP, SEXP fsSEXP, SEXP eSEXP, SEXP numemSEXP, SEXP numsqpSEXP, SEXP controlSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type F(FSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type L(LSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type xsrow(xsrowSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type fs(fsSEXP);
    Rcpp::traits::input_parameter< double >::type e(eSEXP);
    Rcpp::traits::input_parameter< double >::type numem(numemSEXP);
    Rcpp::traits::input_parameter< double >::type numsqp(numsqpSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type control(controlSEXP);
    rcpp_result_gen = Rcpp::wrap(altsqp_update_loadings_rcpp_parallel_sparse(X, F, L, xsrow, fs, e, numem, numsqp, control));
    return rcpp_result_gen;
END_RCPP
}
// ccd_rcpp
void ccd_rcpp(const NumericMatrix& V, NumericMatrix& W, NumericMatrix& H, NumericMatrix& WH, NumericVector& wht, NumericVector& vt, double e);
RcppExport SEXP _fastTopics_ccd_rcpp(SEXP VSEXP, SEXP WSEXP, SEXP HSEXP, SEXP WHSEXP, SEXP whtSEXP, SEXP vtSEXP, SEXP eSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type V(VSEXP);
    Rcpp::traits::input_parameter< NumericMatrix& >::type W(WSEXP);
    Rcpp::traits::input_parameter< NumericMatrix& >::type H(HSEXP);
    Rcpp::traits::input_parameter< NumericMatrix& >::type WH(WHSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type wht(whtSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type vt(vtSEXP);
    Rcpp::traits::input_parameter< double >::type e(eSEXP);
    ccd_rcpp(V, W, H, WH, wht, vt, e);
    return R_NilValue;
END_RCPP
}
// cost_rcpp
arma::vec cost_rcpp(const arma::mat& X, const arma::mat& A, const arma::mat& B, double e, bool poisson);
RcppExport SEXP _fastTopics_cost_rcpp(SEXP XSEXP, SEXP ASEXP, SEXP BSEXP, SEXP eSEXP, SEXP poissonSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type A(ASEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type B(BSEXP);
    Rcpp::traits::input_parameter< double >::type e(eSEXP);
    Rcpp::traits::input_parameter< bool >::type poisson(poissonSEXP);
    rcpp_result_gen = Rcpp::wrap(cost_rcpp(X, A, B, e, poisson));
    return rcpp_result_gen;
END_RCPP
}
// cost_sparse_rcpp
arma::vec cost_sparse_rcpp(const arma::sp_mat& X, const arma::mat& A, const arma::mat& B, double e, bool poisson);
RcppExport SEXP _fastTopics_cost_sparse_rcpp(SEXP XSEXP, SEXP ASEXP, SEXP BSEXP, SEXP eSEXP, SEXP poissonSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type A(ASEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type B(BSEXP);
    Rcpp::traits::input_parameter< double >::type e(eSEXP);
    Rcpp::traits::input_parameter< bool >::type poisson(poissonSEXP);
    rcpp_result_gen = Rcpp::wrap(cost_sparse_rcpp(X, A, B, e, poisson));
    return rcpp_result_gen;
END_RCPP
}
// mixem_rcpp
arma::vec mixem_rcpp(const arma::mat& L, const arma::vec& w, const arma::vec& x0, uint numiter);
RcppExport SEXP _fastTopics_mixem_rcpp(SEXP LSEXP, SEXP wSEXP, SEXP x0SEXP, SEXP numiterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type L(LSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type w(wSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type x0(x0SEXP);
    Rcpp::traits::input_parameter< uint >::type numiter(numiterSEXP);
    rcpp_result_gen = Rcpp::wrap(mixem_rcpp(L, w, x0, numiter));
    return rcpp_result_gen;
END_RCPP
}
// mixsqp_rcpp
arma::vec mixsqp_rcpp(const arma::mat& L, const arma::vec& w, const arma::vec& x0, const arma::vec& e, uint numiter, List control, bool verbose);
RcppExport SEXP _fastTopics_mixsqp_rcpp(SEXP LSEXP, SEXP wSEXP, SEXP x0SEXP, SEXP eSEXP, SEXP numiterSEXP, SEXP controlSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type L(LSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type w(wSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type x0(x0SEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type e(eSEXP);
    Rcpp::traits::input_parameter< uint >::type numiter(numiterSEXP);
    Rcpp::traits::input_parameter< List >::type control(controlSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(mixsqp_rcpp(L, w, x0, e, numiter, control, verbose));
    return rcpp_result_gen;
END_RCPP
}
// pnmfem_update_factors_rcpp
arma::mat pnmfem_update_factors_rcpp(const arma::mat& X, const arma::mat& F, const arma::mat& L, double numiter);
RcppExport SEXP _fastTopics_pnmfem_update_factors_rcpp(SEXP XSEXP, SEXP FSEXP, SEXP LSEXP, SEXP numiterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type F(FSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type L(LSEXP);
    Rcpp::traits::input_parameter< double >::type numiter(numiterSEXP);
    rcpp_result_gen = Rcpp::wrap(pnmfem_update_factors_rcpp(X, F, L, numiter));
    return rcpp_result_gen;
END_RCPP
}
// pnmfem_update_factors_sparse_rcpp
arma::mat pnmfem_update_factors_sparse_rcpp(const arma::sp_mat& X, const arma::mat& F, const arma::mat& L, double numiter);
RcppExport SEXP _fastTopics_pnmfem_update_factors_sparse_rcpp(SEXP XSEXP, SEXP FSEXP, SEXP LSEXP, SEXP numiterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type F(FSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type L(LSEXP);
    Rcpp::traits::input_parameter< double >::type numiter(numiterSEXP);
    rcpp_result_gen = Rcpp::wrap(pnmfem_update_factors_sparse_rcpp(X, F, L, numiter));
    return rcpp_result_gen;
END_RCPP
}
// poismixem_rcpp
arma::vec poismixem_rcpp(const arma::mat& L, const arma::vec& w, const arma::vec& x0, uint numiter);
RcppExport SEXP _fastTopics_poismixem_rcpp(SEXP LSEXP, SEXP wSEXP, SEXP x0SEXP, SEXP numiterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type L(LSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type w(wSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type x0(x0SEXP);
    Rcpp::traits::input_parameter< uint >::type numiter(numiterSEXP);
    rcpp_result_gen = Rcpp::wrap(poismixem_rcpp(L, w, x0, numiter));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_fastTopics_altsqp_update_factors_rcpp", (DL_FUNC) &_fastTopics_altsqp_update_factors_rcpp, 9},
    {"_fastTopics_altsqp_update_factors_sparse_rcpp", (DL_FUNC) &_fastTopics_altsqp_update_factors_sparse_rcpp, 9},
    {"_fastTopics_altsqp_update_factors_rcpp_parallel", (DL_FUNC) &_fastTopics_altsqp_update_factors_rcpp_parallel, 9},
    {"_fastTopics_altsqp_update_factors_rcpp_parallel_sparse", (DL_FUNC) &_fastTopics_altsqp_update_factors_rcpp_parallel_sparse, 9},
    {"_fastTopics_altsqp_update_loadings_rcpp", (DL_FUNC) &_fastTopics_altsqp_update_loadings_rcpp, 9},
    {"_fastTopics_altsqp_update_loadings_sparse_rcpp", (DL_FUNC) &_fastTopics_altsqp_update_loadings_sparse_rcpp, 9},
    {"_fastTopics_altsqp_update_loadings_rcpp_parallel", (DL_FUNC) &_fastTopics_altsqp_update_loadings_rcpp_parallel, 9},
    {"_fastTopics_altsqp_update_loadings_rcpp_parallel_sparse", (DL_FUNC) &_fastTopics_altsqp_update_loadings_rcpp_parallel_sparse, 9},
    {"_fastTopics_ccd_rcpp", (DL_FUNC) &_fastTopics_ccd_rcpp, 7},
    {"_fastTopics_cost_rcpp", (DL_FUNC) &_fastTopics_cost_rcpp, 5},
    {"_fastTopics_cost_sparse_rcpp", (DL_FUNC) &_fastTopics_cost_sparse_rcpp, 5},
    {"_fastTopics_mixem_rcpp", (DL_FUNC) &_fastTopics_mixem_rcpp, 4},
    {"_fastTopics_mixsqp_rcpp", (DL_FUNC) &_fastTopics_mixsqp_rcpp, 7},
    {"_fastTopics_pnmfem_update_factors_rcpp", (DL_FUNC) &_fastTopics_pnmfem_update_factors_rcpp, 4},
    {"_fastTopics_pnmfem_update_factors_sparse_rcpp", (DL_FUNC) &_fastTopics_pnmfem_update_factors_sparse_rcpp, 4},
    {"_fastTopics_poismixem_rcpp", (DL_FUNC) &_fastTopics_poismixem_rcpp, 4},
    {NULL, NULL, 0}
};

RcppExport void R_init_fastTopics(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
