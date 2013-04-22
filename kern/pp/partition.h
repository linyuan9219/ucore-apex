#ifndef __KERN_PP_PARTITION_H__
#define __KERN_PP_PARTITION_H__

#include "return_code_types.h"

/***
 * Intrapartition Elements
 */
// OPERATING_MODE_TYPE
typedef int operating_mode_type;
#define IDLE 0
#define COLD_START 1
#define WARM_START 2
#define NORMAL 3

// PARTITION_ID_TYPE
typedef int partition_id_type;

// LOCK_LEVEL_TYPE
typedef int lock_level_type;

// START_CONDITION_TYPE
typedef int start_condition_type;
#define NORMAL_START 0
#define PARTITION_RESTART 1
#define HD_MODULE_RESTART 2
#define HM_PARTITION_RESTAR 3

// SYSTEM_TIME_TYPE
typedef int system_type_type;

// PARTITION_STATUS_TYPE
typedef struct {
	partition_id_type identifier;
	system_type_type period;
	system_type_type duration;
	lock_level_type lock_level;
	operating_mode_type operating_mode;
	start_condition_type start_condition;
} partition_status_type;

// Definition of partion
typedef struct {
	partition_status_type partition_status;
	
	void (*init)(void);                               // initialize partition structure
    return_code_type (*get_partition_status) (partition_status_type*);
	return_code_type (*set_partition_mode) (operating_mode_type);
} partition;

/***
 * Interpatition Elements
 */


struct partiton_manager {
    const char *name;			// XXX_partition_manager
};

#endif
