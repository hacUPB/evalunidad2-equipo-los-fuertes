#include "event.h"
#include "eventList.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>


Event *CreateEvent(char *name)
{
     char a[15];
    Event *EventoCreado = malloc(sizeof(Event));
    strncpy(EventoCreado->eventName,name,sizeof(a));
    EventoCreado->next = NULL;
    return   EventoCreado;

}

void DestroyEvent(Event *this)
{
    free(this);
}

