#include "event.h"
#include "eventList.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>


Event *CreateEvent(char *name)
{

    struct _event *EventoCreado = (struct _event*) malloc(sizeof(struct _event));
    strcpy(EventoCreado->eventName,name);
    EventoCreado->next = NULL;
    return EventoCreado;

}

void DestroyEvent(Event *this)
{
    free(this);
}

