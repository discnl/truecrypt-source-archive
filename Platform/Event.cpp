#include "Event.h"

namespace TrueCrypt
{
	void Event::Connect (const EventConnectorBase &connector)
	{
		ScopeLock lock (HandlersMutex);
		ConnectedHandlers.push_back (shared_ptr <EventConnectorBase> (connector.CloneNew()));
	}
	
	void Event::Disconnect (void *handler)
	{
		ScopeLock lock (HandlersMutex);

		EventHandlerList newConnectedHandlers;
		foreach (shared_ptr <EventConnectorBase> h, ConnectedHandlers)
		{
			if (h->GetHandler() != handler)
				newConnectedHandlers.push_back (h);
		}

		ConnectedHandlers = newConnectedHandlers;
	}

	void Event::Raise ()
	{
		EventArgs args;
		Raise (args);
	}

	void Event::Raise (EventArgs &args)
	{
		ScopeLock lock (HandlersMutex);
		foreach_ref (EventConnectorBase &handler, ConnectedHandlers)
		{
			handler (args);
		}
	}
}
