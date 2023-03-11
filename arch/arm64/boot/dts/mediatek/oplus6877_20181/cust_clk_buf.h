/*
 * Generated by MTK SP DrvGen Version: 3.5.160809 for MT6877.
 * 2023-03-11 17:22:13
 * Do Not Modify The File.
 * Copyright Mediatek Inc. (c) 2016.
*/

#ifndef __CUST_CLK_BUF_H
#define __CUST_CLK_BUF_H

typedef enum {
	CLOCK_BUFFER_DISABLE,
	CLOCK_BUFFER_SW_CONTROL,
	CLOCK_BUFFER_HW_CONTROL
} MTK_CLK_BUF_STATUS;

typedef enum {
	CLK_BUF_OUTPUT_IMPEDANCE_0,
	CLK_BUF_OUTPUT_IMPEDANCE_1,
	CLK_BUF_OUTPUT_IMPEDANCE_2,
	CLK_BUF_OUTPUT_IMPEDANCE_3,
	CLK_BUF_OUTPUT_IMPEDANCE_4,
	CLK_BUF_OUTPUT_IMPEDANCE_5,
	CLK_BUF_OUTPUT_IMPEDANCE_6,
	CLK_BUF_OUTPUT_IMPEDANCE_7
} MTK_CLK_BUF_OUTPUT_IMPEDANCE;

typedef enum {
	CLK_BUF_CONTROLS_FOR_DESENSE_0,
	CLK_BUF_CONTROLS_FOR_DESENSE_1,
	CLK_BUF_CONTROLS_FOR_DESENSE_2,
	CLK_BUF_CONTROLS_FOR_DESENSE_3,
	CLK_BUF_CONTROLS_FOR_DESENSE_4,
	CLK_BUF_CONTROLS_FOR_DESENSE_5,
	CLK_BUF_CONTROLS_FOR_DESENSE_6,
	CLK_BUF_CONTROLS_FOR_DESENSE_7
} MTK_CLK_BUF_CONTROLS_FOR_DESENSE;

#define CLK_BUF1_STATUS_PMIC		CLOCK_BUFFER_HW_CONTROL
#define CLK_BUF2_STATUS_PMIC		CLOCK_BUFFER_SW_CONTROL
#define CLK_BUF3_STATUS_PMIC		CLOCK_BUFFER_SW_CONTROL
#define CLK_BUF4_STATUS_PMIC		CLOCK_BUFFER_HW_CONTROL
#define CLK_BUF7_STATUS_PMIC		CLOCK_BUFFER_SW_CONTROL

#define PMIC_CLK_BUF1_OUTPUT_IMPEDANCE		CLK_BUF_OUTPUT_IMPEDANCE_3
#define PMIC_CLK_BUF2_OUTPUT_IMPEDANCE		CLK_BUF_OUTPUT_IMPEDANCE_4
#define PMIC_CLK_BUF3_OUTPUT_IMPEDANCE		CLK_BUF_OUTPUT_IMPEDANCE_3
#define PMIC_CLK_BUF4_OUTPUT_IMPEDANCE		CLK_BUF_OUTPUT_IMPEDANCE_4
#define PMIC_CLK_BUF7_OUTPUT_IMPEDANCE		CLK_BUF_OUTPUT_IMPEDANCE_3

#define PMIC_CLK_BUF2_CONTROLS_FOR_DESENSE		CLK_BUF_CONTROLS_FOR_DESENSE_4
#define PMIC_CLK_BUF3_CONTROLS_FOR_DESENSE		CLK_BUF_CONTROLS_FOR_DESENSE_0
#define PMIC_CLK_BUF4_CONTROLS_FOR_DESENSE		CLK_BUF_CONTROLS_FOR_DESENSE_4



#endif /* __CUST_CLK_BUF_H */
