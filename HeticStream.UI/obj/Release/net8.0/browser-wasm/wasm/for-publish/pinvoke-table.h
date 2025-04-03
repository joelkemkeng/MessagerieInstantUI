// GENERATED FILE, DO NOT MODIFY

int eglGetProcAddress (int);
void GlobalizationNative_ChangeCase (int,int,int,int,int);
void GlobalizationNative_ChangeCaseInvariant (int,int,int,int,int);
void GlobalizationNative_ChangeCaseTurkish (int,int,int,int,int);
void GlobalizationNative_CloseSortHandle (int);
int GlobalizationNative_CompareString (int,int,int,int,int,int);
int GlobalizationNative_EndsWith (int,int,int,int,int,int,int);
int GlobalizationNative_EnumCalendarInfo (int,int,int,int,int);
int GlobalizationNative_GetCalendarInfo (int,int,int,int,int);
int GlobalizationNative_GetCalendars (int,int,int);
int GlobalizationNative_GetDefaultLocaleName (int,int);
int GlobalizationNative_GetJapaneseEraStartDate (int,int,int,int);
int GlobalizationNative_GetLatestJapaneseEra ();
int GlobalizationNative_GetLocaleInfoGroupingSizes (int,int,int,int);
int GlobalizationNative_GetLocaleInfoInt (int,int,int);
int GlobalizationNative_GetLocaleInfoString (int,int,int,int,int);
int GlobalizationNative_GetLocaleName (int,int,int);
int GlobalizationNative_GetLocales (int,int);
int GlobalizationNative_GetLocaleTimeFormat (int,int,int,int);
int GlobalizationNative_GetSortHandle (int,int);
int GlobalizationNative_GetSortKey (int,int,int,int,int,int);
int GlobalizationNative_IndexOf (int,int,int,int,int,int,int);
void GlobalizationNative_InitICUFunctions (int,int,int,int);
void GlobalizationNative_InitOrdinalCasingPage (int,int);
int GlobalizationNative_IsPredefinedLocale (int);
int GlobalizationNative_LastIndexOf (int,int,int,int,int,int,int);
int GlobalizationNative_LoadICU ();
int GlobalizationNative_NormalizeString (int,int,int,int,int);
int GlobalizationNative_StartsWith (int,int,int,int,int,int,int);
int GlobalizationNative_ToAscii (int,int,int,int,int);
int GlobalizationNative_ToUnicode (int,int,int,int,int);
void gr_backendrendertarget_delete (int);
int gr_backendrendertarget_new_gl (int,int,int,int,int);
int gr_backendrendertarget_new_vulkan (int,int,int,int);
void gr_direct_context_abandon_context (int);
void gr_direct_context_flush (int);
void gr_direct_context_flush_and_submit (int,int);
int gr_direct_context_make_gl (int);
int gr_direct_context_make_gl_with_options (int,int);
int gr_direct_context_make_vulkan (int);
int gr_direct_context_make_vulkan_with_options (int,int);
void gr_direct_context_release_resources_and_abandon_context (int);
void gr_direct_context_reset_context (int,int);
void gr_direct_context_set_resource_cache_limit (int,int);
int gr_glinterface_assemble_gl_interface (int,int);
int gr_glinterface_assemble_gles_interface (int,int);
int gr_glinterface_create_native_interface ();
int gr_recording_context_get_max_surface_sample_count_for_color_type (int,int);
int hb_blob_create (int,int,int,int,int);
void hb_blob_destroy (int);
void hb_buffer_add_utf16 (int,int,int,int,int);
int hb_buffer_create ();
void hb_buffer_destroy (int);
int hb_buffer_get_content_type (int);
int hb_buffer_get_direction (int);
int hb_buffer_get_glyph_infos (int,int);
int hb_buffer_get_glyph_positions (int,int);
int hb_buffer_get_length (int);
void hb_buffer_guess_segment_properties (int);
void hb_buffer_reverse (int);
void hb_buffer_set_direction (int,int);
void hb_buffer_set_language (int,int);
int hb_face_create_for_tables (int,int,int);
void hb_face_destroy (int);
int hb_face_get_upem (int);
void hb_face_set_upem (int,int);
void hb_feature_to_string (int,int,int);
int hb_font_create (int);
void hb_font_destroy (int);
int hb_font_get_glyph (int,int,int,int);
int hb_font_get_glyph_h_advance (int,int);
void hb_font_get_glyph_h_advances (int,int,int,int,int,int);
void hb_font_get_scale (int,int,int);
int hb_language_from_string (int,int);
int hb_language_get_default ();
int hb_language_to_string (int);
void hb_ot_font_set_funcs (int);
int hb_ot_metrics_get_position (int,int,int);
int hb_shape_full (int,int,int,int,int);
void sk_bitmap_destructor (int);
void sk_bitmap_get_info (int,int);
int sk_bitmap_get_pixels (int,int);
int sk_bitmap_get_row_bytes (int);
int sk_bitmap_make_shader (int,int,int,int);
int sk_bitmap_new ();
int sk_bitmap_try_alloc_pixels (int,int,int);
void sk_canvas_clear (int,int);
void sk_canvas_clip_path_with_operation (int,int,int,int);
void sk_canvas_clip_rect_with_operation (int,int,int,int);
void sk_canvas_clip_region (int,int,int);
void sk_canvas_clip_rrect_with_operation (int,int,int,int);
void sk_canvas_destroy (int);
void sk_canvas_draw_drrect (int,int,int,int);
void sk_canvas_draw_image_rect (int,int,int,int,int);
void sk_canvas_draw_line (int,float,float,float,float,int);
void sk_canvas_draw_paint (int,int);
void sk_canvas_draw_path (int,int,int);
void sk_canvas_draw_rect (int,int,int);
void sk_canvas_draw_region (int,int,int);
void sk_canvas_draw_rrect (int,int,int);
void sk_canvas_draw_text_blob (int,int,float,float,int);
void sk_canvas_flush (int);
void sk_canvas_get_total_matrix (int,int);
void sk_canvas_reset_matrix (int);
void sk_canvas_restore (int);
void sk_canvas_restore_to_count (int,int);
int sk_canvas_save (int);
int sk_canvas_save_layer (int,int,int);
void sk_canvas_set_matrix (int,int);
void sk_codec_destroy (int);
void sk_codec_get_info (int,int);
int sk_codec_get_pixels (int,int,int,int,int);
int sk_codec_min_buffered_bytes_needed ();
int sk_codec_new_from_stream (int,int);
void sk_color_get_bit_shift (int,int,int,int);
void sk_color4f_from_color (int,int);
int sk_color4f_to_color (int);
int sk_colorfilter_new_table_argb (int,int,int,int);
int sk_colorspace_new_srgb ();
int sk_colorspace_new_srgb_linear ();
void sk_colorspace_unref (int);
int sk_colortype_get_default_8888 ();
void sk_compatpaint_delete (int);
int sk_compatpaint_get_font (int);
int sk_compatpaint_new ();
void sk_compatpaint_reset (int);
int sk_data_new_empty ();
void sk_data_unref (int);
void sk_dynamicmemorywstream_destroy (int);
int sk_dynamicmemorywstream_detach_as_stream (int);
int sk_dynamicmemorywstream_new ();
void sk_font_delete (int);
void sk_font_get_widths_bounds (int,int,int,int,int,int);
int sk_font_new_with_values (int,float,float,float);
void sk_font_set_edging (int,int);
void sk_font_set_embolden (int,int);
void sk_font_set_hinting (int,int);
void sk_font_set_linear_metrics (int,int);
void sk_font_set_subpixel (int,int);
int sk_fontmgr_count_families (int);
int sk_fontmgr_create_default ();
void sk_fontmgr_get_family_name (int,int,int);
int sk_fontmgr_match_family_style (int,int,int);
int sk_fontmgr_match_family_style_character (int,int,int,int,int,int);
int sk_fontmgr_ref_default ();
void sk_fontstyle_delete (int);
int sk_fontstyle_get_slant (int);
int sk_fontstyle_get_weight (int);
int sk_fontstyle_get_width (int);
int sk_fontstyle_new (int,int,int);
int sk_image_make_shader (int,int,int,int);
int sk_image_read_pixels (int,int,int,int,int,int,int);
int sk_imagefilter_new_blur (float,float,int,int,int);
int sk_imagefilter_new_drop_shadow (float,float,float,float,int,int,int);
void sk_managedstream_destroy (int);
int sk_managedstream_new (int);
void sk_managedstream_set_procs (int);
void sk_matrix_concat (int,int,int);
void sk_matrix_pre_concat (int,int);
int sk_paint_get_fill_path (int,int,int,int,float);
int sk_paint_get_path_effect (int);
void sk_paint_set_antialias (int,int);
void sk_paint_set_blendmode (int,int);
void sk_paint_set_color (int,int);
void sk_paint_set_color4f (int,int,int);
void sk_paint_set_filter_quality (int,int);
void sk_paint_set_imagefilter (int,int);
void sk_paint_set_path_effect (int,int);
void sk_paint_set_shader (int,int);
void sk_paint_set_stroke_cap (int,int);
void sk_paint_set_stroke_join (int,int);
void sk_paint_set_stroke_miter (int,float);
void sk_paint_set_stroke_width (int,float);
void sk_paint_set_style (int,int);
void sk_path_add_oval (int,int,int);
void sk_path_add_path (int,int,int);
void sk_path_add_rect (int,int,int);
void sk_path_arc_to (int,float,float,float,int,int,float,float);
int sk_path_clone (int);
void sk_path_close (int);
int sk_path_contains (int,float,float);
void sk_path_cubic_to (int,float,float,float,float,float,float);
void sk_path_delete (int);
int sk_path_effect_create_dash (int,int,float);
void sk_path_line_to (int,float,float);
void sk_path_move_to (int,float,float);
int sk_path_new ();
void sk_path_quad_to (int,float,float,float,float);
void sk_path_set_filltype (int,int);
void sk_path_transform (int,int);
int sk_pathop_op (int,int,int,int);
int sk_pathop_tight_bounds (int,int);
void sk_picture_get_cull_rect (int,int);
int sk_picture_make_shader (int,int,int,int,int);
int sk_picture_recorder_begin_recording (int,int);
void sk_picture_recorder_delete (int);
int sk_picture_recorder_end_recording (int);
int sk_picture_recorder_new ();
void sk_refcnt_safe_unref (int);
void sk_region_delete (int);
void sk_region_get_bounds (int,int);
int sk_region_intersects_rect (int,int);
int sk_region_is_empty (int);
int sk_region_new ();
int sk_region_op_rect (int,int,int);
int sk_region_set_empty (int);
void sk_rrect_delete (int);
void sk_rrect_get_radii (int,int,int);
void sk_rrect_get_rect (int,int);
void sk_rrect_inset (int,float,float);
int sk_rrect_new ();
void sk_rrect_outset (int,float,float);
void sk_rrect_set_empty (int);
void sk_rrect_set_rect (int,int);
void sk_rrect_set_rect_radii (int,int,int);
int sk_shader_new_blend (int,int,int);
int sk_shader_new_color (int);
int sk_shader_new_linear_gradient (int,int,int,int,int,int);
int sk_shader_new_radial_gradient (int,float,int,int,int,int,int);
int sk_shader_new_sweep_gradient (int,int,int,int,int,float,float,int);
int sk_shader_new_two_point_conical_gradient (int,float,int,float,int,int,int,int,int);
int sk_shader_with_color_filter (int,int);
void sk_stream_asset_destroy (int);
int sk_stream_get_length (int);
int sk_stream_get_position (int);
int sk_stream_has_length (int);
int sk_stream_has_position (int);
int sk_stream_is_at_end (int);
int sk_stream_read (int,int,int);
int sk_stream_seek (int,int);
void sk_string_destructor (int);
int sk_string_get_c_str (int);
int sk_string_get_size (int);
int sk_string_new_empty ();
void sk_surface_draw (int,int,float,float,int);
void sk_surface_flush (int);
void sk_surface_flush_and_submit (int,int);
int sk_surface_get_canvas (int);
int sk_surface_new_backend_render_target (int,int,int,int,int,int);
int sk_surface_new_image_snapshot (int);
int sk_surface_new_raster (int,int,int);
int sk_surface_new_raster_direct (int,int,int,int,int,int);
int sk_surface_new_render_target (int,int,int,int,int,int,int);
void sk_surfaceprops_delete (int);
int sk_surfaceprops_new (int,int);
void sk_textblob_builder_alloc_run_pos (int,int,int,int,int);
void sk_textblob_builder_delete (int);
int sk_textblob_builder_make (int);
int sk_textblob_builder_new ();
int sk_textblob_get_intercepts (int,int,int,int);
void sk_textblob_unref (int);
int sk_typeface_count_glyphs (int);
int sk_typeface_create_from_stream (int,int);
int sk_typeface_get_family_name (int);
int sk_typeface_get_font_slant (int);
int sk_typeface_get_font_weight (int);
int sk_typeface_get_fontstyle (int);
int sk_typeface_get_table_data (int,int,int,int,int);
int sk_typeface_get_table_size (int,int);
int sk_typeface_get_units_per_em (int);
int sk_typeface_is_fixed_pitch (int);
int sk_typeface_open_stream (int,int);
int sk_typeface_ref_default ();
int sk_version_get_increment ();
int sk_version_get_milestone ();
void sk_wstream_flush (int);
int sk_wstream_write (int,int,int);
int SystemNative_Close (int);
int SystemNative_CloseDir (int);
int SystemNative_ConvertErrorPalToPlatform (int);
int SystemNative_ConvertErrorPlatformToPal (int);
int SystemNative_FAllocate (int,int64_t,int64_t);
int SystemNative_FLock (int,int);
void SystemNative_Free (int);
int SystemNative_FStat (int,int);
int SystemNative_FTruncate (int,int64_t);
int SystemNative_GetCryptographicallySecureRandomBytes (int,int);
int SystemNative_GetCwd (int,int);
int SystemNative_GetEnv (int);
int SystemNative_GetErrNo ();
int SystemNative_GetFileSystemType (int);
void SystemNative_GetNonCryptographicallySecureRandomBytes (int,int);
int SystemNative_GetReadDirRBufferSize ();
int64_t SystemNative_GetSystemTimeAsTicks ();
uint64_t SystemNative_GetTimestamp ();
int SystemNative_GetTimeZoneData (int,int);
void SystemNative_LowLevelMonitor_Acquire (int);
int SystemNative_LowLevelMonitor_Create ();
void SystemNative_LowLevelMonitor_Destroy (int);
void SystemNative_LowLevelMonitor_Release (int);
void SystemNative_LowLevelMonitor_Signal_Release (int);
int SystemNative_LowLevelMonitor_TimedWait (int,int);
void SystemNative_LowLevelMonitor_Wait (int);
int64_t SystemNative_LSeek (int,int64_t,int);
int SystemNative_LStat (int,int);
int SystemNative_Malloc (int);
int SystemNative_Open (int,int,int);
int SystemNative_OpenDir (int);
int SystemNative_PosixFAdvise (int,int64_t,int64_t,int);
int SystemNative_PRead (int,int,int,int64_t);
int SystemNative_Read (int,int,int);
int SystemNative_ReadDirR (int,int,int,int);
int SystemNative_ReadLink (int,int,int);
int SystemNative_SchedGetCpu ();
void SystemNative_SetErrNo (int);
int SystemNative_Stat (int,int);
int SystemNative_StrErrorR (int,int,int);
int SystemNative_Unlink (int);
static PinvokeImport libSkiaSharp_imports [] = {
{"eglGetProcAddress", eglGetProcAddress}, // Avalonia.Browser
{"gr_backendrendertarget_delete", gr_backendrendertarget_delete}, // SkiaSharp
{"gr_backendrendertarget_new_gl", gr_backendrendertarget_new_gl}, // SkiaSharp
{"gr_backendrendertarget_new_vulkan", gr_backendrendertarget_new_vulkan}, // SkiaSharp
{"gr_direct_context_abandon_context", gr_direct_context_abandon_context}, // SkiaSharp
{"gr_direct_context_flush", gr_direct_context_flush}, // SkiaSharp
{"gr_direct_context_flush_and_submit", gr_direct_context_flush_and_submit}, // SkiaSharp
{"gr_direct_context_make_gl", gr_direct_context_make_gl}, // SkiaSharp
{"gr_direct_context_make_gl_with_options", gr_direct_context_make_gl_with_options}, // SkiaSharp
{"gr_direct_context_make_vulkan", gr_direct_context_make_vulkan}, // SkiaSharp
{"gr_direct_context_make_vulkan_with_options", gr_direct_context_make_vulkan_with_options}, // SkiaSharp
{"gr_direct_context_release_resources_and_abandon_context", gr_direct_context_release_resources_and_abandon_context}, // SkiaSharp
{"gr_direct_context_reset_context", gr_direct_context_reset_context}, // SkiaSharp
{"gr_direct_context_set_resource_cache_limit", gr_direct_context_set_resource_cache_limit}, // SkiaSharp
{"gr_glinterface_assemble_gl_interface", gr_glinterface_assemble_gl_interface}, // SkiaSharp
{"gr_glinterface_assemble_gles_interface", gr_glinterface_assemble_gles_interface}, // SkiaSharp
{"gr_glinterface_create_native_interface", gr_glinterface_create_native_interface}, // SkiaSharp
{"gr_recording_context_get_max_surface_sample_count_for_color_type", gr_recording_context_get_max_surface_sample_count_for_color_type}, // SkiaSharp
{"sk_bitmap_destructor", sk_bitmap_destructor}, // SkiaSharp
{"sk_bitmap_get_info", sk_bitmap_get_info}, // SkiaSharp
{"sk_bitmap_get_pixels", sk_bitmap_get_pixels}, // SkiaSharp
{"sk_bitmap_get_row_bytes", sk_bitmap_get_row_bytes}, // SkiaSharp
{"sk_bitmap_make_shader", sk_bitmap_make_shader}, // SkiaSharp
{"sk_bitmap_new", sk_bitmap_new}, // SkiaSharp
{"sk_bitmap_try_alloc_pixels", sk_bitmap_try_alloc_pixels}, // SkiaSharp
{"sk_canvas_clear", sk_canvas_clear}, // SkiaSharp
{"sk_canvas_clip_path_with_operation", sk_canvas_clip_path_with_operation}, // SkiaSharp
{"sk_canvas_clip_rect_with_operation", sk_canvas_clip_rect_with_operation}, // SkiaSharp
{"sk_canvas_clip_region", sk_canvas_clip_region}, // SkiaSharp
{"sk_canvas_clip_rrect_with_operation", sk_canvas_clip_rrect_with_operation}, // SkiaSharp
{"sk_canvas_destroy", sk_canvas_destroy}, // SkiaSharp
{"sk_canvas_draw_drrect", sk_canvas_draw_drrect}, // SkiaSharp
{"sk_canvas_draw_image_rect", sk_canvas_draw_image_rect}, // SkiaSharp
{"sk_canvas_draw_line", sk_canvas_draw_line}, // SkiaSharp
{"sk_canvas_draw_paint", sk_canvas_draw_paint}, // SkiaSharp
{"sk_canvas_draw_path", sk_canvas_draw_path}, // SkiaSharp
{"sk_canvas_draw_rect", sk_canvas_draw_rect}, // SkiaSharp
{"sk_canvas_draw_region", sk_canvas_draw_region}, // SkiaSharp
{"sk_canvas_draw_rrect", sk_canvas_draw_rrect}, // SkiaSharp
{"sk_canvas_draw_text_blob", sk_canvas_draw_text_blob}, // SkiaSharp
{"sk_canvas_flush", sk_canvas_flush}, // SkiaSharp
{"sk_canvas_get_total_matrix", sk_canvas_get_total_matrix}, // SkiaSharp
{"sk_canvas_reset_matrix", sk_canvas_reset_matrix}, // SkiaSharp
{"sk_canvas_restore", sk_canvas_restore}, // SkiaSharp
{"sk_canvas_restore_to_count", sk_canvas_restore_to_count}, // SkiaSharp
{"sk_canvas_save", sk_canvas_save}, // SkiaSharp
{"sk_canvas_save_layer", sk_canvas_save_layer}, // SkiaSharp
{"sk_canvas_set_matrix", sk_canvas_set_matrix}, // SkiaSharp
{"sk_codec_destroy", sk_codec_destroy}, // SkiaSharp
{"sk_codec_get_info", sk_codec_get_info}, // SkiaSharp
{"sk_codec_get_pixels", sk_codec_get_pixels}, // SkiaSharp
{"sk_codec_min_buffered_bytes_needed", sk_codec_min_buffered_bytes_needed}, // SkiaSharp
{"sk_codec_new_from_stream", sk_codec_new_from_stream}, // SkiaSharp
{"sk_color_get_bit_shift", sk_color_get_bit_shift}, // SkiaSharp
{"sk_color4f_from_color", sk_color4f_from_color}, // SkiaSharp
{"sk_color4f_to_color", sk_color4f_to_color}, // SkiaSharp
{"sk_colorfilter_new_table_argb", sk_colorfilter_new_table_argb}, // SkiaSharp
{"sk_colorspace_new_srgb", sk_colorspace_new_srgb}, // SkiaSharp
{"sk_colorspace_new_srgb_linear", sk_colorspace_new_srgb_linear}, // SkiaSharp
{"sk_colorspace_unref", sk_colorspace_unref}, // SkiaSharp
{"sk_colortype_get_default_8888", sk_colortype_get_default_8888}, // SkiaSharp
{"sk_compatpaint_delete", sk_compatpaint_delete}, // SkiaSharp
{"sk_compatpaint_get_font", sk_compatpaint_get_font}, // SkiaSharp
{"sk_compatpaint_new", sk_compatpaint_new}, // SkiaSharp
{"sk_compatpaint_reset", sk_compatpaint_reset}, // SkiaSharp
{"sk_data_new_empty", sk_data_new_empty}, // SkiaSharp
{"sk_data_unref", sk_data_unref}, // SkiaSharp
{"sk_dynamicmemorywstream_destroy", sk_dynamicmemorywstream_destroy}, // SkiaSharp
{"sk_dynamicmemorywstream_detach_as_stream", sk_dynamicmemorywstream_detach_as_stream}, // SkiaSharp
{"sk_dynamicmemorywstream_new", sk_dynamicmemorywstream_new}, // SkiaSharp
{"sk_font_delete", sk_font_delete}, // SkiaSharp
{"sk_font_get_widths_bounds", sk_font_get_widths_bounds}, // SkiaSharp
{"sk_font_new_with_values", sk_font_new_with_values}, // SkiaSharp
{"sk_font_set_edging", sk_font_set_edging}, // SkiaSharp
{"sk_font_set_embolden", sk_font_set_embolden}, // SkiaSharp
{"sk_font_set_hinting", sk_font_set_hinting}, // SkiaSharp
{"sk_font_set_linear_metrics", sk_font_set_linear_metrics}, // SkiaSharp
{"sk_font_set_subpixel", sk_font_set_subpixel}, // SkiaSharp
{"sk_fontmgr_count_families", sk_fontmgr_count_families}, // SkiaSharp
{"sk_fontmgr_create_default", sk_fontmgr_create_default}, // SkiaSharp
{"sk_fontmgr_get_family_name", sk_fontmgr_get_family_name}, // SkiaSharp
{"sk_fontmgr_match_family_style", sk_fontmgr_match_family_style}, // SkiaSharp
{"sk_fontmgr_match_family_style_character", sk_fontmgr_match_family_style_character}, // SkiaSharp
{"sk_fontmgr_ref_default", sk_fontmgr_ref_default}, // SkiaSharp
{"sk_fontstyle_delete", sk_fontstyle_delete}, // SkiaSharp
{"sk_fontstyle_get_slant", sk_fontstyle_get_slant}, // SkiaSharp
{"sk_fontstyle_get_weight", sk_fontstyle_get_weight}, // SkiaSharp
{"sk_fontstyle_get_width", sk_fontstyle_get_width}, // SkiaSharp
{"sk_fontstyle_new", sk_fontstyle_new}, // SkiaSharp
{"sk_image_make_shader", sk_image_make_shader}, // SkiaSharp
{"sk_image_read_pixels", sk_image_read_pixels}, // SkiaSharp
{"sk_imagefilter_new_blur", sk_imagefilter_new_blur}, // SkiaSharp
{"sk_imagefilter_new_drop_shadow", sk_imagefilter_new_drop_shadow}, // SkiaSharp
{"sk_managedstream_destroy", sk_managedstream_destroy}, // SkiaSharp
{"sk_managedstream_new", sk_managedstream_new}, // SkiaSharp
{"sk_managedstream_set_procs", sk_managedstream_set_procs}, // SkiaSharp
{"sk_matrix_concat", sk_matrix_concat}, // SkiaSharp
{"sk_matrix_pre_concat", sk_matrix_pre_concat}, // SkiaSharp
{"sk_paint_get_fill_path", sk_paint_get_fill_path}, // SkiaSharp
{"sk_paint_get_path_effect", sk_paint_get_path_effect}, // SkiaSharp
{"sk_paint_set_antialias", sk_paint_set_antialias}, // SkiaSharp
{"sk_paint_set_blendmode", sk_paint_set_blendmode}, // SkiaSharp
{"sk_paint_set_color", sk_paint_set_color}, // SkiaSharp
{"sk_paint_set_color4f", sk_paint_set_color4f}, // SkiaSharp
{"sk_paint_set_filter_quality", sk_paint_set_filter_quality}, // SkiaSharp
{"sk_paint_set_imagefilter", sk_paint_set_imagefilter}, // SkiaSharp
{"sk_paint_set_path_effect", sk_paint_set_path_effect}, // SkiaSharp
{"sk_paint_set_shader", sk_paint_set_shader}, // SkiaSharp
{"sk_paint_set_stroke_cap", sk_paint_set_stroke_cap}, // SkiaSharp
{"sk_paint_set_stroke_join", sk_paint_set_stroke_join}, // SkiaSharp
{"sk_paint_set_stroke_miter", sk_paint_set_stroke_miter}, // SkiaSharp
{"sk_paint_set_stroke_width", sk_paint_set_stroke_width}, // SkiaSharp
{"sk_paint_set_style", sk_paint_set_style}, // SkiaSharp
{"sk_path_add_oval", sk_path_add_oval}, // SkiaSharp
{"sk_path_add_path", sk_path_add_path}, // SkiaSharp
{"sk_path_add_rect", sk_path_add_rect}, // SkiaSharp
{"sk_path_arc_to", sk_path_arc_to}, // SkiaSharp
{"sk_path_clone", sk_path_clone}, // SkiaSharp
{"sk_path_close", sk_path_close}, // SkiaSharp
{"sk_path_contains", sk_path_contains}, // SkiaSharp
{"sk_path_cubic_to", sk_path_cubic_to}, // SkiaSharp
{"sk_path_delete", sk_path_delete}, // SkiaSharp
{"sk_path_effect_create_dash", sk_path_effect_create_dash}, // SkiaSharp
{"sk_path_line_to", sk_path_line_to}, // SkiaSharp
{"sk_path_move_to", sk_path_move_to}, // SkiaSharp
{"sk_path_new", sk_path_new}, // SkiaSharp
{"sk_path_quad_to", sk_path_quad_to}, // SkiaSharp
{"sk_path_set_filltype", sk_path_set_filltype}, // SkiaSharp
{"sk_path_transform", sk_path_transform}, // SkiaSharp
{"sk_pathop_op", sk_pathop_op}, // SkiaSharp
{"sk_pathop_tight_bounds", sk_pathop_tight_bounds}, // SkiaSharp
{"sk_picture_get_cull_rect", sk_picture_get_cull_rect}, // SkiaSharp
{"sk_picture_make_shader", sk_picture_make_shader}, // SkiaSharp
{"sk_picture_recorder_begin_recording", sk_picture_recorder_begin_recording}, // SkiaSharp
{"sk_picture_recorder_delete", sk_picture_recorder_delete}, // SkiaSharp
{"sk_picture_recorder_end_recording", sk_picture_recorder_end_recording}, // SkiaSharp
{"sk_picture_recorder_new", sk_picture_recorder_new}, // SkiaSharp
{"sk_refcnt_safe_unref", sk_refcnt_safe_unref}, // SkiaSharp
{"sk_region_delete", sk_region_delete}, // SkiaSharp
{"sk_region_get_bounds", sk_region_get_bounds}, // SkiaSharp
{"sk_region_intersects_rect", sk_region_intersects_rect}, // SkiaSharp
{"sk_region_is_empty", sk_region_is_empty}, // SkiaSharp
{"sk_region_new", sk_region_new}, // SkiaSharp
{"sk_region_op_rect", sk_region_op_rect}, // SkiaSharp
{"sk_region_set_empty", sk_region_set_empty}, // SkiaSharp
{"sk_rrect_delete", sk_rrect_delete}, // SkiaSharp
{"sk_rrect_get_radii", sk_rrect_get_radii}, // SkiaSharp
{"sk_rrect_get_rect", sk_rrect_get_rect}, // SkiaSharp
{"sk_rrect_inset", sk_rrect_inset}, // SkiaSharp
{"sk_rrect_new", sk_rrect_new}, // SkiaSharp
{"sk_rrect_outset", sk_rrect_outset}, // SkiaSharp
{"sk_rrect_set_empty", sk_rrect_set_empty}, // SkiaSharp
{"sk_rrect_set_rect", sk_rrect_set_rect}, // SkiaSharp
{"sk_rrect_set_rect_radii", sk_rrect_set_rect_radii}, // SkiaSharp
{"sk_shader_new_blend", sk_shader_new_blend}, // SkiaSharp
{"sk_shader_new_color", sk_shader_new_color}, // SkiaSharp
{"sk_shader_new_linear_gradient", sk_shader_new_linear_gradient}, // SkiaSharp
{"sk_shader_new_radial_gradient", sk_shader_new_radial_gradient}, // SkiaSharp
{"sk_shader_new_sweep_gradient", sk_shader_new_sweep_gradient}, // SkiaSharp
{"sk_shader_new_two_point_conical_gradient", sk_shader_new_two_point_conical_gradient}, // SkiaSharp
{"sk_shader_with_color_filter", sk_shader_with_color_filter}, // SkiaSharp
{"sk_stream_asset_destroy", sk_stream_asset_destroy}, // SkiaSharp
{"sk_stream_get_length", sk_stream_get_length}, // SkiaSharp
{"sk_stream_get_position", sk_stream_get_position}, // SkiaSharp
{"sk_stream_has_length", sk_stream_has_length}, // SkiaSharp
{"sk_stream_has_position", sk_stream_has_position}, // SkiaSharp
{"sk_stream_is_at_end", sk_stream_is_at_end}, // SkiaSharp
{"sk_stream_read", sk_stream_read}, // SkiaSharp
{"sk_stream_seek", sk_stream_seek}, // SkiaSharp
{"sk_string_destructor", sk_string_destructor}, // SkiaSharp
{"sk_string_get_c_str", sk_string_get_c_str}, // SkiaSharp
{"sk_string_get_size", sk_string_get_size}, // SkiaSharp
{"sk_string_new_empty", sk_string_new_empty}, // SkiaSharp
{"sk_surface_draw", sk_surface_draw}, // SkiaSharp
{"sk_surface_flush", sk_surface_flush}, // SkiaSharp
{"sk_surface_flush_and_submit", sk_surface_flush_and_submit}, // SkiaSharp
{"sk_surface_get_canvas", sk_surface_get_canvas}, // SkiaSharp
{"sk_surface_new_backend_render_target", sk_surface_new_backend_render_target}, // SkiaSharp
{"sk_surface_new_image_snapshot", sk_surface_new_image_snapshot}, // SkiaSharp
{"sk_surface_new_raster", sk_surface_new_raster}, // SkiaSharp
{"sk_surface_new_raster_direct", sk_surface_new_raster_direct}, // SkiaSharp
{"sk_surface_new_render_target", sk_surface_new_render_target}, // SkiaSharp
{"sk_surfaceprops_delete", sk_surfaceprops_delete}, // SkiaSharp
{"sk_surfaceprops_new", sk_surfaceprops_new}, // SkiaSharp
{"sk_textblob_builder_alloc_run_pos", sk_textblob_builder_alloc_run_pos}, // SkiaSharp
{"sk_textblob_builder_delete", sk_textblob_builder_delete}, // SkiaSharp
{"sk_textblob_builder_make", sk_textblob_builder_make}, // SkiaSharp
{"sk_textblob_builder_new", sk_textblob_builder_new}, // SkiaSharp
{"sk_textblob_get_intercepts", sk_textblob_get_intercepts}, // SkiaSharp
{"sk_textblob_unref", sk_textblob_unref}, // SkiaSharp
{"sk_typeface_count_glyphs", sk_typeface_count_glyphs}, // SkiaSharp
{"sk_typeface_create_from_stream", sk_typeface_create_from_stream}, // SkiaSharp
{"sk_typeface_get_family_name", sk_typeface_get_family_name}, // SkiaSharp
{"sk_typeface_get_font_slant", sk_typeface_get_font_slant}, // SkiaSharp
{"sk_typeface_get_font_weight", sk_typeface_get_font_weight}, // SkiaSharp
{"sk_typeface_get_fontstyle", sk_typeface_get_fontstyle}, // SkiaSharp
{"sk_typeface_get_table_data", sk_typeface_get_table_data}, // SkiaSharp
{"sk_typeface_get_table_size", sk_typeface_get_table_size}, // SkiaSharp
{"sk_typeface_get_units_per_em", sk_typeface_get_units_per_em}, // SkiaSharp
{"sk_typeface_is_fixed_pitch", sk_typeface_is_fixed_pitch}, // SkiaSharp
{"sk_typeface_open_stream", sk_typeface_open_stream}, // SkiaSharp
{"sk_typeface_ref_default", sk_typeface_ref_default}, // SkiaSharp
{"sk_version_get_increment", sk_version_get_increment}, // SkiaSharp
{"sk_version_get_milestone", sk_version_get_milestone}, // SkiaSharp
{"sk_wstream_flush", sk_wstream_flush}, // SkiaSharp
{"sk_wstream_write", sk_wstream_write}, // SkiaSharp
{NULL, NULL}
};
static PinvokeImport libHarfBuzzSharp_imports [] = {
{"hb_blob_create", hb_blob_create}, // HarfBuzzSharp
{"hb_blob_destroy", hb_blob_destroy}, // HarfBuzzSharp
{"hb_buffer_add_utf16", hb_buffer_add_utf16}, // HarfBuzzSharp
{"hb_buffer_create", hb_buffer_create}, // HarfBuzzSharp
{"hb_buffer_destroy", hb_buffer_destroy}, // HarfBuzzSharp
{"hb_buffer_get_content_type", hb_buffer_get_content_type}, // HarfBuzzSharp
{"hb_buffer_get_direction", hb_buffer_get_direction}, // HarfBuzzSharp
{"hb_buffer_get_glyph_infos", hb_buffer_get_glyph_infos}, // HarfBuzzSharp
{"hb_buffer_get_glyph_positions", hb_buffer_get_glyph_positions}, // HarfBuzzSharp
{"hb_buffer_get_length", hb_buffer_get_length}, // HarfBuzzSharp
{"hb_buffer_guess_segment_properties", hb_buffer_guess_segment_properties}, // HarfBuzzSharp
{"hb_buffer_reverse", hb_buffer_reverse}, // HarfBuzzSharp
{"hb_buffer_set_direction", hb_buffer_set_direction}, // HarfBuzzSharp
{"hb_buffer_set_language", hb_buffer_set_language}, // HarfBuzzSharp
{"hb_face_create_for_tables", hb_face_create_for_tables}, // HarfBuzzSharp
{"hb_face_destroy", hb_face_destroy}, // HarfBuzzSharp
{"hb_face_get_upem", hb_face_get_upem}, // HarfBuzzSharp
{"hb_face_set_upem", hb_face_set_upem}, // HarfBuzzSharp
{"hb_feature_to_string", hb_feature_to_string}, // HarfBuzzSharp
{"hb_font_create", hb_font_create}, // HarfBuzzSharp
{"hb_font_destroy", hb_font_destroy}, // HarfBuzzSharp
{"hb_font_get_glyph", hb_font_get_glyph}, // HarfBuzzSharp
{"hb_font_get_glyph_h_advance", hb_font_get_glyph_h_advance}, // HarfBuzzSharp
{"hb_font_get_glyph_h_advances", hb_font_get_glyph_h_advances}, // HarfBuzzSharp
{"hb_font_get_scale", hb_font_get_scale}, // HarfBuzzSharp
{"hb_language_from_string", hb_language_from_string}, // HarfBuzzSharp
{"hb_language_get_default", hb_language_get_default}, // HarfBuzzSharp
{"hb_language_to_string", hb_language_to_string}, // HarfBuzzSharp
{"hb_ot_font_set_funcs", hb_ot_font_set_funcs}, // HarfBuzzSharp
{"hb_ot_metrics_get_position", hb_ot_metrics_get_position}, // HarfBuzzSharp
{"hb_shape_full", hb_shape_full}, // HarfBuzzSharp
{NULL, NULL}
};
static PinvokeImport libSystem_Native_imports [] = {
{"SystemNative_Close", SystemNative_Close}, // System.Private.CoreLib
{"SystemNative_CloseDir", SystemNative_CloseDir}, // System.Private.CoreLib
{"SystemNative_ConvertErrorPalToPlatform", SystemNative_ConvertErrorPalToPlatform}, // System.Private.CoreLib
{"SystemNative_ConvertErrorPlatformToPal", SystemNative_ConvertErrorPlatformToPal}, // System.Private.CoreLib
{"SystemNative_FAllocate", SystemNative_FAllocate}, // System.Private.CoreLib
{"SystemNative_FLock", SystemNative_FLock}, // System.Private.CoreLib
{"SystemNative_Free", SystemNative_Free}, // System.Private.CoreLib
{"SystemNative_FStat", SystemNative_FStat}, // System.Private.CoreLib
{"SystemNative_FTruncate", SystemNative_FTruncate}, // System.Private.CoreLib
{"SystemNative_GetCryptographicallySecureRandomBytes", SystemNative_GetCryptographicallySecureRandomBytes}, // System.Private.CoreLib
{"SystemNative_GetCwd", SystemNative_GetCwd}, // System.Private.CoreLib
{"SystemNative_GetEnv", SystemNative_GetEnv}, // System.Private.CoreLib
{"SystemNative_GetErrNo", SystemNative_GetErrNo}, // System.Private.CoreLib
{"SystemNative_GetFileSystemType", SystemNative_GetFileSystemType}, // System.Private.CoreLib
{"SystemNative_GetNonCryptographicallySecureRandomBytes", SystemNative_GetNonCryptographicallySecureRandomBytes}, // System.Private.CoreLib
{"SystemNative_GetReadDirRBufferSize", SystemNative_GetReadDirRBufferSize}, // System.Private.CoreLib
{"SystemNative_GetSystemTimeAsTicks", SystemNative_GetSystemTimeAsTicks}, // System.Private.CoreLib
{"SystemNative_GetTimestamp", SystemNative_GetTimestamp}, // System.Private.CoreLib
{"SystemNative_GetTimeZoneData", SystemNative_GetTimeZoneData}, // System.Private.CoreLib
{"SystemNative_LowLevelMonitor_Acquire", SystemNative_LowLevelMonitor_Acquire}, // System.Private.CoreLib
{"SystemNative_LowLevelMonitor_Create", SystemNative_LowLevelMonitor_Create}, // System.Private.CoreLib
{"SystemNative_LowLevelMonitor_Destroy", SystemNative_LowLevelMonitor_Destroy}, // System.Private.CoreLib
{"SystemNative_LowLevelMonitor_Release", SystemNative_LowLevelMonitor_Release}, // System.Private.CoreLib
{"SystemNative_LowLevelMonitor_Signal_Release", SystemNative_LowLevelMonitor_Signal_Release}, // System.Private.CoreLib
{"SystemNative_LowLevelMonitor_TimedWait", SystemNative_LowLevelMonitor_TimedWait}, // System.Private.CoreLib
{"SystemNative_LowLevelMonitor_Wait", SystemNative_LowLevelMonitor_Wait}, // System.Private.CoreLib
{"SystemNative_LSeek", SystemNative_LSeek}, // System.Private.CoreLib
{"SystemNative_LStat", SystemNative_LStat}, // System.Private.CoreLib
{"SystemNative_Malloc", SystemNative_Malloc}, // System.Private.CoreLib
{"SystemNative_Open", SystemNative_Open}, // System.Private.CoreLib
{"SystemNative_OpenDir", SystemNative_OpenDir}, // System.Private.CoreLib
{"SystemNative_PosixFAdvise", SystemNative_PosixFAdvise}, // System.Private.CoreLib
{"SystemNative_PRead", SystemNative_PRead}, // System.Private.CoreLib
{"SystemNative_Read", SystemNative_Read}, // System.Private.CoreLib
{"SystemNative_ReadDirR", SystemNative_ReadDirR}, // System.Private.CoreLib
{"SystemNative_ReadLink", SystemNative_ReadLink}, // System.Private.CoreLib
{"SystemNative_SchedGetCpu", SystemNative_SchedGetCpu}, // System.Private.CoreLib
{"SystemNative_SetErrNo", SystemNative_SetErrNo}, // System.Private.CoreLib
{"SystemNative_Stat", SystemNative_Stat}, // System.Private.CoreLib
{"SystemNative_StrErrorR", SystemNative_StrErrorR}, // System.Private.CoreLib
{"SystemNative_Unlink", SystemNative_Unlink}, // System.Private.CoreLib
{NULL, NULL}
};
static PinvokeImport libSystem_IO_Compression_Native_imports [] = {
{NULL, NULL}
};
static PinvokeImport libSystem_Globalization_Native_imports [] = {
{"GlobalizationNative_ChangeCase", GlobalizationNative_ChangeCase}, // System.Private.CoreLib
{"GlobalizationNative_ChangeCaseInvariant", GlobalizationNative_ChangeCaseInvariant}, // System.Private.CoreLib
{"GlobalizationNative_ChangeCaseTurkish", GlobalizationNative_ChangeCaseTurkish}, // System.Private.CoreLib
{"GlobalizationNative_CloseSortHandle", GlobalizationNative_CloseSortHandle}, // System.Private.CoreLib
{"GlobalizationNative_CompareString", GlobalizationNative_CompareString}, // System.Private.CoreLib
{"GlobalizationNative_EndsWith", GlobalizationNative_EndsWith}, // System.Private.CoreLib
{"GlobalizationNative_EnumCalendarInfo", GlobalizationNative_EnumCalendarInfo}, // System.Private.CoreLib
{"GlobalizationNative_GetCalendarInfo", GlobalizationNative_GetCalendarInfo}, // System.Private.CoreLib
{"GlobalizationNative_GetCalendars", GlobalizationNative_GetCalendars}, // System.Private.CoreLib
{"GlobalizationNative_GetDefaultLocaleName", GlobalizationNative_GetDefaultLocaleName}, // System.Private.CoreLib
{"GlobalizationNative_GetJapaneseEraStartDate", GlobalizationNative_GetJapaneseEraStartDate}, // System.Private.CoreLib
{"GlobalizationNative_GetLatestJapaneseEra", GlobalizationNative_GetLatestJapaneseEra}, // System.Private.CoreLib
{"GlobalizationNative_GetLocaleInfoGroupingSizes", GlobalizationNative_GetLocaleInfoGroupingSizes}, // System.Private.CoreLib
{"GlobalizationNative_GetLocaleInfoInt", GlobalizationNative_GetLocaleInfoInt}, // System.Private.CoreLib
{"GlobalizationNative_GetLocaleInfoString", GlobalizationNative_GetLocaleInfoString}, // System.Private.CoreLib
{"GlobalizationNative_GetLocaleName", GlobalizationNative_GetLocaleName}, // System.Private.CoreLib
{"GlobalizationNative_GetLocales", GlobalizationNative_GetLocales}, // System.Private.CoreLib
{"GlobalizationNative_GetLocaleTimeFormat", GlobalizationNative_GetLocaleTimeFormat}, // System.Private.CoreLib
{"GlobalizationNative_GetSortHandle", GlobalizationNative_GetSortHandle}, // System.Private.CoreLib
{"GlobalizationNative_GetSortKey", GlobalizationNative_GetSortKey}, // System.Private.CoreLib
{"GlobalizationNative_IndexOf", GlobalizationNative_IndexOf}, // System.Private.CoreLib
{"GlobalizationNative_InitICUFunctions", GlobalizationNative_InitICUFunctions}, // System.Private.CoreLib
{"GlobalizationNative_InitOrdinalCasingPage", GlobalizationNative_InitOrdinalCasingPage}, // System.Private.CoreLib
{"GlobalizationNative_IsPredefinedLocale", GlobalizationNative_IsPredefinedLocale}, // System.Private.CoreLib
{"GlobalizationNative_LastIndexOf", GlobalizationNative_LastIndexOf}, // System.Private.CoreLib
{"GlobalizationNative_LoadICU", GlobalizationNative_LoadICU}, // System.Private.CoreLib
{"GlobalizationNative_NormalizeString", GlobalizationNative_NormalizeString}, // System.Private.CoreLib
{"GlobalizationNative_StartsWith", GlobalizationNative_StartsWith}, // System.Private.CoreLib
{"GlobalizationNative_ToAscii", GlobalizationNative_ToAscii}, // System.Private.CoreLib
{"GlobalizationNative_ToUnicode", GlobalizationNative_ToUnicode}, // System.Private.CoreLib
{NULL, NULL}
};
static void *pinvoke_tables[] = { libSkiaSharp_imports,libHarfBuzzSharp_imports,libSystem_Native_imports,libSystem_IO_Compression_Native_imports,libSystem_Globalization_Native_imports,};
static char *pinvoke_names[] = { "libSkiaSharp","libHarfBuzzSharp","libSystem.Native","libSystem.IO.Compression.Native","libSystem.Globalization.Native",};
InterpFtnDesc wasm_native_to_interp_ftndescs[47];
typedef void  (*WasmInterpEntrySig_0) (int*,int*);
void wasm_native_to_interp_HarfBuzzSharp_DelegateProxies_ReleaseDelegateProxyImplementation (int arg0) { 
((WasmInterpEntrySig_0)wasm_native_to_interp_ftndescs [0].func) ((int*)&arg0, wasm_native_to_interp_ftndescs [0].arg);
}
typedef void  (*WasmInterpEntrySig_1) (int*,int*,int*,int*,int*);
int wasm_native_to_interp_HarfBuzzSharp_DelegateProxies_GetTableDelegateProxyImplementation (int arg0,int arg1,int arg2) { 
int res;
((WasmInterpEntrySig_1)wasm_native_to_interp_ftndescs [1].func) ((int*)&res, (int*)&arg0, (int*)&arg1, (int*)&arg2, wasm_native_to_interp_ftndescs [1].arg);
return res;
}
typedef void  (*WasmInterpEntrySig_2) (int*,int*);
void wasm_native_to_interp_HarfBuzzSharp_DelegateProxies_ReleaseDelegateProxyImplementationForMulti (int arg0) { 
((WasmInterpEntrySig_2)wasm_native_to_interp_ftndescs [2].func) ((int*)&arg0, wasm_native_to_interp_ftndescs [2].arg);
}
typedef void  (*WasmInterpEntrySig_3) (int*,int*,int*,int*,int*,int*);
int wasm_native_to_interp_HarfBuzzSharp_DelegateProxies_FontExtentsProxyImplementation (int arg0,int arg1,int arg2,int arg3) { 
int res;
((WasmInterpEntrySig_3)wasm_native_to_interp_ftndescs [3].func) ((int*)&res, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, wasm_native_to_interp_ftndescs [3].arg);
return res;
}
typedef void  (*WasmInterpEntrySig_4) (int*,int*,int*,int*,int*,int*,int*);
int wasm_native_to_interp_HarfBuzzSharp_DelegateProxies_NominalGlyphProxyImplementation (int arg0,int arg1,int arg2,int arg3,int arg4) { 
int res;
((WasmInterpEntrySig_4)wasm_native_to_interp_ftndescs [4].func) ((int*)&res, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)&arg4, wasm_native_to_interp_ftndescs [4].arg);
return res;
}
typedef void  (*WasmInterpEntrySig_5) (int*,int*,int*,int*,int*,int*,int*,int*,int*,int*);
int wasm_native_to_interp_HarfBuzzSharp_DelegateProxies_NominalGlyphsProxyImplementation (int arg0,int arg1,int arg2,int arg3,int arg4,int arg5,int arg6,int arg7) { 
int res;
((WasmInterpEntrySig_5)wasm_native_to_interp_ftndescs [5].func) ((int*)&res, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)&arg4, (int*)&arg5, (int*)&arg6, (int*)&arg7, wasm_native_to_interp_ftndescs [5].arg);
return res;
}
typedef void  (*WasmInterpEntrySig_6) (int*,int*,int*,int*,int*,int*,int*,int*);
int wasm_native_to_interp_HarfBuzzSharp_DelegateProxies_VariationGlyphProxyImplementation (int arg0,int arg1,int arg2,int arg3,int arg4,int arg5) { 
int res;
((WasmInterpEntrySig_6)wasm_native_to_interp_ftndescs [6].func) ((int*)&res, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)&arg4, (int*)&arg5, wasm_native_to_interp_ftndescs [6].arg);
return res;
}
typedef void  (*WasmInterpEntrySig_7) (int*,int*,int*,int*,int*,int*);
int wasm_native_to_interp_HarfBuzzSharp_DelegateProxies_GlyphAdvanceProxyImplementation (int arg0,int arg1,int arg2,int arg3) { 
int res;
((WasmInterpEntrySig_7)wasm_native_to_interp_ftndescs [7].func) ((int*)&res, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, wasm_native_to_interp_ftndescs [7].arg);
return res;
}
typedef void  (*WasmInterpEntrySig_8) (int*,int*,int*,int*,int*,int*,int*,int*,int*);
void wasm_native_to_interp_HarfBuzzSharp_DelegateProxies_GlyphAdvancesProxyImplementation (int arg0,int arg1,int arg2,int arg3,int arg4,int arg5,int arg6,int arg7) { 
((WasmInterpEntrySig_8)wasm_native_to_interp_ftndescs [8].func) ((int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)&arg4, (int*)&arg5, (int*)&arg6, (int*)&arg7, wasm_native_to_interp_ftndescs [8].arg);
}
typedef void  (*WasmInterpEntrySig_9) (int*,int*,int*,int*,int*,int*,int*,int*);
int wasm_native_to_interp_HarfBuzzSharp_DelegateProxies_GlyphOriginProxyImplementation (int arg0,int arg1,int arg2,int arg3,int arg4,int arg5) { 
int res;
((WasmInterpEntrySig_9)wasm_native_to_interp_ftndescs [9].func) ((int*)&res, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)&arg4, (int*)&arg5, wasm_native_to_interp_ftndescs [9].arg);
return res;
}
typedef void  (*WasmInterpEntrySig_10) (int*,int*,int*,int*,int*,int*,int*);
int wasm_native_to_interp_HarfBuzzSharp_DelegateProxies_GlyphKerningProxyImplementation (int arg0,int arg1,int arg2,int arg3,int arg4) { 
int res;
((WasmInterpEntrySig_10)wasm_native_to_interp_ftndescs [10].func) ((int*)&res, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)&arg4, wasm_native_to_interp_ftndescs [10].arg);
return res;
}
typedef void  (*WasmInterpEntrySig_11) (int*,int*,int*,int*,int*,int*,int*);
int wasm_native_to_interp_HarfBuzzSharp_DelegateProxies_GlyphExtentsProxyImplementation (int arg0,int arg1,int arg2,int arg3,int arg4) { 
int res;
((WasmInterpEntrySig_11)wasm_native_to_interp_ftndescs [11].func) ((int*)&res, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)&arg4, wasm_native_to_interp_ftndescs [11].arg);
return res;
}
typedef void  (*WasmInterpEntrySig_12) (int*,int*,int*,int*,int*,int*,int*,int*,int*);
int wasm_native_to_interp_HarfBuzzSharp_DelegateProxies_GlyphContourPointProxyImplementation (int arg0,int arg1,int arg2,int arg3,int arg4,int arg5,int arg6) { 
int res;
((WasmInterpEntrySig_12)wasm_native_to_interp_ftndescs [12].func) ((int*)&res, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)&arg4, (int*)&arg5, (int*)&arg6, wasm_native_to_interp_ftndescs [12].arg);
return res;
}
typedef void  (*WasmInterpEntrySig_13) (int*,int*,int*,int*,int*,int*,int*,int*);
int wasm_native_to_interp_HarfBuzzSharp_DelegateProxies_GlyphNameProxyImplementation (int arg0,int arg1,int arg2,int arg3,int arg4,int arg5) { 
int res;
((WasmInterpEntrySig_13)wasm_native_to_interp_ftndescs [13].func) ((int*)&res, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)&arg4, (int*)&arg5, wasm_native_to_interp_ftndescs [13].arg);
return res;
}
typedef void  (*WasmInterpEntrySig_14) (int*,int*,int*,int*,int*,int*,int*,int*);
int wasm_native_to_interp_HarfBuzzSharp_DelegateProxies_GlyphFromNameProxyImplementation (int arg0,int arg1,int arg2,int arg3,int arg4,int arg5) { 
int res;
((WasmInterpEntrySig_14)wasm_native_to_interp_ftndescs [14].func) ((int*)&res, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)&arg4, (int*)&arg5, wasm_native_to_interp_ftndescs [14].arg);
return res;
}
typedef void  (*WasmInterpEntrySig_15) (int*,int*,int*,int*,int*);
int wasm_native_to_interp_HarfBuzzSharp_DelegateProxies_CombiningClassProxyImplementation (int arg0,int arg1,int arg2) { 
int res;
((WasmInterpEntrySig_15)wasm_native_to_interp_ftndescs [15].func) ((int*)&res, (int*)&arg0, (int*)&arg1, (int*)&arg2, wasm_native_to_interp_ftndescs [15].arg);
return res;
}
typedef void  (*WasmInterpEntrySig_16) (int*,int*,int*,int*,int*);
int wasm_native_to_interp_HarfBuzzSharp_DelegateProxies_GeneralCategoryProxyImplementation (int arg0,int arg1,int arg2) { 
int res;
((WasmInterpEntrySig_16)wasm_native_to_interp_ftndescs [16].func) ((int*)&res, (int*)&arg0, (int*)&arg1, (int*)&arg2, wasm_native_to_interp_ftndescs [16].arg);
return res;
}
typedef void  (*WasmInterpEntrySig_17) (int*,int*,int*,int*,int*);
int wasm_native_to_interp_HarfBuzzSharp_DelegateProxies_MirroringProxyImplementation (int arg0,int arg1,int arg2) { 
int res;
((WasmInterpEntrySig_17)wasm_native_to_interp_ftndescs [17].func) ((int*)&res, (int*)&arg0, (int*)&arg1, (int*)&arg2, wasm_native_to_interp_ftndescs [17].arg);
return res;
}
typedef void  (*WasmInterpEntrySig_18) (int*,int*,int*,int*,int*);
int wasm_native_to_interp_HarfBuzzSharp_DelegateProxies_ScriptProxyImplementation (int arg0,int arg1,int arg2) { 
int res;
((WasmInterpEntrySig_18)wasm_native_to_interp_ftndescs [18].func) ((int*)&res, (int*)&arg0, (int*)&arg1, (int*)&arg2, wasm_native_to_interp_ftndescs [18].arg);
return res;
}
typedef void  (*WasmInterpEntrySig_19) (int*,int*,int*,int*,int*,int*,int*);
int wasm_native_to_interp_HarfBuzzSharp_DelegateProxies_ComposeProxyImplementation (int arg0,int arg1,int arg2,int arg3,int arg4) { 
int res;
((WasmInterpEntrySig_19)wasm_native_to_interp_ftndescs [19].func) ((int*)&res, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)&arg4, wasm_native_to_interp_ftndescs [19].arg);
return res;
}
typedef void  (*WasmInterpEntrySig_20) (int*,int*,int*,int*,int*,int*,int*);
int wasm_native_to_interp_HarfBuzzSharp_DelegateProxies_DecomposeProxyImplementation (int arg0,int arg1,int arg2,int arg3,int arg4) { 
int res;
((WasmInterpEntrySig_20)wasm_native_to_interp_ftndescs [20].func) ((int*)&res, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)&arg4, wasm_native_to_interp_ftndescs [20].arg);
return res;
}
typedef void  (*WasmInterpEntrySig_21) (int*,int*,int*);
void wasm_native_to_interp_SkiaSharp_DelegateProxies_SKBitmapReleaseDelegateProxyImplementation (int arg0,int arg1) { 
((WasmInterpEntrySig_21)wasm_native_to_interp_ftndescs [21].func) ((int*)&arg0, (int*)&arg1, wasm_native_to_interp_ftndescs [21].arg);
}
typedef void  (*WasmInterpEntrySig_22) (int*,int*,int*);
void wasm_native_to_interp_SkiaSharp_DelegateProxies_SKDataReleaseDelegateProxyImplementation (int arg0,int arg1) { 
((WasmInterpEntrySig_22)wasm_native_to_interp_ftndescs [22].func) ((int*)&arg0, (int*)&arg1, wasm_native_to_interp_ftndescs [22].arg);
}
typedef void  (*WasmInterpEntrySig_23) (int*,int*,int*);
void wasm_native_to_interp_SkiaSharp_DelegateProxies_SKImageRasterReleaseDelegateProxyImplementationForCoTaskMem (int arg0,int arg1) { 
((WasmInterpEntrySig_23)wasm_native_to_interp_ftndescs [23].func) ((int*)&arg0, (int*)&arg1, wasm_native_to_interp_ftndescs [23].arg);
}
typedef void  (*WasmInterpEntrySig_24) (int*,int*,int*);
void wasm_native_to_interp_SkiaSharp_DelegateProxies_SKImageRasterReleaseDelegateProxyImplementation (int arg0,int arg1) { 
((WasmInterpEntrySig_24)wasm_native_to_interp_ftndescs [24].func) ((int*)&arg0, (int*)&arg1, wasm_native_to_interp_ftndescs [24].arg);
}
typedef void  (*WasmInterpEntrySig_25) (int*,int*);
void wasm_native_to_interp_SkiaSharp_DelegateProxies_SKImageTextureReleaseDelegateProxyImplementation (int arg0) { 
((WasmInterpEntrySig_25)wasm_native_to_interp_ftndescs [25].func) ((int*)&arg0, wasm_native_to_interp_ftndescs [25].arg);
}
typedef void  (*WasmInterpEntrySig_26) (int*,int*,int*);
void wasm_native_to_interp_SkiaSharp_DelegateProxies_SKSurfaceReleaseDelegateProxyImplementation (int arg0,int arg1) { 
((WasmInterpEntrySig_26)wasm_native_to_interp_ftndescs [26].func) ((int*)&arg0, (int*)&arg1, wasm_native_to_interp_ftndescs [26].arg);
}
typedef void  (*WasmInterpEntrySig_27) (int*,int*,int*,int*);
int wasm_native_to_interp_SkiaSharp_DelegateProxies_GRGlGetProcDelegateProxyImplementation (int arg0,int arg1) { 
int res;
((WasmInterpEntrySig_27)wasm_native_to_interp_ftndescs [27].func) ((int*)&res, (int*)&arg0, (int*)&arg1, wasm_native_to_interp_ftndescs [27].arg);
return res;
}
typedef void  (*WasmInterpEntrySig_28) (int*,int*,int*,int*,int*,int*);
int wasm_native_to_interp_SkiaSharp_DelegateProxies_GRVkGetProcDelegateProxyImplementation (int arg0,int arg1,int arg2,int arg3) { 
int res;
((WasmInterpEntrySig_28)wasm_native_to_interp_ftndescs [28].func) ((int*)&res, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, wasm_native_to_interp_ftndescs [28].arg);
return res;
}
typedef void  (*WasmInterpEntrySig_29) (int*,int*,int*,int*);
void wasm_native_to_interp_SkiaSharp_DelegateProxies_SKGlyphPathDelegateProxyImplementation (int arg0,int arg1,int arg2) { 
((WasmInterpEntrySig_29)wasm_native_to_interp_ftndescs [29].func) ((int*)&arg0, (int*)&arg1, (int*)&arg2, wasm_native_to_interp_ftndescs [29].arg);
}
typedef void  (*WasmInterpEntrySig_30) (int*,int*,int*,int*,int*,int*);
int wasm_native_to_interp_SkiaSharp_SKAbstractManagedStream_ReadInternal (int arg0,int arg1,int arg2,int arg3) { 
int res;
((WasmInterpEntrySig_30)wasm_native_to_interp_ftndescs [30].func) ((int*)&res, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, wasm_native_to_interp_ftndescs [30].arg);
return res;
}
typedef void  (*WasmInterpEntrySig_31) (int*,int*,int*,int*,int*,int*);
int wasm_native_to_interp_SkiaSharp_SKAbstractManagedStream_PeekInternal (int arg0,int arg1,int arg2,int arg3) { 
int res;
((WasmInterpEntrySig_31)wasm_native_to_interp_ftndescs [31].func) ((int*)&res, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, wasm_native_to_interp_ftndescs [31].arg);
return res;
}
typedef void  (*WasmInterpEntrySig_32) (int*,int*,int*,int*);
int wasm_native_to_interp_SkiaSharp_SKAbstractManagedStream_IsAtEndInternal (int arg0,int arg1) { 
int res;
((WasmInterpEntrySig_32)wasm_native_to_interp_ftndescs [32].func) ((int*)&res, (int*)&arg0, (int*)&arg1, wasm_native_to_interp_ftndescs [32].arg);
return res;
}
typedef void  (*WasmInterpEntrySig_33) (int*,int*,int*,int*);
int wasm_native_to_interp_SkiaSharp_SKAbstractManagedStream_HasPositionInternal (int arg0,int arg1) { 
int res;
((WasmInterpEntrySig_33)wasm_native_to_interp_ftndescs [33].func) ((int*)&res, (int*)&arg0, (int*)&arg1, wasm_native_to_interp_ftndescs [33].arg);
return res;
}
typedef void  (*WasmInterpEntrySig_34) (int*,int*,int*,int*);
int wasm_native_to_interp_SkiaSharp_SKAbstractManagedStream_HasLengthInternal (int arg0,int arg1) { 
int res;
((WasmInterpEntrySig_34)wasm_native_to_interp_ftndescs [34].func) ((int*)&res, (int*)&arg0, (int*)&arg1, wasm_native_to_interp_ftndescs [34].arg);
return res;
}
typedef void  (*WasmInterpEntrySig_35) (int*,int*,int*,int*);
int wasm_native_to_interp_SkiaSharp_SKAbstractManagedStream_RewindInternal (int arg0,int arg1) { 
int res;
((WasmInterpEntrySig_35)wasm_native_to_interp_ftndescs [35].func) ((int*)&res, (int*)&arg0, (int*)&arg1, wasm_native_to_interp_ftndescs [35].arg);
return res;
}
typedef void  (*WasmInterpEntrySig_36) (int*,int*,int*,int*);
int wasm_native_to_interp_SkiaSharp_SKAbstractManagedStream_GetPositionInternal (int arg0,int arg1) { 
int res;
((WasmInterpEntrySig_36)wasm_native_to_interp_ftndescs [36].func) ((int*)&res, (int*)&arg0, (int*)&arg1, wasm_native_to_interp_ftndescs [36].arg);
return res;
}
typedef void  (*WasmInterpEntrySig_37) (int*,int*,int*,int*,int*);
int wasm_native_to_interp_SkiaSharp_SKAbstractManagedStream_SeekInternal (int arg0,int arg1,int arg2) { 
int res;
((WasmInterpEntrySig_37)wasm_native_to_interp_ftndescs [37].func) ((int*)&res, (int*)&arg0, (int*)&arg1, (int*)&arg2, wasm_native_to_interp_ftndescs [37].arg);
return res;
}
typedef void  (*WasmInterpEntrySig_38) (int*,int*,int*,int*,int*);
int wasm_native_to_interp_SkiaSharp_SKAbstractManagedStream_MoveInternal (int arg0,int arg1,int arg2) { 
int res;
((WasmInterpEntrySig_38)wasm_native_to_interp_ftndescs [38].func) ((int*)&res, (int*)&arg0, (int*)&arg1, (int*)&arg2, wasm_native_to_interp_ftndescs [38].arg);
return res;
}
typedef void  (*WasmInterpEntrySig_39) (int*,int*,int*,int*);
int wasm_native_to_interp_SkiaSharp_SKAbstractManagedStream_GetLengthInternal (int arg0,int arg1) { 
int res;
((WasmInterpEntrySig_39)wasm_native_to_interp_ftndescs [39].func) ((int*)&res, (int*)&arg0, (int*)&arg1, wasm_native_to_interp_ftndescs [39].arg);
return res;
}
typedef void  (*WasmInterpEntrySig_40) (int*,int*,int*,int*);
int wasm_native_to_interp_SkiaSharp_SKAbstractManagedStream_DuplicateInternal (int arg0,int arg1) { 
int res;
((WasmInterpEntrySig_40)wasm_native_to_interp_ftndescs [40].func) ((int*)&res, (int*)&arg0, (int*)&arg1, wasm_native_to_interp_ftndescs [40].arg);
return res;
}
typedef void  (*WasmInterpEntrySig_41) (int*,int*,int*,int*);
int wasm_native_to_interp_SkiaSharp_SKAbstractManagedStream_ForkInternal (int arg0,int arg1) { 
int res;
((WasmInterpEntrySig_41)wasm_native_to_interp_ftndescs [41].func) ((int*)&res, (int*)&arg0, (int*)&arg1, wasm_native_to_interp_ftndescs [41].arg);
return res;
}
typedef void  (*WasmInterpEntrySig_42) (int*,int*,int*);
void wasm_native_to_interp_SkiaSharp_SKAbstractManagedStream_DestroyInternal (int arg0,int arg1) { 
((WasmInterpEntrySig_42)wasm_native_to_interp_ftndescs [42].func) ((int*)&arg0, (int*)&arg1, wasm_native_to_interp_ftndescs [42].arg);
}
typedef void  (*WasmInterpEntrySig_43) (int*,int*,int*,int*,int*,int*,int*,int*);
int wasm_native_to_interp_System_Private_CoreLib_ComponentActivator_GetFunctionPointer (int arg0,int arg1,int arg2,int arg3,int arg4,int arg5) { 
int res;
((WasmInterpEntrySig_43)wasm_native_to_interp_ftndescs [43].func) ((int*)&res, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)&arg4, (int*)&arg5, wasm_native_to_interp_ftndescs [43].arg);
return res;
}
typedef void  (*WasmInterpEntrySig_44) (int*,int*,int*);
void wasm_native_to_interp_System_Private_CoreLib_CalendarData_EnumCalendarInfoCallback (int arg0,int arg1) { 
((WasmInterpEntrySig_44)wasm_native_to_interp_ftndescs [44].func) ((int*)&arg0, (int*)&arg1, wasm_native_to_interp_ftndescs [44].arg);
}
typedef void  (*WasmInterpEntrySig_45) (int*);
void wasm_native_to_interp_System_Private_CoreLib_TimerQueue_TimerHandler () { 
((WasmInterpEntrySig_45)wasm_native_to_interp_ftndescs [45].func) (wasm_native_to_interp_ftndescs [45].arg);
}
typedef void  (*WasmInterpEntrySig_46) (int*);
void wasm_native_to_interp_System_Private_CoreLib_ThreadPool_BackgroundJobHandler () { 
((WasmInterpEntrySig_46)wasm_native_to_interp_ftndescs [46].func) (wasm_native_to_interp_ftndescs [46].arg);
}
static void *wasm_native_to_interp_funcs[] = { wasm_native_to_interp_HarfBuzzSharp_DelegateProxies_ReleaseDelegateProxyImplementation,wasm_native_to_interp_HarfBuzzSharp_DelegateProxies_GetTableDelegateProxyImplementation,wasm_native_to_interp_HarfBuzzSharp_DelegateProxies_ReleaseDelegateProxyImplementationForMulti,wasm_native_to_interp_HarfBuzzSharp_DelegateProxies_FontExtentsProxyImplementation,wasm_native_to_interp_HarfBuzzSharp_DelegateProxies_NominalGlyphProxyImplementation,wasm_native_to_interp_HarfBuzzSharp_DelegateProxies_NominalGlyphsProxyImplementation,wasm_native_to_interp_HarfBuzzSharp_DelegateProxies_VariationGlyphProxyImplementation,wasm_native_to_interp_HarfBuzzSharp_DelegateProxies_GlyphAdvanceProxyImplementation,wasm_native_to_interp_HarfBuzzSharp_DelegateProxies_GlyphAdvancesProxyImplementation,wasm_native_to_interp_HarfBuzzSharp_DelegateProxies_GlyphOriginProxyImplementation,wasm_native_to_interp_HarfBuzzSharp_DelegateProxies_GlyphKerningProxyImplementation,wasm_native_to_interp_HarfBuzzSharp_DelegateProxies_GlyphExtentsProxyImplementation,wasm_native_to_interp_HarfBuzzSharp_DelegateProxies_GlyphContourPointProxyImplementation,wasm_native_to_interp_HarfBuzzSharp_DelegateProxies_GlyphNameProxyImplementation,wasm_native_to_interp_HarfBuzzSharp_DelegateProxies_GlyphFromNameProxyImplementation,wasm_native_to_interp_HarfBuzzSharp_DelegateProxies_CombiningClassProxyImplementation,wasm_native_to_interp_HarfBuzzSharp_DelegateProxies_GeneralCategoryProxyImplementation,wasm_native_to_interp_HarfBuzzSharp_DelegateProxies_MirroringProxyImplementation,wasm_native_to_interp_HarfBuzzSharp_DelegateProxies_ScriptProxyImplementation,wasm_native_to_interp_HarfBuzzSharp_DelegateProxies_ComposeProxyImplementation,wasm_native_to_interp_HarfBuzzSharp_DelegateProxies_DecomposeProxyImplementation,wasm_native_to_interp_SkiaSharp_DelegateProxies_SKBitmapReleaseDelegateProxyImplementation,wasm_native_to_interp_SkiaSharp_DelegateProxies_SKDataReleaseDelegateProxyImplementation,wasm_native_to_interp_SkiaSharp_DelegateProxies_SKImageRasterReleaseDelegateProxyImplementationForCoTaskMem,wasm_native_to_interp_SkiaSharp_DelegateProxies_SKImageRasterReleaseDelegateProxyImplementation,wasm_native_to_interp_SkiaSharp_DelegateProxies_SKImageTextureReleaseDelegateProxyImplementation,wasm_native_to_interp_SkiaSharp_DelegateProxies_SKSurfaceReleaseDelegateProxyImplementation,wasm_native_to_interp_SkiaSharp_DelegateProxies_GRGlGetProcDelegateProxyImplementation,wasm_native_to_interp_SkiaSharp_DelegateProxies_GRVkGetProcDelegateProxyImplementation,wasm_native_to_interp_SkiaSharp_DelegateProxies_SKGlyphPathDelegateProxyImplementation,wasm_native_to_interp_SkiaSharp_SKAbstractManagedStream_ReadInternal,wasm_native_to_interp_SkiaSharp_SKAbstractManagedStream_PeekInternal,wasm_native_to_interp_SkiaSharp_SKAbstractManagedStream_IsAtEndInternal,wasm_native_to_interp_SkiaSharp_SKAbstractManagedStream_HasPositionInternal,wasm_native_to_interp_SkiaSharp_SKAbstractManagedStream_HasLengthInternal,wasm_native_to_interp_SkiaSharp_SKAbstractManagedStream_RewindInternal,wasm_native_to_interp_SkiaSharp_SKAbstractManagedStream_GetPositionInternal,wasm_native_to_interp_SkiaSharp_SKAbstractManagedStream_SeekInternal,wasm_native_to_interp_SkiaSharp_SKAbstractManagedStream_MoveInternal,wasm_native_to_interp_SkiaSharp_SKAbstractManagedStream_GetLengthInternal,wasm_native_to_interp_SkiaSharp_SKAbstractManagedStream_DuplicateInternal,wasm_native_to_interp_SkiaSharp_SKAbstractManagedStream_ForkInternal,wasm_native_to_interp_SkiaSharp_SKAbstractManagedStream_DestroyInternal,wasm_native_to_interp_System_Private_CoreLib_ComponentActivator_GetFunctionPointer,wasm_native_to_interp_System_Private_CoreLib_CalendarData_EnumCalendarInfoCallback,wasm_native_to_interp_System_Private_CoreLib_TimerQueue_TimerHandler,wasm_native_to_interp_System_Private_CoreLib_ThreadPool_BackgroundJobHandler,};
static const char *wasm_native_to_interp_map[] = { "HarfBuzzSharp_DelegateProxies_ReleaseDelegateProxyImplementation",
"HarfBuzzSharp_DelegateProxies_GetTableDelegateProxyImplementation",
"HarfBuzzSharp_DelegateProxies_ReleaseDelegateProxyImplementationForMulti",
"HarfBuzzSharp_DelegateProxies_FontExtentsProxyImplementation",
"HarfBuzzSharp_DelegateProxies_NominalGlyphProxyImplementation",
"HarfBuzzSharp_DelegateProxies_NominalGlyphsProxyImplementation",
"HarfBuzzSharp_DelegateProxies_VariationGlyphProxyImplementation",
"HarfBuzzSharp_DelegateProxies_GlyphAdvanceProxyImplementation",
"HarfBuzzSharp_DelegateProxies_GlyphAdvancesProxyImplementation",
"HarfBuzzSharp_DelegateProxies_GlyphOriginProxyImplementation",
"HarfBuzzSharp_DelegateProxies_GlyphKerningProxyImplementation",
"HarfBuzzSharp_DelegateProxies_GlyphExtentsProxyImplementation",
"HarfBuzzSharp_DelegateProxies_GlyphContourPointProxyImplementation",
"HarfBuzzSharp_DelegateProxies_GlyphNameProxyImplementation",
"HarfBuzzSharp_DelegateProxies_GlyphFromNameProxyImplementation",
"HarfBuzzSharp_DelegateProxies_CombiningClassProxyImplementation",
"HarfBuzzSharp_DelegateProxies_GeneralCategoryProxyImplementation",
"HarfBuzzSharp_DelegateProxies_MirroringProxyImplementation",
"HarfBuzzSharp_DelegateProxies_ScriptProxyImplementation",
"HarfBuzzSharp_DelegateProxies_ComposeProxyImplementation",
"HarfBuzzSharp_DelegateProxies_DecomposeProxyImplementation",
"SkiaSharp_DelegateProxies_SKBitmapReleaseDelegateProxyImplementation",
"SkiaSharp_DelegateProxies_SKDataReleaseDelegateProxyImplementation",
"SkiaSharp_DelegateProxies_SKImageRasterReleaseDelegateProxyImplementationForCoTaskMem",
"SkiaSharp_DelegateProxies_SKImageRasterReleaseDelegateProxyImplementation",
"SkiaSharp_DelegateProxies_SKImageTextureReleaseDelegateProxyImplementation",
"SkiaSharp_DelegateProxies_SKSurfaceReleaseDelegateProxyImplementation",
"SkiaSharp_DelegateProxies_GRGlGetProcDelegateProxyImplementation",
"SkiaSharp_DelegateProxies_GRVkGetProcDelegateProxyImplementation",
"SkiaSharp_DelegateProxies_SKGlyphPathDelegateProxyImplementation",
"SkiaSharp_SKAbstractManagedStream_ReadInternal",
"SkiaSharp_SKAbstractManagedStream_PeekInternal",
"SkiaSharp_SKAbstractManagedStream_IsAtEndInternal",
"SkiaSharp_SKAbstractManagedStream_HasPositionInternal",
"SkiaSharp_SKAbstractManagedStream_HasLengthInternal",
"SkiaSharp_SKAbstractManagedStream_RewindInternal",
"SkiaSharp_SKAbstractManagedStream_GetPositionInternal",
"SkiaSharp_SKAbstractManagedStream_SeekInternal",
"SkiaSharp_SKAbstractManagedStream_MoveInternal",
"SkiaSharp_SKAbstractManagedStream_GetLengthInternal",
"SkiaSharp_SKAbstractManagedStream_DuplicateInternal",
"SkiaSharp_SKAbstractManagedStream_ForkInternal",
"SkiaSharp_SKAbstractManagedStream_DestroyInternal",
"System_Private_CoreLib_ComponentActivator_GetFunctionPointer",
"System_Private_CoreLib_CalendarData_EnumCalendarInfoCallback",
"System_Private_CoreLib_TimerQueue_TimerHandler",
"System_Private_CoreLib_ThreadPool_BackgroundJobHandler",
};
