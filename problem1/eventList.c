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
    EventList *Lista = malloc(sizeof(EventList));
    Lista->isEmpty=1;
    Lista->head=NULL;
    Lista->last=NULL;
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
    int prueba = 0;
    if (this->isEmpty != 1)
    {
        Event *CurrentEvent = this->head;

         while (1)
        {
            if (CurrentEvent == NULL)
            {
                break;
            }

            int A = strcmp(CurrentEvent->eventName,event->eventName);
            if (!A)
            {
                prueba = 1;
                break;
            }

            CurrentEvent =CurrentEvent->next;
        
        }
    }
    
    
    if (prueba!=1)
    {
         if (this->isEmpty == 1)
        {
        this->head = event;
        this->isEmpty = 2;
        } else if(this->isEmpty == 2)
        {
            this->head->next = event;
            this->last = event;
            this->isEmpty = 3;
        }else
        {
            this->last->next = event;
            this->last = event;
        }
    }
}

void RemoveEvent(EventList *this, char *name)
{


}

void ListEvents(EventList *this)
{

 
    
    
}
