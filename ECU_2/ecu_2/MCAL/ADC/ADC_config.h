﻿/*
 * ADC_config.h
 *
 * Created: 10/08/2024 02:37:18 م
 *  Author: a24e4
 */ 


#ifndef ADC_CONFIG_H_
#define ADC_CONFIG_H_


// Voltage Reference Selections for ADC
#define MADC_VREF_AREF 0
#define MADC_VREF_ACVV_WITH_CAP 1
#define MADC_VREF_RESERVED 2
#define MADC_VREF_INTERNAL_2P56_WITH_CAP 3
#define MADC_VREF_SELECTION MADC_VREF_ACVV_WITH_CAP



// ADC Adjust Result (0 -> right adjust, 1 -> left adjust)
#define MADC_ADJUST 0



//ADC Prescaler Selections
#define MADC_DIV_FACT_2 1  //0 or 1
#define MADC_DIV_FACT_4 2
#define MADC_DIV_FACT_8 3
#define MADC_DIV_FACT_16 4
#define MADC_DIV_FACT_32 5
#define MADC_DIV_FACT_64 6
#define MADC_DIV_FACT_128 7
#define MADC_DIV_FACT_SELECTION MADC_DIV_FACT_128



//ADC Auto Trigger Enable (0, 1)
#define MADC_Auto_Trigger_Enable				0

//ADC Auto Trigger Source Selections
#define MADC_TRIGGER_SOURCE_FREE_RUNNING_MODE 0
#define MADC_TRIGGER_SOURCE_ANALOG_COMPARATOR 1
#define MADC_TRIGGER_SOURCE_EXTERNAL_INT_0 2
#define MADC_TRIGGER_SOURCE_TIMER0_COMPARE_MATCH 3
#define MADC_TRIGGER_SOURCE_TIMER0_OVERFLOW 4
#define MADC_TRIGGER_SOURCE_TIMER1_COMPARE_MATCH_B 5
#define MADC_TRIGGER_SOURCE_TIMER1_OVERFLOW 6
#define MADC_TRIGGER_SOURCE_TIMER1_CAPTURE_EVENT 7
#define MADC_TRIGGER_SOURCE_SELECTION MADC_TRIGGER_SOURCE_FREE_RUNNING_MODE



#endif /* ADC_CONFIG_H_ */