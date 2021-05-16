/* Produced by CVXGEN, 2011-10-19 15:59:19 -0700.  */
/* CVXGEN is Copyright (C) 2006-2011 Jacob Mattingley, jem@cvxgen.com. */
/* The code in this file is Copyright (C) 2006-2011 Jacob Mattingley. */
/* CVXGEN, or solvers produced by CVXGEN, cannot be used for commercial */
/* applications without prior written permission from Jacob Mattingley. */

/* Filename: csolve.c. */
/* Description: mex-able file for running cvxgen solver. */

#include "mex.h"
#include "solver.h"

Vars vars;
Params params;
Workspace work;
Settings settings;
void mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[]) {
  int i, j;
  mxArray *xm, *cell, *xm_cell;
  double *src;
  double *dest;
  double *dest_cell;
  int valid_vars;
  int steps;
  int this_var_errors;
  int warned_diags;
  int prepare_for_c = 0;
  int extra_solves;
  const char *status_names[] = {"optval", "gap", "steps", "converged"};
  mwSize dims1x1of1[1] = {1};
  mwSize dims[1];

  const char *var_names[] = {"u"};
  const int num_var_names = 1;

  /* Avoid compiler warnings of unused variables by using a dummy assignment. */
  warned_diags = j = 0;
  extra_solves = 0;

  set_defaults();

  /* Check we got the right number of arguments. */
  if (nrhs == 0)
    mexErrMsgTxt("Not enough arguments: You need to specify at least the parameters.\n");

  if (nrhs > 1) {
    /* Assume that the second argument is the settings. */
    if (mxGetField(prhs[1], 0, "eps") != NULL)
      settings.eps = *mxGetPr(mxGetField(prhs[1], 0, "eps"));

    if (mxGetField(prhs[1], 0, "max_iters") != NULL)
      settings.max_iters = *mxGetPr(mxGetField(prhs[1], 0, "max_iters"));

    if (mxGetField(prhs[1], 0, "refine_steps") != NULL)
      settings.refine_steps = *mxGetPr(mxGetField(prhs[1], 0, "refine_steps"));

    if (mxGetField(prhs[1], 0, "verbose") != NULL)
      settings.verbose = *mxGetPr(mxGetField(prhs[1], 0, "verbose"));

    if (mxGetField(prhs[1], 0, "better_start") != NULL)
      settings.better_start = *mxGetPr(mxGetField(prhs[1], 0, "better_start"));

    if (mxGetField(prhs[1], 0, "verbose_refinement") != NULL)
      settings.verbose_refinement = *mxGetPr(mxGetField(prhs[1], 0,
            "verbose_refinement"));

    if (mxGetField(prhs[1], 0, "debug") != NULL)
      settings.debug = *mxGetPr(mxGetField(prhs[1], 0, "debug"));

    if (mxGetField(prhs[1], 0, "kkt_reg") != NULL)
      settings.kkt_reg = *mxGetPr(mxGetField(prhs[1], 0, "kkt_reg"));

    if (mxGetField(prhs[1], 0, "s_init") != NULL)
      settings.s_init = *mxGetPr(mxGetField(prhs[1], 0, "s_init"));

    if (mxGetField(prhs[1], 0, "z_init") != NULL)
      settings.z_init = *mxGetPr(mxGetField(prhs[1], 0, "z_init"));

    if (mxGetField(prhs[1], 0, "resid_tol") != NULL)
      settings.resid_tol = *mxGetPr(mxGetField(prhs[1], 0, "resid_tol"));

    if (mxGetField(prhs[1], 0, "extra_solves") != NULL)
      extra_solves = *mxGetPr(mxGetField(prhs[1], 0, "extra_solves"));
    else
      extra_solves = 0;

    if (mxGetField(prhs[1], 0, "prepare_for_c") != NULL)
      prepare_for_c = *mxGetPr(mxGetField(prhs[1], 0, "prepare_for_c"));
  }

  valid_vars = 0;

  this_var_errors = 0;

  xm = mxGetField(prhs[0], 0, "PM");

  if (xm == NULL) {
    printf("could not find params.PM.\n");
  } else {
    if (!((mxGetM(xm) == 30) && (mxGetN(xm) == 30))) {
      printf("PM must be size (30,30), not (%d,%d).\n", mxGetM(xm), mxGetN(xm));
      this_var_errors++;
    }

    if (mxIsComplex(xm)) {
      printf("parameter PM must be real.\n");
      this_var_errors++;
    }

    if (!mxIsClass(xm, "double")) {
      printf("parameter PM must be a full matrix of doubles.\n");
      this_var_errors++;
    }

    if (mxIsSparse(xm)) {
      printf("parameter PM must be a full matrix.\n");
      this_var_errors++;
    }

    if (this_var_errors == 0) {
      dest = params.PM;
      src = mxGetPr(xm);

      for (i = 0; i < 900; i++)
        *dest++ = *src++;

      valid_vars++;
    }
  }

  this_var_errors = 0;

  xm = mxGetField(prhs[0], 0, "S");

  if (xm == NULL) {
    printf("could not find params.S.\n");
  } else {
    if (!((mxGetM(xm) == 30) && (mxGetN(xm) == 30))) {
      printf("S must be size (30,30), not (%d,%d).\n", mxGetM(xm), mxGetN(xm));
      this_var_errors++;
    }

    if (mxIsComplex(xm)) {
      printf("parameter S must be real.\n");
      this_var_errors++;
    }

    if (!mxIsClass(xm, "double")) {
      printf("parameter S must be a full matrix of doubles.\n");
      this_var_errors++;
    }

    if (mxIsSparse(xm)) {
      printf("parameter S must be a full matrix.\n");
      this_var_errors++;
    }

    if (this_var_errors == 0) {
      dest = params.S;
      src = mxGetPr(xm);

      warned_diags = 0;
      for (i = 0; i < 30; i++) {
        for (j = 0; j < 30; j++) {
          if (i == j) {
            *dest++ = *src;
          } else if (!warned_diags && (*src != 0)) {
            printf("\n!!! Warning: ignoring off-diagonal elements in S !!!\n\n");
            warned_diags = 1;
          }
          src++;
        }
      }
      valid_vars++;
    }
  }

  this_var_errors = 0;

  xm = mxGetField(prhs[0], 0, "Sigma");

  if (xm == NULL) {
    printf("could not find params.Sigma.\n");
  } else {
    if (!((mxGetM(xm) == 30) && (mxGetN(xm) == 30))) {
      printf("Sigma must be size (30,30), not (%d,%d).\n", mxGetM(xm), mxGetN(xm));
      this_var_errors++;
    }

    if (mxIsComplex(xm)) {
      printf("parameter Sigma must be real.\n");
      this_var_errors++;
    }

    if (!mxIsClass(xm, "double")) {
      printf("parameter Sigma must be a full matrix of doubles.\n");
      this_var_errors++;
    }

    if (mxIsSparse(xm)) {
      printf("parameter Sigma must be a full matrix.\n");
      this_var_errors++;
    }

    if (this_var_errors == 0) {
      dest = params.Sigma;
      src = mxGetPr(xm);

      for (i = 0; i < 900; i++)
        *dest++ = *src++;

      valid_vars++;
    }
  }

  this_var_errors = 0;

  xm = mxGetField(prhs[0], 0, "kappa");

  if (xm == NULL) {
    printf("could not find params.kappa.\n");
  } else {
    if (!((mxGetM(xm) == 30) && (mxGetN(xm) == 1))) {
      printf("kappa must be size (30,1), not (%d,%d).\n", mxGetM(xm), mxGetN(xm));
      this_var_errors++;
    }

    if (mxIsComplex(xm)) {
      printf("parameter kappa must be real.\n");
      this_var_errors++;
    }

    if (!mxIsClass(xm, "double")) {
      printf("parameter kappa must be a full matrix of doubles.\n");
      this_var_errors++;
    }

    if (mxIsSparse(xm)) {
      printf("parameter kappa must be a full matrix.\n");
      this_var_errors++;
    }

    if (this_var_errors == 0) {
      dest = params.kappa;
      src = mxGetPr(xm);

      for (i = 0; i < 30; i++)
        *dest++ = *src++;

      valid_vars++;
    }
  }

  this_var_errors = 0;

  xm = mxGetField(prhs[0], 0, "lambda");

  if (xm == NULL) {
    printf("could not find params.lambda.\n");
  } else {
    if (!((mxGetM(xm) == 1) && (mxGetN(xm) == 1))) {
      printf("lambda must be size (1,1), not (%d,%d).\n", mxGetM(xm), mxGetN(xm));
      this_var_errors++;
    }

    if (mxIsComplex(xm)) {
      printf("parameter lambda must be real.\n");
      this_var_errors++;
    }

    if (!mxIsClass(xm, "double")) {
      printf("parameter lambda must be a full matrix of doubles.\n");
      this_var_errors++;
    }

    if (mxIsSparse(xm)) {
      printf("parameter lambda must be a full matrix.\n");
      this_var_errors++;
    }

    if (this_var_errors == 0) {
      dest = params.lambda;
      src = mxGetPr(xm);

      for (i = 0; i < 1; i++)
        *dest++ = *src++;

      valid_vars++;
    }
  }

  this_var_errors = 0;

  xm = mxGetField(prhs[0], 0, "pm");

  if (xm == NULL) {
    printf("could not find params.pm.\n");
  } else {
    if (!((mxGetM(xm) == 30) && (mxGetN(xm) == 1))) {
      printf("pm must be size (30,1), not (%d,%d).\n", mxGetM(xm), mxGetN(xm));
      this_var_errors++;
    }

    if (mxIsComplex(xm)) {
      printf("parameter pm must be real.\n");
      this_var_errors++;
    }

    if (!mxIsClass(xm, "double")) {
      printf("parameter pm must be a full matrix of doubles.\n");
      this_var_errors++;
    }

    if (mxIsSparse(xm)) {
      printf("parameter pm must be a full matrix.\n");
      this_var_errors++;
    }

    if (this_var_errors == 0) {
      dest = params.pm;
      src = mxGetPr(xm);

      for (i = 0; i < 30; i++)
        *dest++ = *src++;

      valid_vars++;
    }
  }

  this_var_errors = 0;

  xm = mxGetField(prhs[0], 0, "sh");

  if (xm == NULL) {
    printf("could not find params.sh.\n");
  } else {
    if (!((mxGetM(xm) == 30) && (mxGetN(xm) == 1))) {
      printf("sh must be size (30,1), not (%d,%d).\n", mxGetM(xm), mxGetN(xm));
      this_var_errors++;
    }

    if (mxIsComplex(xm)) {
      printf("parameter sh must be real.\n");
      this_var_errors++;
    }

    if (!mxIsClass(xm, "double")) {
      printf("parameter sh must be a full matrix of doubles.\n");
      this_var_errors++;
    }

    if (mxIsSparse(xm)) {
      printf("parameter sh must be a full matrix.\n");
      this_var_errors++;
    }

    if (this_var_errors == 0) {
      dest = params.sh;
      src = mxGetPr(xm);

      for (i = 0; i < 30; i++)
        *dest++ = *src++;

      valid_vars++;
    }
  }

  this_var_errors = 0;

  xm = mxGetField(prhs[0], 0, "x");

  if (xm == NULL) {
    printf("could not find params.x.\n");
  } else {
    if (!((mxGetM(xm) == 30) && (mxGetN(xm) == 1))) {
      printf("x must be size (30,1), not (%d,%d).\n", mxGetM(xm), mxGetN(xm));
      this_var_errors++;
    }

    if (mxIsComplex(xm)) {
      printf("parameter x must be real.\n");
      this_var_errors++;
    }

    if (!mxIsClass(xm, "double")) {
      printf("parameter x must be a full matrix of doubles.\n");
      this_var_errors++;
    }

    if (mxIsSparse(xm)) {
      printf("parameter x must be a full matrix.\n");
      this_var_errors++;
    }

    if (this_var_errors == 0) {
      dest = params.x;
      src = mxGetPr(xm);

      for (i = 0; i < 30; i++)
        *dest++ = *src++;

      valid_vars++;
    }
  }

  if (valid_vars != 8) {
    printf("Error: %d parameters are invalid.\n", 8 - valid_vars);
    mexErrMsgTxt("invalid parameters found.");
  }

  if (prepare_for_c) {
    printf("settings.prepare_for_c == 1. thus, outputting for C.\n");
    for (i = 0; i < 30; i++)
      printf("  params.sh[%d] = %.6g;\n", i, params.sh[i]);
    for (i = 0; i < 30; i++)
      printf("  params.x[%d] = %.6g;\n", i, params.x[i]);
    for (i = 0; i < 30; i++)
      printf("  params.kappa[%d] = %.6g;\n", i, params.kappa[i]);
    for (i = 0; i < 30; i++)
      printf("  params.S[%d] = %.6g;\n", i, params.S[i]);
    for (i = 0; i < 1; i++)
      printf("  params.lambda[%d] = %.6g;\n", i, params.lambda[i]);
    for (i = 0; i < 900; i++)
      printf("  params.Sigma[%d] = %.6g;\n", i, params.Sigma[i]);
    for (i = 0; i < 900; i++)
      printf("  params.PM[%d] = %.6g;\n", i, params.PM[i]);
    for (i = 0; i < 30; i++)
      printf("  params.pm[%d] = %.6g;\n", i, params.pm[i]);
  }

  /* Perform the actual solve in here. */
  steps = solve();

  /* For profiling purposes, allow extra silent solves if desired. */
  settings.verbose = 0;
  for (i = 0; i < extra_solves; i++)
    solve();

  /* Update the status variables. */
  plhs[1] = mxCreateStructArray(1, dims1x1of1, 4, status_names);

  xm = mxCreateDoubleMatrix(1, 1, mxREAL);
  mxSetField(plhs[1], 0, "optval", xm);
  *mxGetPr(xm) = work.optval;

  xm = mxCreateDoubleMatrix(1, 1, mxREAL);
  mxSetField(plhs[1], 0, "gap", xm);
  *mxGetPr(xm) = work.gap;

  xm = mxCreateDoubleMatrix(1, 1, mxREAL);
  mxSetField(plhs[1], 0, "steps", xm);
  *mxGetPr(xm) = steps;

  xm = mxCreateDoubleMatrix(1, 1, mxREAL);
  mxSetField(plhs[1], 0, "converged", xm);
  *mxGetPr(xm) = work.converged;

  /* Extract variable values. */
  plhs[0] = mxCreateStructArray(1, dims1x1of1, num_var_names, var_names);

  xm = mxCreateDoubleMatrix(30, 1, mxREAL);
  mxSetField(plhs[0], 0, "u", xm);
  dest = mxGetPr(xm);
  src = vars.u;
  for (i = 0; i < 30; i++) {
    *dest++ = *src++;
  }
}
