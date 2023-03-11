/*
 * Generated by MTK SP DrvGen Version: 3.5.160809 for MT6853.
 * 2023-03-11 17:22:13
 * Do Not Modify The File.
 * Copyright Mediatek Inc. (c) 2016.
*/

#ifndef __CUST_KPD_H
#define __CUST_KPD_H

#include <linux/input.h>
#include <cust_eint.h>

#define KPD_YES		1
#define KPD_NO		0

/* available keys (Linux keycodes) */
#define KEY_CALL		KEY_SEND
#define KEY_ENDCALL	KEY_END
#undef KEY_OK
#define KEY_OK		KEY_REPLY    /* DPAD_CENTER */
#define KEY_FOCUS	KEY_HP
#define KEY_AT		KEY_EMAIL
#define KEY_POUND	228	//KEY_KBDILLUMTOGGLE
#define KEY_STAR	227	//KEY_SWITCHVIDEOMODE
#define KEY_DEL		KEY_BACKSPACE
#define KEY_SYM		KEY_COMPOSE

#define KPD_KEY_DEBOUNCE	1024
#define KPD_PWRKEY_MAP	KEY_POWER
#define KPD_PMIC_RSTKEY_MAP	KEY_VOLUMEUP
#define MTK_PMIC_PWR_KEY	8
#define MTK_PMIC_RST_KEY		17

#define KPD_USE_EXTEND_TYPE	KPD_NO

/* HW keycode [0 ~ 71] -> Linux keycode */
#define KPD_INIT_KEYMAP()	\
{	\
	[0] = KEY_VOLUMEDOWN,	\
}

/***********************************************************/
/****************Preload Customation************************/
/***********************************************************/
#define KPD_PWRKEY_EINT_GPIO	GPIO0
#define KPD_PWRKEY_GPIO_DIN	0

#define KPD_DL_KEY1	17	/* KEY_VOLUMEUP */
#define KPD_DL_KEY2	0	/* KEY_VOLUMEDOWN */
#define KPD_DL_KEY3	8	/* KEY_POWER */

/***********************************************************/
/****************Uboot Customation**************************/
/***********************************************************/
#define MT65XX_RECOVERY_KEY	17	/* KEY_VOLUMEUP */
#define MT65XX_FACTORY_KEY	0	/* KEY_VOLUMEDOWN */



#endif /* __CUST_KPD_H */
