# dbus SERVER

D-Bus(Desktop bus): 
- Message bus system providing an inter-process communication channel
- Part of the systems application suite
- Helps in application and system services to communicate with each other
- Applications send & receive messages through message bus
- Publish subscribe model 

## Bus Types
- DBUS_BUS_SYSTEM: System-wide D-Bus: main instance for sys communication
- DBUS_BUS_SESSION: Session-specific D-Bus instances: Instance running for a partial user…

## Package Required: 
- libdbus-1-dev

## NOTE: 
#### This code is a Client code using System wide BUS, dbus communication. This is minimal code so as to remove complexities. No warranty whatsover!
    You may use below code however you like!  💪 Open source! 
    - Vaibhav Garg

## Logs
```
vaibhav@vaibhav-Lenovo-ideapad:~/Desktop/attempt4/client$ /home/vaibhav/Desktop/attempt4/client/build/wtfIsDbus
[Client] Message Sent!
[Client] Message Sent!
[Client] Message Sent!
[Client] Message Sent!
```