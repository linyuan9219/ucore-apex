#ifndef __KERN_PP_PROCESS_H__
#define __KERN_PP_PROCESS_H__

#include "return_code_type.h"
#include <defs.h>
#include <mmu.h>
#include <memlayout.h>
#include <atomic.h>
#include <assert.h>

typedef int process_id_type;
typedef char* process_name_type;
typedef int priority_type;
typedef int stack_size_type;
typedef int lock_level_type;
typedef int system_address_type;

typedef int process_state_type;
#define DORMANT 0
#define READY 1
#define RUNNING 2
#define WAITING 3

typedef int deadline_type;
#define SOFT 0
#define HARD 1

typedef int system_time_type;

typedef struct
{
    process_name_type name;
    system_address_type entry_point;
    stack_size_type stack_size;
    priority_type base_priority;
    system_time_type period;
    system_time_type time_capacity;
    deadline_type deadline;
} process_attribute_type;

typedef struct
{
    process_attribute_type attributes;
    priority_type current_priority;
    system_time_type dealine_time;
    process_state_type process_state;
} process_status_type;

typedef struct
{
    process_status_type process_status;
    list_entry_t 

    void (*stop_self)(void);
    return_code_type (*suspend_self)(system_time_type time_out);
} process;

return_code_type get_process_id(process_name_type process_name, process_id_type *process_id);
return_code_type get_process_status(process_id_type process_id, process_status_type process_status);

return_code_type create_process(process_attribute_type attributes, process_id_type *process_id);

return_code_type set_ptiority(process_id_type process_id, priority_type priority);

//return_code_type suspend_self(system_time_type time_out);
return_code_type suspend(process_id_type process_id);

return_code_type resume(process_id_type process_id);

//void stop_self();
return_code_type stop(process_id_type process_id);

return_code_type start(process_id_type process_id);
return_code_type delay_start(process_id_type process_id, system_time_type delay_time);

return_code_type lock_preemption(lock_level_type *lock_level);
return_code_type unlock_preemption(lock_level_type *lock_level);

return_code_type get_my_id(process_id_type *process_id);

struct process_manager {
    const char *name;           // XXX_process_manager
};

#endif /* !__kern_process_h__ */

