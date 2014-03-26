#include "utilities/qstring.h"
#include "extensions/qlog.h"
qlog_t *qlog(const char *filepathfmt, mode_t mode, int rotateinterval,
             int options) {
    log = (qlog_t *) calloc(1, sizeof(qlog_t));
    if (rotateinterval > 0)
        log->rotateinterval = rotateinterval;
    log->write = write_;
    log->duplicate = duplicate;
    log->flush = flush_;
    log->free = free_;
static bool write_(qlog_t *log, const char *str) {
    if (log == NULL || log->fp == NULL)
        return false;
        if (log->outflush == true)
            fflush(log->outfp);
        if (log->logflush == true)
            fflush(log->fp);
static bool writef(qlog_t *log, const char *format, ...) {
    if (log == NULL || log->fp == NULL)
        return false;
    if (str == NULL)
        return false;
static bool duplicate(qlog_t *log, FILE *outfp, bool flush) {
    if (log == NULL)
        return false;
static bool flush_(qlog_t *log) {
    if (log == NULL)
        return false;
    if (log->fp != NULL && log->logflush == false)
        fflush(log->fp);
    if (log->outfp != NULL && log->outflush == false)
        fflush(log->outfp);
static void free_(qlog_t *log) {
    if (log == NULL)
        return;
static bool _real_open(qlog_t *log) {
        if (log->mode != 0)
            fchmod(fileno(log->fp), log->mode);
         existing one */
            if (log->mode != 0)
                fchmod(fileno(newfp), log->mode);
                    newfilepath);
                * log->rotateinterval - dt;