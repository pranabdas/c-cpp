#include <stdio.h>
#include <mpi.h>
#include <string.h>

int main(int argc, char *argv[])
{
  char message[100];
  int proc_rank, cluster_size, message_len;
  MPI_Status status;

  MPI_Init(&argc, &argv);
  MPI_Comm_size(MPI_COMM_WORLD, &cluster_size);
  MPI_Comm_rank(MPI_COMM_WORLD, &proc_rank);

  strcpy(message, "Hello, today is a beautiful day.");
  message_len = strlen(message);

  if (proc_rank == 0)
  {
    printf("Process: %d\nI am sending following message to process 1:\n%s\n\n", proc_rank, message);
    MPI_Send(message, message_len, MPI_CHAR, 1, 99, MPI_COMM_WORLD);
    // int MPI_Send(const void *buf, int count, MPI_Datatype datatype, int dest, int tag, MPI_Comm comm)
    // buf: initial address of send buffer (choice)
    // count: number of elements in send buffer (nonnegative integer)
    // datatype: datatype of each send buffer element (handle)
    // dest: rank of destination (integer)
    // tag: message tag (integer)
    // comm: communicator (handle)
  }
  else if (proc_rank == 1)
  {
    strcpy(message, "null");

    MPI_Recv(message, message_len, MPI_CHAR, 0, 99, MPI_COMM_WORLD, &status);
    printf("Process: %d\nI have received following message from process 0:\n%s\n", proc_rank, message);
  }

  MPI_Finalize();
  return 0;
}
