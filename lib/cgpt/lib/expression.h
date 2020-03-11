/*
  CGPT

  Authors: Christoph Lehner 2020
*/
#define typeis(a,at) ( a->type() == typeid(at<vtype>).name() )
#define castas(a,at) ( ((cgpt_Lattice<at<vtype> >*)a)->l )
#define typeOpen(a,at) if (typeis(a,at)) { auto& l ## a = castas(a,at);
#define typeClose() }

// factor unary
#define BIT_TRANS 1
#define BIT_CONJ 2
#define NUM_FACTOR_UNARY 4

// term unary
#define BIT_SPINTRACE 1
#define BIT_COLORTRACE 2

#include "expression/unary.h"
#include "expression/mul.h"
#include "expression/linear_combination.h"
#include "expression/eval.h"
