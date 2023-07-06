#include <stdio.h>
#include <mpi.h>

int main(int argc, char **argv)
{
  int process_rank, num_procs, namelen;
  char cluster_name[MPI_MAX_PROCESSOR_NAME];

  MPI_Init(&argc, &argv);
  MPI_Comm_size(MPI_COMM_WORLD, &num_procs);
  MPI_Comm_rank(MPI_COMM_WORLD, &process_rank);
  MPI_Get_processor_name(cluster_name, &namelen);

  printf("Hello from process %d of %d on %s\n", process_rank, num_procs, cluster_name);

  MPI_Finalize();
  return 0;
}
