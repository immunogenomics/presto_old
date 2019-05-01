// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "wilcoxauc_types.h"
#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// cpp_sumGroups_dgc
mat cpp_sumGroups_dgc(const vec& x, const uvec& p, const vec& i, unsigned ncol, const uvec& groups, unsigned ngroups);
RcppExport SEXP _wilcoxauc_cpp_sumGroups_dgc(SEXP xSEXP, SEXP pSEXP, SEXP iSEXP, SEXP ncolSEXP, SEXP groupsSEXP, SEXP ngroupsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const vec& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const uvec& >::type p(pSEXP);
    Rcpp::traits::input_parameter< const vec& >::type i(iSEXP);
    Rcpp::traits::input_parameter< unsigned >::type ncol(ncolSEXP);
    Rcpp::traits::input_parameter< const uvec& >::type groups(groupsSEXP);
    Rcpp::traits::input_parameter< unsigned >::type ngroups(ngroupsSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_sumGroups_dgc(x, p, i, ncol, groups, ngroups));
    return rcpp_result_gen;
END_RCPP
}
// cpp_sumGroups_dgc_T
mat cpp_sumGroups_dgc_T(const vec& x, const vec& p, const vec& i, int ncol, int nrow, const uvec& groups, int ngroups);
RcppExport SEXP _wilcoxauc_cpp_sumGroups_dgc_T(SEXP xSEXP, SEXP pSEXP, SEXP iSEXP, SEXP ncolSEXP, SEXP nrowSEXP, SEXP groupsSEXP, SEXP ngroupsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const vec& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const vec& >::type p(pSEXP);
    Rcpp::traits::input_parameter< const vec& >::type i(iSEXP);
    Rcpp::traits::input_parameter< int >::type ncol(ncolSEXP);
    Rcpp::traits::input_parameter< int >::type nrow(nrowSEXP);
    Rcpp::traits::input_parameter< const uvec& >::type groups(groupsSEXP);
    Rcpp::traits::input_parameter< int >::type ngroups(ngroupsSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_sumGroups_dgc_T(x, p, i, ncol, nrow, groups, ngroups));
    return rcpp_result_gen;
END_RCPP
}
// cpp_sumGroups_dense
mat cpp_sumGroups_dense(const mat& X, const uvec& groups, unsigned ngroups);
RcppExport SEXP _wilcoxauc_cpp_sumGroups_dense(SEXP XSEXP, SEXP groupsSEXP, SEXP ngroupsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const uvec& >::type groups(groupsSEXP);
    Rcpp::traits::input_parameter< unsigned >::type ngroups(ngroupsSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_sumGroups_dense(X, groups, ngroups));
    return rcpp_result_gen;
END_RCPP
}
// cpp_sumGroups_dense_T
mat cpp_sumGroups_dense_T(const mat& X, const uvec& groups, unsigned ngroups);
RcppExport SEXP _wilcoxauc_cpp_sumGroups_dense_T(SEXP XSEXP, SEXP groupsSEXP, SEXP ngroupsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const uvec& >::type groups(groupsSEXP);
    Rcpp::traits::input_parameter< unsigned >::type ngroups(ngroupsSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_sumGroups_dense_T(X, groups, ngroups));
    return rcpp_result_gen;
END_RCPP
}
// cpp_nnzeroGroups_dgc
mat cpp_nnzeroGroups_dgc(const uvec& p, const vec& i, unsigned ncol, const uvec& groups, unsigned ngroups);
RcppExport SEXP _wilcoxauc_cpp_nnzeroGroups_dgc(SEXP pSEXP, SEXP iSEXP, SEXP ncolSEXP, SEXP groupsSEXP, SEXP ngroupsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const uvec& >::type p(pSEXP);
    Rcpp::traits::input_parameter< const vec& >::type i(iSEXP);
    Rcpp::traits::input_parameter< unsigned >::type ncol(ncolSEXP);
    Rcpp::traits::input_parameter< const uvec& >::type groups(groupsSEXP);
    Rcpp::traits::input_parameter< unsigned >::type ngroups(ngroupsSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_nnzeroGroups_dgc(p, i, ncol, groups, ngroups));
    return rcpp_result_gen;
END_RCPP
}
// cpp_in_place_rank_mean
int cpp_in_place_rank_mean(vec& v_temp, int idx_begin, int idx_end);
RcppExport SEXP _wilcoxauc_cpp_in_place_rank_mean(SEXP v_tempSEXP, SEXP idx_beginSEXP, SEXP idx_endSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< vec& >::type v_temp(v_tempSEXP);
    Rcpp::traits::input_parameter< int >::type idx_begin(idx_beginSEXP);
    Rcpp::traits::input_parameter< int >::type idx_end(idx_endSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_in_place_rank_mean(v_temp, idx_begin, idx_end));
    return rcpp_result_gen;
END_RCPP
}
// cpp_rank_matrix_dgc
int cpp_rank_matrix_dgc(vec& x, const vec& p, int nrow, int ncol);
RcppExport SEXP _wilcoxauc_cpp_rank_matrix_dgc(SEXP xSEXP, SEXP pSEXP, SEXP nrowSEXP, SEXP ncolSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< vec& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const vec& >::type p(pSEXP);
    Rcpp::traits::input_parameter< int >::type nrow(nrowSEXP);
    Rcpp::traits::input_parameter< int >::type ncol(ncolSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_rank_matrix_dgc(x, p, nrow, ncol));
    return rcpp_result_gen;
END_RCPP
}
// cpp_rank_matrix_dense
mat cpp_rank_matrix_dense(mat& X);
RcppExport SEXP _wilcoxauc_cpp_rank_matrix_dense(SEXP XSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< mat& >::type X(XSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_rank_matrix_dense(X));
    return rcpp_result_gen;
END_RCPP
}
// cpp_nnzeroGroups_dgc_T
mat cpp_nnzeroGroups_dgc_T(const vec& p, const vec& i, int ncol, int nrow, const uvec& groups, int ngroups);
RcppExport SEXP _wilcoxauc_cpp_nnzeroGroups_dgc_T(SEXP pSEXP, SEXP iSEXP, SEXP ncolSEXP, SEXP nrowSEXP, SEXP groupsSEXP, SEXP ngroupsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const vec& >::type p(pSEXP);
    Rcpp::traits::input_parameter< const vec& >::type i(iSEXP);
    Rcpp::traits::input_parameter< int >::type ncol(ncolSEXP);
    Rcpp::traits::input_parameter< int >::type nrow(nrowSEXP);
    Rcpp::traits::input_parameter< const uvec& >::type groups(groupsSEXP);
    Rcpp::traits::input_parameter< int >::type ngroups(ngroupsSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_nnzeroGroups_dgc_T(p, i, ncol, nrow, groups, ngroups));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_wilcoxauc_cpp_sumGroups_dgc", (DL_FUNC) &_wilcoxauc_cpp_sumGroups_dgc, 6},
    {"_wilcoxauc_cpp_sumGroups_dgc_T", (DL_FUNC) &_wilcoxauc_cpp_sumGroups_dgc_T, 7},
    {"_wilcoxauc_cpp_sumGroups_dense", (DL_FUNC) &_wilcoxauc_cpp_sumGroups_dense, 3},
    {"_wilcoxauc_cpp_sumGroups_dense_T", (DL_FUNC) &_wilcoxauc_cpp_sumGroups_dense_T, 3},
    {"_wilcoxauc_cpp_nnzeroGroups_dgc", (DL_FUNC) &_wilcoxauc_cpp_nnzeroGroups_dgc, 5},
    {"_wilcoxauc_cpp_in_place_rank_mean", (DL_FUNC) &_wilcoxauc_cpp_in_place_rank_mean, 3},
    {"_wilcoxauc_cpp_rank_matrix_dgc", (DL_FUNC) &_wilcoxauc_cpp_rank_matrix_dgc, 4},
    {"_wilcoxauc_cpp_rank_matrix_dense", (DL_FUNC) &_wilcoxauc_cpp_rank_matrix_dense, 1},
    {"_wilcoxauc_cpp_nnzeroGroups_dgc_T", (DL_FUNC) &_wilcoxauc_cpp_nnzeroGroups_dgc_T, 6},
    {NULL, NULL, 0}
};

RcppExport void R_init_wilcoxauc(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}