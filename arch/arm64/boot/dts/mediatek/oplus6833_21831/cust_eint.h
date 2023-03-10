/*
 * Generated by MTK SP DrvGen Version: 3.5.160809 for MT6833.
 * 2023-03-11 17:22:11
 * Do Not Modify The File.
 * Copyright Mediatek Inc. (c) 2016.
*/

#ifndef __CUST_EINT_H
#define __CUST_EINT_H

#ifdef __cplusplus
extern "C" {
#endif
#define CUST_EINTF_TRIGGER_RISING			1
#define CUST_EINTF_TRIGGER_FALLING			2
#define CUST_EINTF_TRIGGER_HIGH			4
#define CUST_EINTF_TRIGGER_LOW			8
#define CUST_EINT_DEBOUNCE_DISABLE			0
#define CUST_EINT_DEBOUNCE_ENABLE			1


#define CUST_EINT_MRDUMP_EXT_RST_NUM			1
#define CUST_EINT_MRDUMP_EXT_RST_DEBOUNCE_CN		512
#define CUST_EINT_MRDUMP_EXT_RST_TYPE			CUST_EINTF_TRIGGER_LOW
#define CUST_EINT_MRDUMP_EXT_RST_DEBOUNCE_EN		CUST_EINT_DEBOUNCE_ENABLE

#define CUST_EINT_SWTP_NUM			7
#define CUST_EINT_SWTP_DEBOUNCE_CN		512
#define CUST_EINT_SWTP_TYPE			CUST_EINTF_TRIGGER_HIGH
#define CUST_EINT_SWTP_DEBOUNCE_EN		CUST_EINT_DEBOUNCE_ENABLE

#define CUST_EINT_SUBPMIC_PMU_EINT_NUM			10
#define CUST_EINT_SUBPMIC_PMU_EINT_DEBOUNCE_CN		0
#define CUST_EINT_SUBPMIC_PMU_EINT_TYPE			CUST_EINTF_TRIGGER_FALLING
#define CUST_EINT_SUBPMIC_PMU_EINT_DEBOUNCE_EN		CUST_EINT_DEBOUNCE_DISABLE

#define CUST_EINT_TOUCH_NUM			14
#define CUST_EINT_TOUCH_DEBOUNCE_CN		0
#define CUST_EINT_TOUCH_TYPE			CUST_EINTF_TRIGGER_LOW
#define CUST_EINT_TOUCH_DEBOUNCE_EN		CUST_EINT_DEBOUNCE_DISABLE

#define CUST_EINT_DSI_TE_NUM			84
#define CUST_EINT_DSI_TE_TYPE			CUST_EINTF_TRIGGER_RISING
#define CUST_EINT_DSI_TE_DEBOUNCE_EN		CUST_EINT_DEBOUNCE_DISABLE

#ifdef __cplusplus
}
#endif


#endif /* __CUST_EINT_H */
