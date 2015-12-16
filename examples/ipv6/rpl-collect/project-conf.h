#ifndef __PROJECT_CONF_H__
#define __PROJECT_CONF_H__
 
// Evaluation
#undef RPL_CONF_DAG_MC
#define RPL_CONF_DAG_MC RPL_DAG_MC_NONE
// #define RPL_CONF_DAG_MC RPL_DAG_MC_ENERGY

// default 12, ietf 3
#undef RPL_CONF_DIO_INTERVAL_MIN
#define RPL_CONF_DIO_INTERVAL_MIN 14

// default 8, ietf 20=2.3 hr
#undef RPL_CONF_DIO_INTERVAL_DOUBLINGS
#define RPL_CONF_DIO_INTERVAL_DOUBLINGS 12

#endif /* __PROJECT_CONF_H__ */
