/*
 * @todo sample.nc (output of bi sample) has a time variable but it is blank
 * NOTE: we can get the time from filter.nc but it would be good to have it in here.
 *
 * @todo smc^2 output has an additional time slot at the end that is blank for
 * all variables.
 *
 * @todo smc^2 output has variables for states (e.g. alpha, P, Z) but they are
 * blank (fixed by removing D_VARS and R_VARS from SMC2 output).
 *
 * @todo ANPF filter.nc output has some garbage values (unaffected by recent
 * refactorization).
 *
 * @todo simulate and filter put P parameter values into the results file
 * instead of one.
 * */