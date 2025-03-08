#include "stdio.h"

int	    is_power_of_2(unsigned int n)
{
    if (n == 0)
        return (0);
    /*
    3lach drna n > 1 :Si n est une puissance de 2, ila b9ina kndivisiwhe 3la 
    2 4adi ikhroje lina wa7de flakahre 
    */
    while (n > 1)
    {
        if (n % 2 == 0)
            n = n/ 2;
        else 
            return(0);
    }
    return (1);
}

// int	main(void)
// {
// 	printf("%d\n", is_power_of_2(1024));
// 	printf("%d\n", is_power_of_2(17));
// 	printf("%d\n", is_power_of_2(0));
// 	printf("%d\n", is_power_of_2(1));
// 	printf("%d\n", is_power_of_2(2));
// }