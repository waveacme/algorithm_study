#include <stdlib.h>

static int get_random_num(int min, int max)
{
        //use pid as seed
        srand((int)getpid());

        return rand()%(max-min+1) + min;
}
