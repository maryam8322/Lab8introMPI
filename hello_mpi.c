#include <stdio.h>
#include <string.h>
#include <mpi.h>

int main(void) {
  int MyID; 
  //printf("L1: Hello MPI %d!\n", MyID);
  
  MPI_Init(NULL, NULL);
  MPI_Comm_rank(MPI_COMM_WORLD, &MyID);
  printf("L2: Hello MPI %d! \n", MyID);

  MPI_Finalize();
  //printf("L3: Hello MPI %d!\n", MyID);
  return 0;
}
