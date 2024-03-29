// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// auctionbf2cpp
List auctionbf2cpp(IntegerMatrix d, int n, IntegerVector pers_to_obj, IntegerVector obj_to_pers, NumericVector price, NumericVector profit, int neps, NumericVector epsvec);
RcppExport SEXP _ttbary_auctionbf2cpp(SEXP dSEXP, SEXP nSEXP, SEXP pers_to_objSEXP, SEXP obj_to_persSEXP, SEXP priceSEXP, SEXP profitSEXP, SEXP nepsSEXP, SEXP epsvecSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerMatrix >::type d(dSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type pers_to_obj(pers_to_objSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type obj_to_pers(obj_to_persSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type price(priceSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type profit(profitSEXP);
    Rcpp::traits::input_parameter< int >::type neps(nepsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type epsvec(epsvecSEXP);
    rcpp_result_gen = Rcpp::wrap(auctionbf2cpp(d, n, pers_to_obj, obj_to_pers, price, profit, neps, epsvec));
    return rcpp_result_gen;
END_RCPP
}
// optimClusterCenterEuclid2
void optimClusterCenterEuclid2(NumericVector clustx, NumericVector clusty, double& centerx, double& centery);
RcppExport SEXP _ttbary_optimClusterCenterEuclid2(SEXP clustxSEXP, SEXP clustySEXP, SEXP centerxSEXP, SEXP centerySEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type clustx(clustxSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type clusty(clustySEXP);
    Rcpp::traits::input_parameter< double& >::type centerx(centerxSEXP);
    Rcpp::traits::input_parameter< double& >::type centery(centerySEXP);
    optimClusterCenterEuclid2(clustx, clusty, centerx, centery);
    return R_NilValue;
END_RCPP
}
// kMeansBary
List kMeansBary(NumericVector zetax, NumericVector zetay, NumericMatrix ppmatx, NumericMatrix ppmaty, double penalty, int add_del, int N, double eps, bool exact, int verbose);
RcppExport SEXP _ttbary_kMeansBary(SEXP zetaxSEXP, SEXP zetaySEXP, SEXP ppmatxSEXP, SEXP ppmatySEXP, SEXP penaltySEXP, SEXP add_delSEXP, SEXP NSEXP, SEXP epsSEXP, SEXP exactSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type zetax(zetaxSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type zetay(zetaySEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type ppmatx(ppmatxSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type ppmaty(ppmatySEXP);
    Rcpp::traits::input_parameter< double >::type penalty(penaltySEXP);
    Rcpp::traits::input_parameter< int >::type add_del(add_delSEXP);
    Rcpp::traits::input_parameter< int >::type N(NSEXP);
    Rcpp::traits::input_parameter< double >::type eps(epsSEXP);
    Rcpp::traits::input_parameter< bool >::type exact(exactSEXP);
    Rcpp::traits::input_parameter< int >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(kMeansBary(zetax, zetay, ppmatx, ppmaty, penalty, add_del, N, eps, exact, verbose));
    return rcpp_result_gen;
END_RCPP
}
// sampleFromData
List sampleFromData(int n, NumericVector ppvecx, NumericVector ppvecy);
RcppExport SEXP _ttbary_sampleFromData(SEXP nSEXP, SEXP ppvecxSEXP, SEXP ppvecySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type ppvecx(ppvecxSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type ppvecy(ppvecySEXP);
    rcpp_result_gen = Rcpp::wrap(sampleFromData(n, ppvecx, ppvecy));
    return rcpp_result_gen;
END_RCPP
}
// kMeansBaryEps
List kMeansBaryEps(NumericVector epsvec, NumericVector zetax, NumericVector zetay, NumericMatrix ppmatx, NumericMatrix ppmaty, double penalty, int add_del, IntegerVector relaxationVars, int N, double eps, bool exact, int verbose);
RcppExport SEXP _ttbary_kMeansBaryEps(SEXP epsvecSEXP, SEXP zetaxSEXP, SEXP zetaySEXP, SEXP ppmatxSEXP, SEXP ppmatySEXP, SEXP penaltySEXP, SEXP add_delSEXP, SEXP relaxationVarsSEXP, SEXP NSEXP, SEXP epsSEXP, SEXP exactSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type epsvec(epsvecSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type zetax(zetaxSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type zetay(zetaySEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type ppmatx(ppmatxSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type ppmaty(ppmatySEXP);
    Rcpp::traits::input_parameter< double >::type penalty(penaltySEXP);
    Rcpp::traits::input_parameter< int >::type add_del(add_delSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type relaxationVars(relaxationVarsSEXP);
    Rcpp::traits::input_parameter< int >::type N(NSEXP);
    Rcpp::traits::input_parameter< double >::type eps(epsSEXP);
    Rcpp::traits::input_parameter< bool >::type exact(exactSEXP);
    Rcpp::traits::input_parameter< int >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(kMeansBaryEps(epsvec, zetax, zetay, ppmatx, ppmaty, penalty, add_del, relaxationVars, N, eps, exact, verbose));
    return rcpp_result_gen;
END_RCPP
}
// DreznerEuclid2
List DreznerEuclid2(NumericVector clustx, NumericVector clusty, double penp, bool reduction, bool aleph);
RcppExport SEXP _ttbary_DreznerEuclid2(SEXP clustxSEXP, SEXP clustySEXP, SEXP penpSEXP, SEXP reductionSEXP, SEXP alephSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type clustx(clustxSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type clusty(clustySEXP);
    Rcpp::traits::input_parameter< double >::type penp(penpSEXP);
    Rcpp::traits::input_parameter< bool >::type reduction(reductionSEXP);
    Rcpp::traits::input_parameter< bool >::type aleph(alephSEXP);
    rcpp_result_gen = Rcpp::wrap(DreznerEuclid2(clustx, clusty, penp, reduction, aleph));
    return rcpp_result_gen;
END_RCPP
}
// heuristicCenter2
List heuristicCenter2(NumericVector clustx, NumericVector clusty, double centerx, double centery, double penp, bool bounds);
RcppExport SEXP _ttbary_heuristicCenter2(SEXP clustxSEXP, SEXP clustySEXP, SEXP centerxSEXP, SEXP centerySEXP, SEXP penpSEXP, SEXP boundsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type clustx(clustxSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type clusty(clustySEXP);
    Rcpp::traits::input_parameter< double >::type centerx(centerxSEXP);
    Rcpp::traits::input_parameter< double >::type centery(centerySEXP);
    Rcpp::traits::input_parameter< double >::type penp(penpSEXP);
    Rcpp::traits::input_parameter< bool >::type bounds(boundsSEXP);
    rcpp_result_gen = Rcpp::wrap(heuristicCenter2(clustx, clusty, centerx, centery, penp, bounds));
    return rcpp_result_gen;
END_RCPP
}
// kMeansBaryNet
List kMeansBaryNet(NumericMatrix dpath, IntegerVector zeta, IntegerMatrix ppmat, double penalty, int add_del, int N, double eps);
RcppExport SEXP _ttbary_kMeansBaryNet(SEXP dpathSEXP, SEXP zetaSEXP, SEXP ppmatSEXP, SEXP penaltySEXP, SEXP add_delSEXP, SEXP NSEXP, SEXP epsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type dpath(dpathSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type zeta(zetaSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type ppmat(ppmatSEXP);
    Rcpp::traits::input_parameter< double >::type penalty(penaltySEXP);
    Rcpp::traits::input_parameter< int >::type add_del(add_delSEXP);
    Rcpp::traits::input_parameter< int >::type N(NSEXP);
    Rcpp::traits::input_parameter< double >::type eps(epsSEXP);
    rcpp_result_gen = Rcpp::wrap(kMeansBaryNet(dpath, zeta, ppmat, penalty, add_del, N, eps));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_ttbary_auctionbf2cpp", (DL_FUNC) &_ttbary_auctionbf2cpp, 8},
    {"_ttbary_optimClusterCenterEuclid2", (DL_FUNC) &_ttbary_optimClusterCenterEuclid2, 4},
    {"_ttbary_kMeansBary", (DL_FUNC) &_ttbary_kMeansBary, 10},
    {"_ttbary_sampleFromData", (DL_FUNC) &_ttbary_sampleFromData, 3},
    {"_ttbary_kMeansBaryEps", (DL_FUNC) &_ttbary_kMeansBaryEps, 12},
    {"_ttbary_DreznerEuclid2", (DL_FUNC) &_ttbary_DreznerEuclid2, 5},
    {"_ttbary_heuristicCenter2", (DL_FUNC) &_ttbary_heuristicCenter2, 6},
    {"_ttbary_kMeansBaryNet", (DL_FUNC) &_ttbary_kMeansBaryNet, 7},
    {NULL, NULL, 0}
};

RcppExport void R_init_ttbary(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
