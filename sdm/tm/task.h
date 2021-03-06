// Task classes definitions		Cannon 1/05
#ifndef __TASK_H_
#define __TASK_H_

#include <string.h>
#include "../common/message/SDMComponent_ID.h"
#include "../common/task/SDMTaskResources.h"
#include "../common/task/taskdefs.h"


class Task
{
public:
	Task();
	Task(const Task&);
	~Task();
	void InitTask ();
	void Delete ();
	void SetTask (char state, char priority, unsigned int pid, const SDMTaskResources& resources, char *filename, int timeout, int aMode, int aVersion);
	Task& operator= (const Task& t);
	
	void SetPM(const SDMComponent_ID& PM);
	SDMComponent_ID GetPM() const { return pmComponentID; }
public:
	SDMComponent_ID pmComponentID;
	char state;
	char priority;
	unsigned int pid;
	SDMTaskResources resources;
	char *filename;
	int timeout;			// The timeout time needed to wait until the task should be scheduled
	int taskMode;
	int taskVersion;
};

#endif
