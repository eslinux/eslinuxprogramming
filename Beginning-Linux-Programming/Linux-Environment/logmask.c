#include <syslog.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
    int logmask;
    openlog("logmask", LOG_PID|LOG_CONS, LOG_USER);

    /*
     * ghi ra /var/log/messages
     *
     */
    syslog(LOG_INFO,"informative message, pid = %d", getpid());

    /*
     * ghi ra /var/log/debug
     *
     */
    syslog(LOG_DEBUG,"debug message, should appear");

    /*
     * Bỏ qua tất cả các msg có priority < LOG_NOTICE
     *
     */
    logmask = setlogmask(LOG_UPTO(LOG_NOTICE));
    syslog(LOG_DEBUG,"debug message, should not appear");

    exit(0);
}
