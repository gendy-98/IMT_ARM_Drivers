#ifndef RCC_PRIVATE_H
#define RCC_PRIVATE_H

//regester definitions

#define RCC_BASE        *((volatile u32 *)0x4002_1000)

#define RCC_CR          *((volatile u32 *)0x4002_1000)
#define RCC_CFGR        *((volatile u32 *)0x4002_1004)
#define RCC_CIR         *((volatile u32 *)0x4002_1008)
#define RCC_APB2RSTR    *((volatile u32 *)0x4002_100C)
#define RCC_APB1RSTS    *((volatile u32 *)0x4002_1010)
#define RCC_AHBENR      *((volatile u32 *)0x4002_1014)
#define RCC_APB2ENR     *((volatile u32 *)0x4002_1018)
#define RCC_APB1ENR     *((volatile u32 *)0x4002_101C)
#define RCC_BDCR        *((volatile u32 *)0x4002_1020)
#define RCC_CSR         *((volatile u32 *)0x4002_1024)




#endif