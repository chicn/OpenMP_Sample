//
// Created by Chihiro on 2017/10/10.
//

#include <iostream>
#include "omp.h"

void hello()
{
    int my_rank = omp_get_thread_num();
    int thread_count = omp_get_num_threads();

//    std::cout << "hello from rank " << my_rank << " of " << thread_count << std::endl;
    printf("hello from rank %d of %d \n",my_rank,thread_count);
}

int main() {

    int thread_count=12;
#	pragma omp parallel num_threads(thread_count)
    hello();

    return 0;
}