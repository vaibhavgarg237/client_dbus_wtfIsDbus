/*    
    NOTE: Below code is a Client code using System wide BUS, dbus communication. This is minimal code so as to remove complexities. No warranty whatsover!
          You may use below code however you like!  💪 Open source! 
        - Vaibhav Garg
*/

#include<iostream>
#include <dbus/dbus.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<unistd.h>
using namespace std;
 
static void check_and_abort(DBusError *error);

int main() {
    DBusConnection *connection;
    DBusError error;
    DBusMessage * msg;
 
    dbus_error_init(&error);
    connection = dbus_bus_get(DBUS_BUS_SYSTEM, &error);
    check_and_abort(&error);
 
    dbus_uint32_t serial = 0;
    while(1) {
        msg = dbus_message_new_signal("/org/Samsung/VaibhavGarg",
                                       "org.Samsung.VaibhavGarg",
                                        "VaibhavGarg");
        if (NULL == msg)
        {
            cout<<"msg null"<<endl;
        }
        else
        {
            if (!dbus_connection_send(connection, msg, &serial))
            {
                cout<<"dbus_connection_send failed to send"<<endl;
            }
            else
            {
                cout<<"[Client] Message Sent!"<<endl;
                sleep(5);
            }   
        }
    }
     
    return 0;
}

static void check_and_abort(DBusError *error) {
    if (dbus_error_is_set(error)) {
        puts(error->message);
        abort();
    }
}