

#include "01-LIB/01-STD_TYPES/STD_TYPES.h"
#include "01-LIB/02-BIT_MATH/BIT_MATH.h"


#include "RCC_interface.h"
#include "RCC_private.h"
#include "RCC_config.h"


void RCC_voidEnableClock(u8 Copy_u8BusID, u8 Copy_u8PerID)
{
    if (Copy_u8PerID <= 31)
    {
        switch (Copy_u8BusID)
        {
        case R:
            /* code */
            break;
        
        default:
            break;
        }
    }
    
}
