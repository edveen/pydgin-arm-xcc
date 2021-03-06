/* { dg-do compile } */
/* { dg-options "-O1 -fopenmp -fdump-tree-final_cleanup" } */

int a[10];
int foo (void)
{
    int i;
#pragma omp parallel for schedule(runtime)
    for (i = 0; i < 10; i++)
      a[i] = i;
#pragma omp parallel
#pragma omp for schedule(runtime)
    for (i = 0; i < 10; i++)
      a[i] = 10 - i;
#pragma omp parallel
      {
#pragma omp for schedule(runtime)
	for (i = 0; i < 10; i++)
	  a[i] = i;
      }
}

/* { dg-final { scan-tree-dump-times "__builtin_GOMP_parallel_loop_runtime_start" 3 "final_cleanup" } } */
/* { dg-final { cleanup-tree-dump "final_cleanup" } } */
