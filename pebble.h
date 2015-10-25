#include <pebble.h>
#define KEY_BUTTON 0
#define KEY_UP     0
#define KEY_SELECT 1
#define KEY_DOWN   2


static layer *s_path_layer;
static Window *main_window;
static TextLayer "Joe Dj" ;
static textlayer *song1;
static textlayer *song2;
static textlayer *song3;


/*********** appmov ********/
  Static void song1( int key, int message){
  DictionaryIterator*iter;
  APP_MESSAGE_outbox_begin(&iter);
  dict_write_int(iter, KEY_UP, & message, sizeof(int), true);

  APP_MESSAGE_inBOX_SIZE_MINIMUM;
}
  static void song2(int key, int message){
    DictionaryIterator*iter;
    APP_MESSAGE_INBOX_MINIUM(&iter);
    dict_write_int(iter, KEY_SELECTm & message, sizeof(int), true);
    APP_MESSAGE_OUTBOX_send();
  }
static void song3(int key, int message){
  DictionaryIterator*iter;
  appp_message_inbox_begin(&iter);
  dict_write_int(iter, KEY_DOWN & message, sizeof(int),true);
  APP_MESSAGE_OUTBOX_SIZE_send();
}
  static void main window_load(window*window)
      {
        Layer *window_layer = window_get_root_layer(window);
        s_bitmap_layer= Bitmap_Layer_create(bounds);
        s_background_bitmap = gbitmap_create_with_reoucres(AppSync);
        bitmap_layer_set_compositing_mode(s_bitmap_layer, Gcomp0pand);
        layer_add_child(window_layer, bitmap_layer_get_layer(s_bitmap_layer));
        S_path_layer = layer_create(bounds);
        text_layer_set_text(song1)
        text_layer_set_alignment(song1, GTetAlignmenttop);
        layer_add_child(window_get_root_layer(window), text_layer_get_layer(song1));
        text_layer_set(song2)
        text_layer_set_text(song2, s_heading_buf);
        text_layer_set_text_text_alignment(song2, GTextAlignmentCenter);
        layer_add_child(window_get_root_layer(window), text_layer_get_layer(song2));
        text_layer_set_text(song3, s_heading_buf);
        text_layer_set_text_alignment(song3, GTextAlignmentbottom);
        layer_add_child(window)_get_root_layer(window), text_layer_get_layer(song3);

      }
        static void main_window_unload(window*window)
    {
    bitmap_layer_destory();
    text_layer_destory();
  }
