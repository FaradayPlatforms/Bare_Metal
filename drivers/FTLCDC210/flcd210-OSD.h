
void palette_write( UINT32 data);
INT32 palette_check( UINT32 data);
void palette_write_seq(void);
INT32 palette_check_seq(void);
void palette_ram_test( UINT32 base);
void OSD_Pos( UINT32 which, INT32  HPos, INT32 VPos);
void OSD_Dim( UINT32 which, INT32 HDim, INT32 VDim);
void OSD_WinControl( UINT32 which, INT32 hightlight, INT32 bdType, INT32 bdColor, INT32 shType, INT32 shColor );
void OSD_FontControl( UINT32 TranType, UINT32 HighLightType, UINT32 BdColorSel, UINT32 ShColorSel );
void OSD_Row_Col_Space( UINT32 RowSpace, UINT32 ColSpace);
void OSD_FontAttributeBase( UINT32 which, UINT16 fontIndex );
void OSD_MCFBase( UINT8 *fontbase );
void OSD_Scal( INT32 HZoomIn, INT32 HScal, INT32 VZoomIn, INT32 VScal);
void OSD_putc( INT8 c, INT32 position, UINT16 foreground, UINT16 background );
void OSD_puts( INT8 *str, INT32 position, UINT16 foreground, UINT16 background );
void OSD_On( UINT32 which );
void OSD_Off(void);
void OSD_Test_Complex(INT8 *str);
void OSD_On_Simple( UINT8 on);
void OSD_Pos_Simple( INT32  HPos, INT32 VPos );
void OSD_Dim_Simple( INT32 HDim, INT32 VDim );
void OSD_transparent_Simple( INT32 level );
void OSD_fg_color_Simple( INT32 pal0, INT32 pal1, INT32 pal2, INT32 pal3);
void OSD_bg_color_Simple( INT32 pal1, INT32 pal2, INT32 pal3);
void OSD_Scal_Simple( INT32 HScal, INT32 VScal);
void OSD_putc_Simple( INT8 c, INT32 position);
void OSD_puts_Simple( INT8 *str, INT32 position);
void OSD_Test_Simple( INT32 mode, INT8 *str);
void OSD_Test( INT8 *str);

