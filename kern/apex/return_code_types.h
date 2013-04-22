/** 
 * Type RETURN_CODE_TYPE is (NO_ERROR, NO_ACTION, NOT_AVAILABLE, INVA-
 * LID_PARAM, INVALID CONFIG, INVALID_MODE, TIMED_OUT);
 */

#ifndef __KERN_APEX_RETURN_CODE_TYPE_H__
#define __KERN_APEX_RETURN_CODE_TYPE_H__

typedef int return_code_type;
// if request is valid and operation well performed
#define NO_ERROR 0
// if system its operational status unaffected by request
#define NO_ACTION 1
// the request cannot be performed immediately
#define NOT_AVAILABLE 2
// parameter specified in request incompatible with current
#define INVALID_PARAM 3
// parameter specified in request incompatible with current configuration
// (e.g., as specified by the system integrator )
#define INVALID_CONFIG 4
//request incompatible with current mode of operation
#define INVALID_MODE 5
// time-out associated
#define TIMED_OUT 6

#endif
