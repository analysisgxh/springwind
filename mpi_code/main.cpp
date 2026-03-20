#include <iostream>
#include <mpi.h>

int main(int argc, char** argv) {
    MPI_Init(&argc, &argv); // 初始化
m
    int world_size, world_rank;
    MPI_Comm_size(MPI_COMM_WORLD, &world_size); // 获取总进程数
    MPI_Comm_rank(MPI_COMM_WORLD, &world_rank); // 获取当前进程 Rank

    char processor_name[MPI_MAX_PROCESSOR_NAME];
    int name_len;
    MPI_Get_processor_name(processor_name, &name_len);

    std::printf("Hello from %s, rank %d out of %d\n", processor_name, world_rank, world_size);

    MPI_Finalize(); // 结束
    return 0;
}