// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#ifndef RCPP_bsvarTVPs_RCPPEXPORTS_H_GEN_
#define RCPP_bsvarTVPs_RCPPEXPORTS_H_GEN_

#include <RcppArmadillo.h>
#include <Rcpp.h>

namespace bsvarTVPs {

    using namespace Rcpp;

    namespace {
        void validateSignature(const char* sig) {
            Rcpp::Function require = Rcpp::Environment::base_env()["require"];
            require("bsvarTVPs", Rcpp::Named("quietly") = true);
            typedef int(*Ptr_validate)(const char*);
            static Ptr_validate p_validate = (Ptr_validate)
                R_GetCCallable("bsvarTVPs", "_bsvarTVPs_RcppExport_validate");
            if (!p_validate(sig)) {
                throw Rcpp::function_not_exported(
                    "C++ function with signature '" + std::string(sig) + "' not found in bsvarTVPs");
            }
        }
    }

    inline Rcpp::List bsvar_s4_sv_cpp(const int& SS, const arma::mat& Y, const arma::mat& X, const Rcpp::List& prior, const arma::field<arma::mat>& VB, const Rcpp::List& starting_values, const int thin = 100) {
        typedef SEXP(*Ptr_bsvar_s4_sv_cpp)(SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_bsvar_s4_sv_cpp p_bsvar_s4_sv_cpp = NULL;
        if (p_bsvar_s4_sv_cpp == NULL) {
            validateSignature("Rcpp::List(*bsvar_s4_sv_cpp)(const int&,const arma::mat&,const arma::mat&,const Rcpp::List&,const arma::field<arma::mat>&,const Rcpp::List&,const int)");
            p_bsvar_s4_sv_cpp = (Ptr_bsvar_s4_sv_cpp)R_GetCCallable("bsvarTVPs", "_bsvarTVPs_bsvar_s4_sv_cpp");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_bsvar_s4_sv_cpp(Shield<SEXP>(Rcpp::wrap(SS)), Shield<SEXP>(Rcpp::wrap(Y)), Shield<SEXP>(Rcpp::wrap(X)), Shield<SEXP>(Rcpp::wrap(prior)), Shield<SEXP>(Rcpp::wrap(VB)), Shield<SEXP>(Rcpp::wrap(starting_values)), Shield<SEXP>(Rcpp::wrap(thin)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<Rcpp::List >(rcpp_result_gen);
    }

    inline void sample_B_heterosk1_s4(arma::mat& aux_B, arma::ivec& aux_SL, const arma::mat& aux_A, const arma::vec& aux_hyper, const arma::mat& aux_sigma, const arma::mat& Y, const arma::mat& X, const Rcpp::List& prior, const arma::field<arma::mat>& VBL) {
        typedef SEXP(*Ptr_sample_B_heterosk1_s4)(SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_sample_B_heterosk1_s4 p_sample_B_heterosk1_s4 = NULL;
        if (p_sample_B_heterosk1_s4 == NULL) {
            validateSignature("void(*sample_B_heterosk1_s4)(arma::mat&,arma::ivec&,const arma::mat&,const arma::vec&,const arma::mat&,const arma::mat&,const arma::mat&,const Rcpp::List&,const arma::field<arma::mat>&)");
            p_sample_B_heterosk1_s4 = (Ptr_sample_B_heterosk1_s4)R_GetCCallable("bsvarTVPs", "_bsvarTVPs_sample_B_heterosk1_s4");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_sample_B_heterosk1_s4(Shield<SEXP>(Rcpp::wrap(aux_B)), Shield<SEXP>(Rcpp::wrap(aux_SL)), Shield<SEXP>(Rcpp::wrap(aux_A)), Shield<SEXP>(Rcpp::wrap(aux_hyper)), Shield<SEXP>(Rcpp::wrap(aux_sigma)), Shield<SEXP>(Rcpp::wrap(Y)), Shield<SEXP>(Rcpp::wrap(X)), Shield<SEXP>(Rcpp::wrap(prior)), Shield<SEXP>(Rcpp::wrap(VBL)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
    }

    inline void sample_hyperparameters_s4(arma::vec& aux_hyper, const arma::mat& aux_B, const arma::mat& aux_A, const arma::field<arma::mat>& VB, const arma::ivec& aux_SL, const Rcpp::List& prior) {
        typedef SEXP(*Ptr_sample_hyperparameters_s4)(SEXP,SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_sample_hyperparameters_s4 p_sample_hyperparameters_s4 = NULL;
        if (p_sample_hyperparameters_s4 == NULL) {
            validateSignature("void(*sample_hyperparameters_s4)(arma::vec&,const arma::mat&,const arma::mat&,const arma::field<arma::mat>&,const arma::ivec&,const Rcpp::List&)");
            p_sample_hyperparameters_s4 = (Ptr_sample_hyperparameters_s4)R_GetCCallable("bsvarTVPs", "_bsvarTVPs_sample_hyperparameters_s4");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_sample_hyperparameters_s4(Shield<SEXP>(Rcpp::wrap(aux_hyper)), Shield<SEXP>(Rcpp::wrap(aux_B)), Shield<SEXP>(Rcpp::wrap(aux_A)), Shield<SEXP>(Rcpp::wrap(VB)), Shield<SEXP>(Rcpp::wrap(aux_SL)), Shield<SEXP>(Rcpp::wrap(prior)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
    }

}

#endif // RCPP_bsvarTVPs_RCPPEXPORTS_H_GEN_
