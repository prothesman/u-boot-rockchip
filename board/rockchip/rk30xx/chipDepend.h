

#ifndef _CHIP_DEPEND_H
#define _CHIP_DEPEND_H

#include "gpio_oper.h"
#include "configs/rkchip.h"
#define     RK3068_POP_CHIP_TAG      0xF
#define     RK3068_CHIP_TAG          0x5
#define     RK3066_CHIP_TAG          0x0
#define     RK3000_CHIP_TAG          0xC


extern uint8    ChipType;

//typedef volatile unsigned int       REG32;
#define RKLD_APB_FREQ           (50*1000) //LOADER �� APBƵ�ʣ� khz 
#define APB0_TIMER_BASE         TIMER0_BASE_ADDR
#define RKLD_HWTM1_CON          ((REG32*)(APB0_TIMER_BASE+0X0008)) //config �Ĵ��� 
#define RKLD_HWTM1_LR           ((REG32*)(APB0_TIMER_BASE+0X0000)) // ��ʼ���� �Ĵ���.
#define RKLD_HWTM1_CVR          ((REG32*)(APB0_TIMER_BASE+0X0004)) // ��ʼ���� �Ĵ���.
#define KRTIMELoaderCount       (uint32)RKLD_APB_FREQ*80*1000      /* 0xee6b2800 */


//����Loader�����쳣����
#define SYS_LOADER_ERR_FLAG      0X1888AAFF 

//extern void ModifyUsbVidPid(USB_DEVICE_DESCRIPTOR * pDeviceDescr);
extern bool UsbPhyReset(void);
extern void FlashCsInit(void);

#endif