                
#define PERIPH_BASE ((unsigned int)0x40000000)
#define APB2PERIPH_BASE (PERIPH_BASE + 0x10000)
#define RCC_APB2ENR *(unsigned int*)(RCC_BASE+0x18)
#define GPIOA_BASE (APB2PERIPH_BASE + 0x0800)

#define GPIOA_CRL *(unsigned int*)(GPIOA_BASE+0x00)

#define GPIOA_ODR *(unsigned int*)(GPIOA_BASE+0x0C)

#define RCC_BASE (AHBPERIPH_BASE + 0x1000)
#define AHBPERIPH_BASE (PERIPH_BASE + 0x20000)
int main()
{
	RCC_APB2ENR |= (1<<2);

GPIOA_CRL &= ~( 0x0F<< (4*0));

GPIOA_CRL |= (1<<4*0);
GPIOA_ODR &=~(1<<0);
while(1);









}




















void SystemInit(void) {}