/*
 *  linux/arch/arm/mach-faraday/platform-a380/spec.c
 *
 *  Faraday Platform Specification  (Automatically generated by "autospec", do not edit)
 *
 *  Copyright (C) 2013 Faraday Corp. (http://www.faraday-tech.com)
 *
 *  Platform Hierarchy :
 *
 *    A380
 *     +- CPU_CA9MP  (0)
 *     +- ERAM_FTEMC030  (0)
 *     +- INTC_FTINTC030  (0)
 *     +- LCD_FTLCDC210  (0)
 *     +- DMAC_FTDMAC030  (0)
 *     +- DMAC_FTDMAC030  (1)
 *     +- RAM_FTDMAC030  (0)
 *     +- RAM_FTDMAC030  (1)
 *     +- RAM_FTDMAC030  (2)
 *     +- DDRC_FTDDR3030  (0)
 *     +- MCP_SCALER300  (0)
 *     +- MCP_VCAP300  (1)
 *     +- DMAC_FTDMAC020  (2)
 *     +- SDC_FTSDC021  (0)
 *     +- NAND_FTNANDC024  (0)
 *     +- AES_FTAES020  (0)
 *     +- USB_FOTG210  (0)
 *     +- USB_FOTG210  (1)
 *     +- SPI_FTSPI020  (0)
 *     +- MCP_FTMCP100  (2)
 *     +- MCP_FTMCP280  (3)
 *     +- MCP_FTMCP300  (4)
 *     +- GPIO_FTGPIO010  (0)
 *     +- IIC_FTIIC010  (0)
 *     +- IIC_FTIIC010  (1)
 *     +- UART_FTUART010  (0)
 *     +- UART_FTUART010  (1)
 *     +- UART_FTUART010  (2)
 *     +- SSP_FTSSP010  (0)
 *     +- SSP_FTSSP010  (1)
 *     +- SSP_FTSSP010  (2)
 *     +- SCU_FTSCU100  (0)
 *     +- TIMER_FTTMR010  (0)
 *     +- WDT_FTWDT010  (0)
 *     +- KBC_FTKBC010  (0)
 *     +- PMON_PMON010  (0)
 *     +- CCU_TMSENSOR  (0)
 *     +- ADC_WRAPPER  (0)
 *     +- DAC_WRAPPER  (0)
 *     +- SERDES_VSEMI  (0)
 *     +- SERDES_VSEMI  (1)
 *     +- SERDES_VSEMI  (2)
 */


//SoFia: #include <linux/config.h>
//SoFia: #include <linux/init.h>
//SoFia: #include <linux/module.h>

//SoFia: #include <asm/mach/map.h>
//SoFia: #include <asm/sizes.h>

#include "spec.h"  //SoFia

/*
 * Interrrupt numbers
 */


/* LCD */
const unsigned char LCD_FTLCDC210_irq[LCD_FTLCDC210_COUNT] = {
     LCD_FTLCDC210_0_IRQ
};

/* DMAC */
const unsigned char DMAC_FTDMAC030_irq[DMAC_FTDMAC030_COUNT][DMAC_FTDMAC030_IRQ_COUNT] = {
    { DMAC_FTDMAC030_0_IRQ0, DMAC_FTDMAC030_0_IRQ1, DMAC_FTDMAC030_0_IRQ2 },
    { DMAC_FTDMAC030_1_IRQ0, DMAC_FTDMAC030_1_IRQ1, DMAC_FTDMAC030_1_IRQ2 }
};
const unsigned char DMAC_FTDMAC020_irq[DMAC_FTDMAC020_COUNT] = {
     DMAC_FTDMAC020_0_IRQ
};

/* MCP */
const unsigned char MCP_SCALER300_irq[MCP_SCALER300_COUNT] = {
     MCP_SCALER300_0_IRQ
};
const unsigned char MCP_VCAP300_irq[MCP_VCAP300_COUNT] = {
     MCP_VCAP300_0_IRQ
};
const unsigned char MCP_FTMCP100_irq[MCP_FTMCP100_COUNT] = {
     MCP_FTMCP100_0_IRQ
};
const unsigned char MCP_FTMCP280_irq[MCP_FTMCP280_COUNT] = {
     MCP_FTMCP280_0_IRQ
};
const unsigned char MCP_FTMCP300_irq[MCP_FTMCP300_COUNT] = {
     MCP_FTMCP300_0_IRQ
};

/* SDC */
const unsigned char SDC_FTSDC021_irq[SDC_FTSDC021_COUNT] = {
     SDC_FTSDC021_0_IRQ
};

/* NAND */
const unsigned char NAND_FTNANDC024_irq[NAND_FTNANDC024_COUNT] = {
     NAND_FTNANDC024_0_IRQ
};

/* AES */
const unsigned char AES_FTAES020_irq[AES_FTAES020_COUNT] = {
     AES_FTAES020_0_IRQ
};

/* USB */
const unsigned char USB_FOTG210_irq[USB_FOTG210_COUNT] = {
     USB_FOTG210_0_IRQ,
     USB_FOTG210_1_IRQ
};

/* SPI */
const unsigned char SPI_FTSPI020_irq[SPI_FTSPI020_COUNT] = {
     SPI_FTSPI020_0_IRQ
};

/* GPIO */
const unsigned char GPIO_FTGPIO010_irq[GPIO_FTGPIO010_COUNT] = {
     GPIO_FTGPIO010_0_IRQ
};

/* IIC */
const unsigned char IIC_FTIIC010_irq[IIC_FTIIC010_COUNT] = {
     IIC_FTIIC010_0_IRQ,
     IIC_FTIIC010_1_IRQ
};

/* UART */
const unsigned char UART_FTUART010_irq[UART_FTUART010_COUNT] = {
     UART_FTUART010_0_IRQ,
     UART_FTUART010_1_IRQ,
     UART_FTUART010_2_IRQ,
     UART_FTUART010_3_IRQ	 
};

/* SSP */
const unsigned char SSP_FTSSP010_irq[SSP_FTSSP010_COUNT] = {
     SSP_FTSSP010_0_IRQ,
     SSP_FTSSP010_1_IRQ,
     SSP_FTSSP010_2_IRQ
};

/* SCU */
const unsigned char SCU_FTSCU100_irq[SCU_FTSCU100_COUNT] = {
     SCU_FTSCU100_0_IRQ
};

/* TIMER */
const unsigned char TIMER_FTTMR010_irq[TIMER_FTTMR010_COUNT][TIMER_FTTMR010_IRQ_COUNT] = {
    { TIMER_FTTMR010_0_IRQ0, TIMER_FTTMR010_0_IRQ1, TIMER_FTTMR010_0_IRQ2, TIMER_FTTMR010_IRQ }
};

/* WDT */
const unsigned char WDT_FTWDT010_irq[WDT_FTWDT010_COUNT] = {
     WDT_FTWDT010_0_IRQ
};

/* KBC */
const unsigned char KBC_FTKBC010_irq[KBC_FTKBC010_COUNT] = {
     KBC_FTKBC010_0_IRQ
};

/* PMON */
const unsigned char PMON_PMON010_irq[PMON_PMON010_COUNT] = {
     PMON_PMON010_0_IRQ
};

/* ADC */
const unsigned char ADC_WRAPPER_irq[ADC_WRAPPER_COUNT] = {
     ADC_WRAPPER_0_IRQ
};

/* DAC */
const unsigned char DAC_WRAPPER_irq[DAC_WRAPPER_COUNT][DAC_WRAPPER_IRQ_COUNT] = {
    { DAC_WRAPPER_0_IRQ0, DAC_WRAPPER_0_IRQ1 }
};

/*
 * Base addresses
 */


/* CPU */
const unsigned CPU_MEM_pa_base[CPU_MEM_PA_COUNT] = {
     CPU_MEM_0_PA_BASE
};
const unsigned CPU_MEM_pa_limit[CPU_MEM_PA_COUNT] = {
     CPU_MEM_0_PA_LIMIT
};
const unsigned CPU_MEM_pa_size[CPU_MEM_PA_COUNT] = {
     CPU_MEM_0_PA_SIZE
};

/* ERAM */
const unsigned ERAM_FTEMC030_pa_base[ERAM_FTEMC030_COUNT] = {
     ERAM_FTEMC030_0_PA_BASE
};
const unsigned ERAM_FTEMC030_pa_limit[ERAM_FTEMC030_COUNT] = {
     ERAM_FTEMC030_0_PA_LIMIT
};
const unsigned ERAM_FTEMC030_pa_size[ERAM_FTEMC030_COUNT] = {
     ERAM_FTEMC030_0_PA_SIZE
};

/* INTC */
const unsigned INTC_FTINTC030_pa_base[INTC_FTINTC030_COUNT] = {
     INTC_FTINTC030_0_PA_BASE
};
const unsigned INTC_FTINTC030_pa_limit[INTC_FTINTC030_COUNT] = {
     INTC_FTINTC030_0_PA_LIMIT
};
const unsigned INTC_FTINTC030_pa_size[INTC_FTINTC030_COUNT] = {
     INTC_FTINTC030_0_PA_SIZE
};

/* LCD */
const unsigned LCD_FTLCDC210_pa_base[LCD_FTLCDC210_COUNT] = {
     LCD_FTLCDC210_0_PA_BASE
};
const unsigned LCD_FTLCDC210_pa_limit[LCD_FTLCDC210_COUNT] = {
     LCD_FTLCDC210_0_PA_LIMIT
};
const unsigned LCD_FTLCDC210_pa_size[LCD_FTLCDC210_COUNT] = {
     LCD_FTLCDC210_0_PA_SIZE
};

/* DMAC */
const unsigned DMAC_FTDMAC030_pa_base[DMAC_FTDMAC030_COUNT] = {
     DMAC_FTDMAC030_0_PA_BASE,
     DMAC_FTDMAC030_1_PA_BASE
};
const unsigned DMAC_FTDMAC030_pa_limit[DMAC_FTDMAC030_COUNT] = {
     DMAC_FTDMAC030_0_PA_LIMIT,
     DMAC_FTDMAC030_1_PA_LIMIT
};
const unsigned DMAC_FTDMAC030_pa_size[DMAC_FTDMAC030_COUNT] = {
     DMAC_FTDMAC030_0_PA_SIZE,
     DMAC_FTDMAC030_1_PA_SIZE
};
const unsigned DMAC_FTDMAC020_pa_base[DMAC_FTDMAC020_COUNT] = {
     DMAC_FTDMAC020_0_PA_BASE
};
const unsigned DMAC_FTDMAC020_pa_limit[DMAC_FTDMAC020_COUNT] = {
     DMAC_FTDMAC020_0_PA_LIMIT
};
const unsigned DMAC_FTDMAC020_pa_size[DMAC_FTDMAC020_COUNT] = {
     DMAC_FTDMAC020_0_PA_SIZE
};

/* RAM */
const unsigned RAM_FTDMAC030_pa_base[RAM_FTDMAC030_COUNT] = {
     RAM_FTDMAC030_0_PA_BASE,
     RAM_FTDMAC030_1_PA_BASE,
     RAM_FTDMAC030_2_PA_BASE
};
const unsigned RAM_FTDMAC030_pa_limit[RAM_FTDMAC030_COUNT] = {
     RAM_FTDMAC030_0_PA_LIMIT,
     RAM_FTDMAC030_1_PA_LIMIT,
     RAM_FTDMAC030_2_PA_LIMIT
};
const unsigned RAM_FTDMAC030_pa_size[RAM_FTDMAC030_COUNT] = {
     RAM_FTDMAC030_0_PA_SIZE,
     RAM_FTDMAC030_1_PA_SIZE,
     RAM_FTDMAC030_2_PA_SIZE
};

/* DDRC */
const unsigned DDRC_FTDDR3030_pa_base[DDRC_FTDDR3030_COUNT] = {
     DDRC_FTDDR3030_0_PA_BASE
};
const unsigned DDRC_FTDDR3030_pa_limit[DDRC_FTDDR3030_COUNT] = {
     DDRC_FTDDR3030_0_PA_LIMIT
};
const unsigned DDRC_FTDDR3030_pa_size[DDRC_FTDDR3030_COUNT] = {
     DDRC_FTDDR3030_0_PA_SIZE
};

/* MCP */
const unsigned MCP_SCALER300_pa_base[MCP_SCALER300_COUNT] = {
     MCP_SCALER300_0_PA_BASE
};
const unsigned MCP_SCALER300_pa_limit[MCP_SCALER300_COUNT] = {
     MCP_SCALER300_0_PA_LIMIT
};
const unsigned MCP_SCALER300_pa_size[MCP_SCALER300_COUNT] = {
     MCP_SCALER300_0_PA_SIZE
};
const unsigned MCP_VCAP300_pa_base[MCP_VCAP300_COUNT] = {
     MCP_VCAP300_0_PA_BASE
};
const unsigned MCP_VCAP300_pa_limit[MCP_VCAP300_COUNT] = {
     MCP_VCAP300_0_PA_LIMIT
};
const unsigned MCP_VCAP300_pa_size[MCP_VCAP300_COUNT] = {
     MCP_VCAP300_0_PA_SIZE
};
const unsigned MCP_FTMCP100_pa_base[MCP_FTMCP100_COUNT] = {
     MCP_FTMCP100_0_PA_BASE
};
const unsigned MCP_FTMCP100_pa_limit[MCP_FTMCP100_COUNT] = {
     MCP_FTMCP100_0_PA_LIMIT
};
const unsigned MCP_FTMCP100_pa_size[MCP_FTMCP100_COUNT] = {
     MCP_FTMCP100_0_PA_SIZE
};
const unsigned MCP_FTMCP280_pa_base[MCP_FTMCP280_COUNT] = {
     MCP_FTMCP280_0_PA_BASE
};
const unsigned MCP_FTMCP280_pa_limit[MCP_FTMCP280_COUNT] = {
     MCP_FTMCP280_0_PA_LIMIT
};
const unsigned MCP_FTMCP280_pa_size[MCP_FTMCP280_COUNT] = {
     MCP_FTMCP280_0_PA_SIZE
};
const unsigned MCP_FTMCP300_pa_base[MCP_FTMCP300_COUNT] = {
     MCP_FTMCP300_0_PA_BASE
};
const unsigned MCP_FTMCP300_pa_limit[MCP_FTMCP300_COUNT] = {
     MCP_FTMCP300_0_PA_LIMIT
};
const unsigned MCP_FTMCP300_pa_size[MCP_FTMCP300_COUNT] = {
     MCP_FTMCP300_0_PA_SIZE
};

/* SDC */
const unsigned SDC_FTSDC021_pa_base[SDC_FTSDC021_COUNT] = {
     SDC_FTSDC021_0_PA_BASE
};
const unsigned SDC_FTSDC021_pa_limit[SDC_FTSDC021_COUNT] = {
     SDC_FTSDC021_0_PA_LIMIT
};
const unsigned SDC_FTSDC021_pa_size[SDC_FTSDC021_COUNT] = {
     SDC_FTSDC021_0_PA_SIZE
};

/* NAND */
const unsigned NAND_FTNANDC024_pa_base[NAND_FTNANDC024_COUNT] = {
     NAND_FTNANDC024_0_PA_BASE
};
const unsigned NAND_FTNANDC024_pa_limit[NAND_FTNANDC024_COUNT] = {
     NAND_FTNANDC024_0_PA_LIMIT
};
const unsigned NAND_FTNANDC024_pa_size[NAND_FTNANDC024_COUNT] = {
     NAND_FTNANDC024_0_PA_SIZE
};

/* AES */
const unsigned AES_FTAES020_pa_base[AES_FTAES020_COUNT] = {
     AES_FTAES020_0_PA_BASE
};
const unsigned AES_FTAES020_pa_limit[AES_FTAES020_COUNT] = {
     AES_FTAES020_0_PA_LIMIT
};
const unsigned AES_FTAES020_pa_size[AES_FTAES020_COUNT] = {
     AES_FTAES020_0_PA_SIZE
};

/* USB */
const unsigned USB_FOTG210_pa_base[USB_FOTG210_COUNT] = {
     USB_FOTG210_0_PA_BASE,
     USB_FOTG210_1_PA_BASE
};
const unsigned USB_FOTG210_pa_limit[USB_FOTG210_COUNT] = {
     USB_FOTG210_0_PA_LIMIT,
     USB_FOTG210_1_PA_LIMIT
};
const unsigned USB_FOTG210_pa_size[USB_FOTG210_COUNT] = {
     USB_FOTG210_0_PA_SIZE,
     USB_FOTG210_1_PA_SIZE
};

/* SPI */
const unsigned SPI_FTSPI020_pa_base[SPI_FTSPI020_COUNT] = {
     SPI_FTSPI020_0_PA_BASE
};
const unsigned SPI_FTSPI020_pa_limit[SPI_FTSPI020_COUNT] = {
     SPI_FTSPI020_0_PA_LIMIT
};
const unsigned SPI_FTSPI020_pa_size[SPI_FTSPI020_COUNT] = {
     SPI_FTSPI020_0_PA_SIZE
};

/* GPIO */
const unsigned GPIO_FTGPIO010_pa_base[GPIO_FTGPIO010_COUNT] = {
     GPIO_FTGPIO010_0_PA_BASE
};
const unsigned GPIO_FTGPIO010_pa_limit[GPIO_FTGPIO010_COUNT] = {
     GPIO_FTGPIO010_0_PA_LIMIT
};
const unsigned GPIO_FTGPIO010_pa_size[GPIO_FTGPIO010_COUNT] = {
     GPIO_FTGPIO010_0_PA_SIZE
};

/* IIC */
const unsigned IIC_FTIIC010_pa_base[IIC_FTIIC010_COUNT] = {
     IIC_FTIIC010_0_PA_BASE,
     IIC_FTIIC010_1_PA_BASE
};
const unsigned IIC_FTIIC010_pa_limit[IIC_FTIIC010_COUNT] = {
     IIC_FTIIC010_0_PA_LIMIT,
     IIC_FTIIC010_1_PA_LIMIT
};
const unsigned IIC_FTIIC010_pa_size[IIC_FTIIC010_COUNT] = {
     IIC_FTIIC010_0_PA_SIZE,
     IIC_FTIIC010_1_PA_SIZE
};

/* UART */
const unsigned UART_FTUART010_pa_base[UART_FTUART010_COUNT] = {
     UART_FTUART010_0_PA_BASE,
     UART_FTUART010_1_PA_BASE,
     UART_FTUART010_2_PA_BASE,
     UART_FTUART010_3_PA_BASE	 
};
const unsigned UART_FTUART010_pa_limit[UART_FTUART010_COUNT] = {
     UART_FTUART010_0_PA_LIMIT,
     UART_FTUART010_1_PA_LIMIT,
     UART_FTUART010_2_PA_LIMIT,
     UART_FTUART010_3_PA_LIMIT	 
};
const unsigned UART_FTUART010_pa_size[UART_FTUART010_COUNT] = {
     UART_FTUART010_0_PA_SIZE,
     UART_FTUART010_1_PA_SIZE,
     UART_FTUART010_2_PA_SIZE,
     UART_FTUART010_3_PA_SIZE
};

/* SSP */
const unsigned SSP_FTSSP010_pa_base[SSP_FTSSP010_COUNT] = {
     SSP_FTSSP010_0_PA_BASE,
     SSP_FTSSP010_1_PA_BASE,
     SSP_FTSSP010_2_PA_BASE
};
const unsigned SSP_FTSSP010_pa_limit[SSP_FTSSP010_COUNT] = {
     SSP_FTSSP010_0_PA_LIMIT,
     SSP_FTSSP010_1_PA_LIMIT,
     SSP_FTSSP010_2_PA_LIMIT
};
const unsigned SSP_FTSSP010_pa_size[SSP_FTSSP010_COUNT] = {
     SSP_FTSSP010_0_PA_SIZE,
     SSP_FTSSP010_1_PA_SIZE,
     SSP_FTSSP010_2_PA_SIZE
};

/* SCU */
const unsigned SCU_FTSCU100_pa_base[SCU_FTSCU100_COUNT] = {
     SCU_FTSCU100_0_PA_BASE
};
const unsigned SCU_FTSCU100_pa_limit[SCU_FTSCU100_COUNT] = {
     SCU_FTSCU100_0_PA_LIMIT
};
const unsigned SCU_FTSCU100_pa_size[SCU_FTSCU100_COUNT] = {
     SCU_FTSCU100_0_PA_SIZE
};

/* TIMER */
const unsigned TIMER_FTTMR010_pa_base[TIMER_FTTMR010_COUNT] = {
     TIMER_FTTMR010_0_PA_BASE
};
const unsigned TIMER_FTTMR010_pa_limit[TIMER_FTTMR010_COUNT] = {
     TIMER_FTTMR010_0_PA_LIMIT
};
const unsigned TIMER_FTTMR010_pa_size[TIMER_FTTMR010_COUNT] = {
     TIMER_FTTMR010_0_PA_SIZE
};

/* WDT */
const unsigned WDT_FTWDT010_pa_base[WDT_FTWDT010_COUNT] = {
     WDT_FTWDT010_0_PA_BASE
};
const unsigned WDT_FTWDT010_pa_limit[WDT_FTWDT010_COUNT] = {
     WDT_FTWDT010_0_PA_LIMIT
};
const unsigned WDT_FTWDT010_pa_size[WDT_FTWDT010_COUNT] = {
     WDT_FTWDT010_0_PA_SIZE
};

/* KBC */
const unsigned KBC_FTKBC010_pa_base[KBC_FTKBC010_COUNT] = {
     KBC_FTKBC010_0_PA_BASE
};
const unsigned KBC_FTKBC010_pa_limit[KBC_FTKBC010_COUNT] = {
     KBC_FTKBC010_0_PA_LIMIT
};
const unsigned KBC_FTKBC010_pa_size[KBC_FTKBC010_COUNT] = {
     KBC_FTKBC010_0_PA_SIZE
};

/* PMON */
const unsigned PMON_PMON010_pa_base[PMON_PMON010_COUNT] = {
     PMON_PMON010_0_PA_BASE
};
const unsigned PMON_PMON010_pa_limit[PMON_PMON010_COUNT] = {
     PMON_PMON010_0_PA_LIMIT
};
const unsigned PMON_PMON010_pa_size[PMON_PMON010_COUNT] = {
     PMON_PMON010_0_PA_SIZE
};

/* CCU */
const unsigned CCU_TMSENSOR_pa_base[CCU_TMSENSOR_COUNT] = {
     CCU_TMSENSOR_0_PA_BASE
};
const unsigned CCU_TMSENSOR_pa_limit[CCU_TMSENSOR_COUNT] = {
     CCU_TMSENSOR_0_PA_LIMIT
};
const unsigned CCU_TMSENSOR_pa_size[CCU_TMSENSOR_COUNT] = {
     CCU_TMSENSOR_0_PA_SIZE
};

/* ADC */
const unsigned ADC_WRAPPER_pa_base[ADC_WRAPPER_COUNT] = {
     ADC_WRAPPER_0_PA_BASE
};
const unsigned ADC_WRAPPER_pa_limit[ADC_WRAPPER_COUNT] = {
     ADC_WRAPPER_0_PA_LIMIT
};
const unsigned ADC_WRAPPER_pa_size[ADC_WRAPPER_COUNT] = {
     ADC_WRAPPER_0_PA_SIZE
};

/* DAC */
const unsigned DAC_WRAPPER_pa_base[DAC_WRAPPER_COUNT] = {
     DAC_WRAPPER_0_PA_BASE
};
const unsigned DAC_WRAPPER_pa_limit[DAC_WRAPPER_COUNT] = {
     DAC_WRAPPER_0_PA_LIMIT
};
const unsigned DAC_WRAPPER_pa_size[DAC_WRAPPER_COUNT] = {
     DAC_WRAPPER_0_PA_SIZE
};

/* GMAC */
const unsigned GMAC_FTGMAC030_pa_base[GMAC_FTGMAC030_PA_COUNT] = {
     GMAC_FTGMAC030_0_PA_BASE,
     GMAC_FTGMAC030_1_PA_BASE
};

/* SERDES */
const unsigned SERDES_VSEMI_pa_base[SERDES_VSEMI_COUNT] = {
     SERDES_VSEMI_0_PA_BASE,
     SERDES_VSEMI_1_PA_BASE,
     SERDES_VSEMI_2_PA_BASE
};
const unsigned SERDES_VSEMI_pa_limit[SERDES_VSEMI_COUNT] = {
     SERDES_VSEMI_0_PA_LIMIT,
     SERDES_VSEMI_1_PA_LIMIT,
     SERDES_VSEMI_2_PA_LIMIT
};
const unsigned SERDES_VSEMI_pa_size[SERDES_VSEMI_COUNT] = {
     SERDES_VSEMI_0_PA_SIZE,
     SERDES_VSEMI_1_PA_SIZE,
     SERDES_VSEMI_2_PA_SIZE
};

/*
 * Platform Initialization Information
 */

/*SoFia: const struct map_desc platform_io_desc[PLATFORM_IO_DESC_NR] __initdata = {
};*/

/*
 * Interrupt Dispatch Tables, for both FIQ and IRQ
 */

/* const interrupt_dispatch_function *fiq_dispatch_table[32]; */

/* const interrupt_dispatch_function *irq_dispatch_table[32]; */


/*
 * Export All Symbols
 */

/*
 * Interrrupt numbers
 */

/* LCD */
//SoFia: EXPORT_SYMBOL( LCD_FTLCDC210_irq );
/* DMAC */
//SoFia: EXPORT_SYMBOL( DMAC_FTDMAC030_irq );
//SoFia: EXPORT_SYMBOL( DMAC_FTDMAC020_irq );
/* MCP */
//SoFia: EXPORT_SYMBOL( MCP_SCALER300_irq );
//SoFia: EXPORT_SYMBOL( MCP_VCAP300_irq );
//SoFia: EXPORT_SYMBOL( MCP_FTMCP100_irq );
//SoFia: EXPORT_SYMBOL( MCP_FTMCP280_irq );
//SoFia: EXPORT_SYMBOL( MCP_FTMCP300_irq );
/* SDC */
//SoFia: EXPORT_SYMBOL( SDC_FTSDC021_irq );
/* NAND */
//SoFia: EXPORT_SYMBOL( NAND_FTNANDC024_irq );
/* AES */
//SoFia: EXPORT_SYMBOL( AES_FTAES020_irq );
/* USB */
//SoFia: EXPORT_SYMBOL( USB_FOTG210_irq );
/* SPI */
//SoFia: EXPORT_SYMBOL( SPI_FTSPI020_irq );
/* GPIO */
//SoFia: EXPORT_SYMBOL( GPIO_FTGPIO010_irq );
/* IIC */
//SoFia: EXPORT_SYMBOL( IIC_FTIIC010_irq );
/* UART */
//SoFia: EXPORT_SYMBOL( UART_FTUART010_irq );
/* SSP */
//SoFia: EXPORT_SYMBOL( SSP_FTSSP010_irq );
/* SCU */
//SoFia: EXPORT_SYMBOL( SCU_FTSCU100_irq );
/* TIMER */
//SoFia: EXPORT_SYMBOL( TIMER_FTTMR010_irq );
/* WDT */
//SoFia: EXPORT_SYMBOL( WDT_FTWDT010_irq );
/* KBC */
//SoFia: EXPORT_SYMBOL( KBC_FTKBC010_irq );
/* PMON */
//SoFia: EXPORT_SYMBOL( PMON_PMON010_irq );
/* ADC */
//SoFia: EXPORT_SYMBOL( ADC_WRAPPER_irq );
/* DAC */
//SoFia: EXPORT_SYMBOL( DAC_WRAPPER_irq );

/*
 * Base addresses
 */

/* CPU */
//SoFia: EXPORT_SYMBOL( CPU_MEM_pa_base );
//SoFia: EXPORT_SYMBOL( CPU_MEM_pa_limit );
//SoFia: EXPORT_SYMBOL( CPU_MEM_pa_size );
/* ERAM */
//SoFia: EXPORT_SYMBOL( ERAM_FTEMC030_pa_base );
//SoFia: EXPORT_SYMBOL( ERAM_FTEMC030_pa_limit );
//SoFia: EXPORT_SYMBOL( ERAM_FTEMC030_pa_size );
/* INTC */
//SoFia: EXPORT_SYMBOL( INTC_FTINTC030_pa_base );
//SoFia: EXPORT_SYMBOL( INTC_FTINTC030_pa_limit );
//SoFia: EXPORT_SYMBOL( INTC_FTINTC030_pa_size );
/* LCD */
//SoFia: EXPORT_SYMBOL( LCD_FTLCDC210_pa_base );
//SoFia: EXPORT_SYMBOL( LCD_FTLCDC210_pa_limit );
//SoFia: EXPORT_SYMBOL( LCD_FTLCDC210_pa_size );
/* DMAC */
//SoFia: EXPORT_SYMBOL( DMAC_FTDMAC030_pa_base );
//SoFia: EXPORT_SYMBOL( DMAC_FTDMAC030_pa_limit );
//SoFia: EXPORT_SYMBOL( DMAC_FTDMAC030_pa_size );
//SoFia: EXPORT_SYMBOL( DMAC_FTDMAC020_pa_base );
//SoFia: EXPORT_SYMBOL( DMAC_FTDMAC020_pa_limit );
//SoFia: EXPORT_SYMBOL( DMAC_FTDMAC020_pa_size );
/* RAM */
//SoFia: EXPORT_SYMBOL( RAM_FTDMAC030_pa_base );
//SoFia: EXPORT_SYMBOL( RAM_FTDMAC030_pa_limit );
//SoFia: EXPORT_SYMBOL( RAM_FTDMAC030_pa_size );
/* DDRC */
//SoFia: EXPORT_SYMBOL( DDRC_FTDDR3030_pa_base );
//SoFia: EXPORT_SYMBOL( DDRC_FTDDR3030_pa_limit );
//SoFia: EXPORT_SYMBOL( DDRC_FTDDR3030_pa_size );
/* MCP */
//SoFia: EXPORT_SYMBOL( MCP_SCALER300_pa_base );
//SoFia: EXPORT_SYMBOL( MCP_SCALER300_pa_limit );
//SoFia: EXPORT_SYMBOL( MCP_SCALER300_pa_size );
//SoFia: EXPORT_SYMBOL( MCP_VCAP300_pa_base );
//SoFia: EXPORT_SYMBOL( MCP_VCAP300_pa_limit );
//SoFia: EXPORT_SYMBOL( MCP_VCAP300_pa_size );
//SoFia: EXPORT_SYMBOL( MCP_FTMCP100_pa_base );
//SoFia: EXPORT_SYMBOL( MCP_FTMCP100_pa_limit );
//SoFia: EXPORT_SYMBOL( MCP_FTMCP100_pa_size );
//SoFia: EXPORT_SYMBOL( MCP_FTMCP280_pa_base );
//SoFia: EXPORT_SYMBOL( MCP_FTMCP280_pa_limit );
//SoFia: EXPORT_SYMBOL( MCP_FTMCP280_pa_size );
//SoFia: EXPORT_SYMBOL( MCP_FTMCP300_pa_base );
//SoFia: EXPORT_SYMBOL( MCP_FTMCP300_pa_limit );
//SoFia: EXPORT_SYMBOL( MCP_FTMCP300_pa_size );
/* SDC */
//SoFia: EXPORT_SYMBOL( SDC_FTSDC021_pa_base );
//SoFia: EXPORT_SYMBOL( SDC_FTSDC021_pa_limit );
//SoFia: EXPORT_SYMBOL( SDC_FTSDC021_pa_size );
/* NAND */
//SoFia: EXPORT_SYMBOL( NAND_FTNANDC024_pa_base );
//SoFia: EXPORT_SYMBOL( NAND_FTNANDC024_pa_limit );
//SoFia: EXPORT_SYMBOL( NAND_FTNANDC024_pa_size );
/* AES */
//SoFia: EXPORT_SYMBOL( AES_FTAES020_pa_base );
//SoFia: EXPORT_SYMBOL( AES_FTAES020_pa_limit );
//SoFia: EXPORT_SYMBOL( AES_FTAES020_pa_size );
/* USB */
//SoFia: EXPORT_SYMBOL( USB_FOTG210_pa_base );
//SoFia: EXPORT_SYMBOL( USB_FOTG210_pa_limit );
//SoFia: EXPORT_SYMBOL( USB_FOTG210_pa_size );
/* SPI */
//SoFia: EXPORT_SYMBOL( SPI_FTSPI020_pa_base );
//SoFia: EXPORT_SYMBOL( SPI_FTSPI020_pa_limit );
//SoFia: EXPORT_SYMBOL( SPI_FTSPI020_pa_size );
/* GPIO */
//SoFia: EXPORT_SYMBOL( GPIO_FTGPIO010_pa_base );
//SoFia: EXPORT_SYMBOL( GPIO_FTGPIO010_pa_limit );
//SoFia: EXPORT_SYMBOL( GPIO_FTGPIO010_pa_size );
/* IIC */
//SoFia: EXPORT_SYMBOL( IIC_FTIIC010_pa_base );
//SoFia: EXPORT_SYMBOL( IIC_FTIIC010_pa_limit );
//SoFia: EXPORT_SYMBOL( IIC_FTIIC010_pa_size );
/* UART */
//SoFia: EXPORT_SYMBOL( UART_FTUART010_pa_base );
//SoFia: EXPORT_SYMBOL( UART_FTUART010_pa_limit );
//SoFia: EXPORT_SYMBOL( UART_FTUART010_pa_size );
/* SSP */
//SoFia: EXPORT_SYMBOL( SSP_FTSSP010_pa_base );
//SoFia: EXPORT_SYMBOL( SSP_FTSSP010_pa_limit );
//SoFia: EXPORT_SYMBOL( SSP_FTSSP010_pa_size );
/* SCU */
//SoFia: EXPORT_SYMBOL( SCU_FTSCU100_pa_base );
//SoFia: EXPORT_SYMBOL( SCU_FTSCU100_pa_limit );
//SoFia: EXPORT_SYMBOL( SCU_FTSCU100_pa_size );
/* TIMER */
//SoFia: EXPORT_SYMBOL( TIMER_FTTMR010_pa_base );
//SoFia: EXPORT_SYMBOL( TIMER_FTTMR010_pa_limit );
//SoFia: EXPORT_SYMBOL( TIMER_FTTMR010_pa_size );
/* WDT */
//SoFia: EXPORT_SYMBOL( WDT_FTWDT010_pa_base );
//SoFia: EXPORT_SYMBOL( WDT_FTWDT010_pa_limit );
//SoFia: EXPORT_SYMBOL( WDT_FTWDT010_pa_size );
/* KBC */
//SoFia: EXPORT_SYMBOL( KBC_FTKBC010_pa_base );
//SoFia: EXPORT_SYMBOL( KBC_FTKBC010_pa_limit );
//SoFia: EXPORT_SYMBOL( KBC_FTKBC010_pa_size );
/* PMON */
//SoFia: EXPORT_SYMBOL( PMON_PMON010_pa_base );
//SoFia: EXPORT_SYMBOL( PMON_PMON010_pa_limit );
//SoFia: EXPORT_SYMBOL( PMON_PMON010_pa_size );
/* CCU */
//SoFia: EXPORT_SYMBOL( CCU_TMSENSOR_pa_base );
//SoFia: EXPORT_SYMBOL( CCU_TMSENSOR_pa_limit );
//SoFia: EXPORT_SYMBOL( CCU_TMSENSOR_pa_size );
/* ADC */
//SoFia: EXPORT_SYMBOL( ADC_WRAPPER_pa_base );
//SoFia: EXPORT_SYMBOL( ADC_WRAPPER_pa_limit );
//SoFia: EXPORT_SYMBOL( ADC_WRAPPER_pa_size );
/* DAC */
//SoFia: EXPORT_SYMBOL( DAC_WRAPPER_pa_base );
//SoFia: EXPORT_SYMBOL( DAC_WRAPPER_pa_limit );
//SoFia: EXPORT_SYMBOL( DAC_WRAPPER_pa_size );
/* SERDES */
//SoFia: EXPORT_SYMBOL( SERDES_VSEMI_pa_base );
//SoFia: EXPORT_SYMBOL( SERDES_VSEMI_pa_limit );
//SoFia: EXPORT_SYMBOL( SERDES_VSEMI_pa_size );

/*
 * Interrupt Dispatch Tables, for both FIQ and IRQ
 */

