#ifndef SKEGN_H_
#define SKEGN_H_

#define SKEGN_VERSION "3.4.1"

#if (!(defined SKEGN_CALL) || !(defined SKEGN_IMPORT_OR_EXPORT))
#if defined __WIN32__ || defined _WIN32 || defined _WIN64
#define SKEGN_CALL __stdcall
#ifdef SKEGN_IMPLEMENTION
#define SKEGN_IMPORT_OR_EXPORT __declspec(dllexport)
#else
#define SKEGN_IMPORT_OR_EXPORT __declspec(dllimport)
#endif
#else
#define SKEGN_CALL
#define SKEGN_IMPORT_OR_EXPORT __attribute((visibility("default")))
#endif
#endif

#ifdef __cplusplus
extern "C" {
#endif
    enum {
        NONE,                           //Success without error
        SGN_BADCFG,                     //Cfg setting error
        SGN_OUT_OF_MEMORY,              //There is not enough memory
        SGN_NO_ACCESS_OF_PROVISION,     //Path of provision profile can't be writen
        SGN_PARAMETER_WRONG,            //Parameter setting error
        SGN_FAIL_CREATE_BYTE,           //Socket creation failed
        SGN_CLOUD_THREAD_FAIL,          //Cloud thread creation failed
        SGN_NATIVE_THRED_FAIL,          //Native thread creation failed
        SGN_SEND_ERROR,                 //Send() function failed
        SGN_SOCKET_CLOSE,               //Socket connection closed
        SGN_ERROFIO,                    //A I/O error occurred while reading from or writing to the file system.
        SGN_SIGNAL_INTERRUPTION,        //A signal interrupts the system call before any data is transmitted.
        SGN_EAGAIN,                     //The socket is marked non-blocking and the requested operation would block.
        SGN_SEND_NO_MEMORY,             //Not enough memory for send()
        SGN_EBADF,                      //An invalid descriptor is specified
        SGN_ADDRESS_NOT_AVAILABLE,      //The specified address is not available or no longer available on this machine
        SGN_SEND_NOBUFS,                //The system is unable to allocate an internal buffer
        SGN_CONNECTION_RESET,           //A connection is forcibly closed by a peer
        SGN_HOST_UNREACH,               //The destination address specifies an unreachable host
        SGN_NETDOWN,                    //The local network interface used to reach the destination is down
        SGN_CON_NOSUPPORT,              //Addresses in the specified address family cannot be used with this socket
        SGN_FUNCTION_FEED_BEFORE_START, //Function call sequence error feed before start
        SGN_FUNCTION_WAIT_FOR_CALLBACK, //Wait for last callback and i will cancel 
        SGN_FUNCTION_START_AND_START,   //Function call sequence error start and start again
        SGN_FUNCTION_STOP_AND_STOP,     //Function call sequence error stop and stop again
        SGN_FUNCTION_STOP_BEFORE_START, //Function call sequence error stop before start or already callback then stop
        SGN_BAD_PRAMA,                  //Start prama setting error
        SGN_NATIVE_CN_RESOURCE_FAIL,    //Native chinese resource init failed or native res is not exist
        SGN_NATIVE_EN_RESOURCE_FAIL,    //Native English resource init failed or native res is not exist
        SGN_NATIVE_AUTH_FAIL,           //Native mode authorization failed ,the certificate invalid
        SGN_NATIVE_CREATE_ENGINE_FAIL,  //Create engine object failed
        SGN_ENGINE_IS_NULL,             //Engine pointer is empty
        SGN_ID_IS_NULL,                 //Tokenid is empty
        SGN_CALLBACK_IS_NULL,           //Callback fun is empty
        SGN_EVENT_IS_NULL               //Event pointer is empty
    };
#ifdef __cplusplus
}
#endif
#endif
