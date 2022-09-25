#include "eventList.h"
#include "event.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#ifdef DOLOG
#define LOG(...) fprintf(log,__VA_ARGS__);
#else
#define LOG(...) 
#endif

EventList *CreateEventList(void)
{
    Event *EventoCreado = (Event*) malloc(sizeof(Event));
    strcpy(EventoCreado->eventName,"Evento Inicio");
    EventoCreado->next = NULL;
    int numero = 0;
    struct _eventList *Lista = malloc(sizeof(struct _eventList));
    Lista->isEmpty = numero;
    Lista->head = EventoCreado;
    Lista->last = EventoCreado;
    return Lista;
}

void DestroyEventList(EventList *this)
{



}

Event *SearchEvent(EventList *this, char *name)
{



}

void AddEvent(EventList *this, Event *event)
{
    struct _event *SiguenteEvento = this->head;
    event->next = SiguenteEvento;
    this->head = event;
}

void RemoveEvent(EventList *this, char *name)
{


}

void ListEvents(EventList *this)
{

 
    
    
}
