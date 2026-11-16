#pragma once
#include <stdbool.h>

void usb_storage_init(void);
bool usb_storage_task(void);
void usb_storage_deinit(void);
/* End the storage session without a host eject (serial `eject`). The host
 * must have unmounted the drive first. Returns false when no storage session
 * is running or the SD card could not be synced. */
bool usb_storage_request_exit(void);
