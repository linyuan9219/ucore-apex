#include "process.h"

RETURN_CODE_TYPE GET_PROCESS_ID(PROCESS_NAME_TYPE PROCESS_NAME, PROCESS_ID_TYPE *PROCESS_ID)
{
	RETURN_CODE_TYPE RETURN_CODE;
	int exists = 0;

	search in the process_list structure...
	PROCESS_STATUS_TYPE p_s;

	if (!exist)
		RETURN_CODE = INVALID_CONFIG;
	else
	{
		RETURN_CODE = NO_ERROR;
		*PROCESS_ID = p_s.ATTRIBUTES.PROCESS_ID;
	}
	return RETURN_CODE;
}

RETURN_CODE_TYPE GET_PROCESS_STATUS(PROCESS_ID_TYPE PROCESS_ID, PROCESS_STATUS_TYPE PROCESS_STATUS)
{
	RETURN_CODE_TYPE RETURN_CODE;
	int exists = 0;

	search in the process_list structure...
	PROCESS_STATUS_TYPE p_s;

	if (!exist)
		RETURN_CODE = INVALID_CONFIG;
	else
	{
		RETURN_CODE = NO_ERROR;
		*PROCESS_STATUS = p_s;
	}
	return RETURN_CODE;
}

RETURN_CODE CREATE_PROCESS(PROCESS_ATTRIBUTE_TYPE ATTRIBUTES, PROCESS_ID_TYPE *PROCESS_ID)
{
	// this is a troublesome function...
}

RETURN_CODE SET_PTIORITY(PROCESS_ID_TYPE PROCESS_ID, PRIORITY_TYPE PRIORITY)
{

}

RETURN_CODE SUSPEND_SELF(SYSTEM_TIME_TYPE TIME_OUT)
{

}

RETURN_CODE SUSPEND(PROCESS_ID_TYPE PROCESS_ID)
{
	
}
