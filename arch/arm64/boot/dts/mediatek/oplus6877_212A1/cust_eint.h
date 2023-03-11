/*
 * Generated by MTK SP DrvGen Version: 3.5.160809 for MT6877.
 * 2023-03-11 17:22:14
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


#define CUST_EINT_MRDUMP_EXT_RST_NUM			0
#define CUST_EINT_MRDUMP_EXT_RST_DEBOUNCE_CN		512
#define CUST_EINT_MRDUMP_EXT_RST_TYPE			CUST_EINTF_TRIGGER_LOW
#define CUST_EINT_MRDUMP_EXT_RST_DEBOUNCE_EN		CUST_EINT_DEBOUNCE_DISABLE

#define CUST_EINT_MSDC1_INS_NUM			3
#define CUST_EINT_MSDC1_INS_DEBOUNCE_CN		256
#define CUST_EINT_MSDC1_INS_TYPE			CUST_EINTF_TRIGGER_LOW
#define CUST_EINT_MSDC1_INS_DEBOUNCE_EN		CUST_EINT_DEBOUNCE_DISABLE

#define CUST_EINT_SUBPMIC_PMU_EINT_NUM			4
#define CUST_EINT_SUBPMIC_PMU_EINT_DEBOUNCE_CN		0
#define CUST_EINT_SUBPMIC_PMU_EINT_TYPE			CUST_EINTF_TRIGGER_FALLING
#define CUST_EINT_SUBPMIC_PMU_EINT_DEBOUNCE_EN		CUST_EINT_DEBOUNCE_DISABLE

#define CUST_EINT_IRQ_NFC_NUM			8
#define CUST_EINT_IRQ_NFC_DEBOUNCE_CN		0
#define CUST_EINT_IRQ_NFC_TYPE			CUST_EINTF_TRIGGER_HIGH
#define CUST_EINT_IRQ_NFC_DEBOUNCE_EN		CUST_EINT_DEBOUNCE_DISABLE

#define CUST_EINT_IRQ_NFC_NUM			11
#define CUST_EINT_IRQ_NFC_DEBOUNCE_CN		0
#define CUST_EINT_IRQ_NFC_TYPE			CUST_EINTF_TRIGGER_RISING
#define CUST_EINT_IRQ_NFC_DEBOUNCE_EN		CUST_EINT_DEBOUNCE_DISABLE

#define CUST_EINT_TOUCH_PANEL_NUM			14
#define CUST_EINT_TOUCH_PANEL_DEBOUNCE_CN		0
#define CUST_EINT_TOUCH_PANEL_TYPE			CUST_EINTF_TRIGGER_LOW
#define CUST_EINT_TOUCH_PANEL_DEBOUNCE_EN		CUST_EINT_DEBOUNCE_DISABLE

#define CUST_EINT_SWTP_NUM			19
#define CUST_EINT_SWTP_DEBOUNCE_CN		512
#define CUST_EINT_SWTP_TYPE			CUST_EINTF_TRIGGER_HIGH
#define CUST_EINT_SWTP_DEBOUNCE_EN		CUST_EINT_DEBOUNCE_ENABLE

#define CUST_EINT_DSI_TE_NUM			37
#define CUST_EINT_DSI_TE_TYPE			CUST_EINTF_TRIGGER_RISING
#define CUST_EINT_DSI_TE_DEBOUNCE_EN		CUST_EINT_DEBOUNCE_DISABLE

#ifdef __cplusplus
}
#endif


#endif /* __CUST_EINT_H */