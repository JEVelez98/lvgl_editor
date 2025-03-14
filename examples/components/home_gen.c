/**
 * @file home_gen.c
 *
 * @description Template source file for LVGL objects
 *
 */

/*********************
 *      INCLUDES
 *********************/
#include "home_gen.h"
#include "ui.h"

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/***********************
 *  STATIC VARIABLES
 **********************/

/***********************
 *  STATIC PROTOTYPES
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

lv_obj_t * home_create(lv_obj_t * parent, const char * text_label)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t style_main;
    static lv_style_t style_cont_row;
    static lv_style_t style_cont_column;
    static lv_style_t style_top_cont;
    static lv_style_t style_left_cont;
    static lv_style_t style_right_cont;

    static bool style_inited = false;

    if(!style_inited) {
        
        lv_style_init(&style_main);
        lv_style_set_bg_color(&style_main, lv_color_hex(0x000000));
        lv_style_set_radius(&style_main, 0);
        lv_style_set_border_width(&style_main, 0);
        lv_style_set_layout(&style_main, LV_LAYOUT_FLEX);
        lv_style_set_flex_flow(&style_main, LV_FLEX_FLOW_COLUMN);
        lv_style_set_width(&style_main, lv_pct(100));
        lv_style_set_height(&style_main, lv_pct(100));
        lv_style_set_pad_all(&style_main, 0);
        lv_style_set_pad_column(&style_main, 0);

        lv_style_init(&style_cont_row);
        lv_style_set_width(&style_cont_row, lv_pct(100));
        lv_style_set_bg_color(&style_cont_row, lv_color_hex(0x3333FF));
        lv_style_set_flex_flow(&style_cont_row, LV_FLEX_FLOW_ROW);
        lv_style_set_layout(&style_cont_row, LV_LAYOUT_FLEX);
        lv_style_set_radius(&style_cont_row, 10);
        lv_style_set_pad_all(&style_cont_row, 0);
        lv_style_set_border_width(&style_cont_row, 1);

        lv_style_init(&style_cont_column);
        lv_style_set_height(&style_cont_column, LV_SIZE_CONTENT);
        lv_style_set_width(&style_cont_column, LV_SIZE_CONTENT);
        lv_style_set_bg_color(&style_cont_column, lv_color_hex(0x3355FF));
        lv_style_set_flex_flow(&style_cont_column, LV_FLEX_FLOW_COLUMN);
        lv_style_set_layout(&style_cont_column, LV_LAYOUT_FLEX);
        lv_style_set_radius(&style_cont_column, 10);
        lv_style_set_pad_all(&style_cont_column, 0);
        lv_style_set_pad_row(&style_cont_column, 0);

        lv_style_init(&style_top_cont);
        lv_style_set_height(&style_top_cont, lv_pct(100));
        lv_style_set_width(&style_top_cont, lv_pct(100));
        lv_style_set_bg_color(&style_top_cont, lv_color_hex(0x3355FF));
        lv_style_set_border_width(&style_top_cont, 0);
        lv_style_set_flex_flow(&style_top_cont, LV_FLEX_FLOW_COLUMN);
        lv_style_set_flex_track_place(&style_top_cont, LV_FLEX_ALIGN_CENTER);
        lv_style_set_flex_cross_place(&style_top_cont, LV_FLEX_ALIGN_CENTER);
        lv_style_set_pad_all(&style_top_cont, 0);

        lv_style_init(&style_left_cont);
        lv_style_set_height(&style_left_cont, lv_pct(100));
        lv_style_set_width(&style_left_cont, lv_pct(100));
        lv_style_set_bg_color(&style_left_cont, lv_color_hex(0x3355FF));
        lv_style_set_border_width(&style_left_cont, 0);
        lv_style_set_flex_flow(&style_left_cont, LV_FLEX_FLOW_COLUMN);
        lv_style_set_flex_track_place(&style_left_cont, LV_FLEX_ALIGN_CENTER);
        lv_style_set_flex_cross_place(&style_left_cont, LV_FLEX_ALIGN_CENTER);
        lv_style_set_pad_all(&style_left_cont, 0);

        lv_style_init(&style_right_cont);
        lv_style_set_height(&style_right_cont, lv_pct(100));
        lv_style_set_width(&style_right_cont, lv_pct(100));
        lv_style_set_bg_color(&style_right_cont, lv_color_hex(0x3355FF));
        lv_style_set_border_width(&style_right_cont, 0);
        lv_style_set_flex_flow(&style_right_cont, LV_FLEX_FLOW_COLUMN);
        lv_style_set_flex_track_place(&style_right_cont, LV_FLEX_ALIGN_CENTER);
        lv_style_set_flex_cross_place(&style_right_cont, LV_FLEX_ALIGN_CENTER);
        lv_style_set_pad_all(&style_right_cont, 0);

        style_inited = true;
    }

    lv_obj_t * lv_obj = lv_obj_create(parent);

    lv_obj_add_style(lv_obj, &style_main, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t * lv_obj_1 = lv_obj_create(lv_obj);
    lv_obj_add_style(lv_obj_1, &style_cont_row, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_width(lv_obj_1, lv_pct(100));
    lv_obj_set_height(lv_obj_1, lv_pct(12));

    lv_obj_t * lv_obj_2 = lv_obj_create(lv_obj_1);
    lv_obj_add_style(lv_obj_2, &style_top_cont, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_flex_grow(lv_obj_2, 1);

    lv_obj_t * h3_1 = h3_create(lv_obj_2, text_label);
    lv_obj_set_align(h3_1, LV_ALIGN_CENTER);

    lv_obj_t * lv_obj_3 = lv_obj_create(lv_obj);
    lv_obj_add_style(lv_obj_3, &style_cont_row, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_width(lv_obj_3, lv_pct(100));
    lv_obj_set_height(lv_obj_3, lv_pct(85));

    lv_obj_t * lv_obj_4 = lv_obj_create(lv_obj_3);
    lv_obj_add_style(lv_obj_4, &style_left_cont, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_flex_grow(lv_obj_4, 1);

    lv_obj_t * h3_2 = h3_create(lv_obj_4, text_label);
    lv_obj_set_align(h3_2, LV_ALIGN_CENTER);

    lv_obj_t * lv_obj_5 = lv_obj_create(lv_obj_3);
    lv_obj_add_style(lv_obj_5, &style_right_cont, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_flex_grow(lv_obj_5, 1);

    lv_obj_t * h3_3 = h3_create(lv_obj_5, text_label);
    lv_obj_set_align(h3_3, LV_ALIGN_CENTER);



    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj;
}
/**********************
 *   STATIC FUNCTIONS
 **********************/
