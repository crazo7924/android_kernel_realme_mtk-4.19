/*
 * Generated by MTK SP DrvGen Version: 3.5.160809 for MT6833.
 * 2023-03-11 17:22:10
 * Do Not Modify The File.
 * Copyright Mediatek Inc. (c) 2016.
*/

#ifndef __CUST_EINT_MD1_H
#define __CUST_EINT_MD1_H

#define CUST_EINT_MD_LEVEL_SENSITIVE		0
#define CUST_EINT_MD_EDGE_SENSITIVE		1

#define EINT0		0
#define EINT1		1
#define EINT6		3
#define EINT7		4
#define EINT9		2
#define EINT10		0
#define EINT11		1
#define EINT12		2
#define CAM_PDN1		3
#define CAM_RST1		4
#define INT_SIM1_MODE1		1
#define INT_SIM1_MODE2		2
#define INT_SIM2_MODE1		2
#define INT_SIM2_MODE2		1
#define PERIPHERAL_EN8		3
#define PERIPHERAL_EN9		4

#define CUST_EINT_POLARITY_LOW		0
#define CUST_EINT_POLARITY_HIGH		1

#define CUST_EINT_LEVEL_SENSITIVE		0
#define CUST_EINT_EDGE_SENSITIVE		1

#define CUST_EINT_MD1_0_NAME			"MD1_SIM1_HOT_PLUG_EINT"
#define CUST_EINT_MD1_0_NUM			0
#define CUST_EINT_MD1_0_DEBOUNCE_CN		50
#define CUST_EINT_MD1_0_POLARITY		CUST_EINT_POLARITY_LOW
#define CUST_EINT_MD1_0_SENSITIVE		CUST_EINT_MD_LEVEL_SENSITIVE
#define CUST_EINT_MD1_0_DEBOUNCE_EN		CUST_EINT_DEBOUNCE_DISABLE
#define CUST_EINT_MD1_0_DEDICATED_EN		0
#define CUST_EINT_MD1_0_SRCPIN			INT_SIM1_MODE1

#define CUST_EINT_MD1_1_NAME			"MD1_SIM2_HOT_PLUG_EINT"
#define CUST_EINT_MD1_1_NUM			1
#define CUST_EINT_MD1_1_DEBOUNCE_CN		50
#define CUST_EINT_MD1_1_POLARITY		CUST_EINT_POLARITY_LOW
#define CUST_EINT_MD1_1_SENSITIVE		CUST_EINT_MD_LEVEL_SENSITIVE
#define CUST_EINT_MD1_1_DEBOUNCE_EN		CUST_EINT_DEBOUNCE_DISABLE
#define CUST_EINT_MD1_1_DEDICATED_EN		0
#define CUST_EINT_MD1_1_SRCPIN			INT_SIM1_MODE2

#define CUST_EINT_MD1_CNT			2


#endif /* __CUST_EINT_MD1_H */
