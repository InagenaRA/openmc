#include "finalize.h"

#include "message_passing.h"

void openmc_free_bank()
{
#ifdef OPENMC_MPI
  MPI_Type_free(&openmc::mpi::bank);
#endif
}
