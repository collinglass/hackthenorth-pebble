#include <pebble.h>

#ifndef EP_UTIL_H
#define EP_UTIL_H

void ep_set_debug(bool b);
TextLayer* ep_init_text_layer(GRect location, GColor colour, GColor background, bool custom_font, int custom_res_id, const char *res_id, GTextAlignment alignment);
void ep_init_app_message(int inbound_size, int outbound_size, AppMessageInboxReceived in_received_handler);
void ep_animate_layer(Layer *layer, GRect start, GRect finish, int duration, int delay);
void ep_send_int(uint8_t key, uint8_t cmd);
void ep_applog(char* message);
void ep_interpret_message_result(AppMessageResult app_message_error);
void ep_breakpoint();
void ep_fill_chamfer_rect(GContext *ctx, int margin, int width, int height);

#endif