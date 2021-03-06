/*  RetroArch - A frontend for libretro.
 *  Copyright (C) 2010-2014 - Hans-Kristian Arntzen
 *  Copyright (C) 2011-2016 - Daniel De Matteis
 *
 *  RetroArch is free software: you can redistribute it and/or modify it under the terms
 *  of the GNU General Public License as published by the Free Software Found-
 *  ation, either version 3 of the License, or (at your option) any later version.
 *
 *  RetroArch is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
 *  without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
 *  PURPOSE.  See the GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License along with RetroArch.
 *  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __INTL_SPANISH_H
#define __INTL_SPANISH_H

/* IMPORTANT:
 * For non-english characters to work without proper unicode support,
 * we need this file to be encoded in ISO 8859-1 (Latin1), not UTF-8.
 * If you save this file as UTF-8, you'll break non-english characters
 * (e.g. German "Umlauts" and Portugese diacritics).
 */
/* DO NOT REMOVE THIS. If it causes build failure, it's because you saved the file as UTF-8. Read the above comment. */
extern const char force_iso_8859_1[sizeof("������")==6+1 ? 1 : -1];

#define RETRO_LBL_JOYPAD_B "Bot�n B RetroPad"
#define RETRO_LBL_JOYPAD_Y "Bot�n Y RetroPad"
#define RETRO_LBL_JOYPAD_SELECT "Bot�n Select RetroPad"
#define RETRO_LBL_JOYPAD_START "Bot�n Start RetroPad"
#define RETRO_LBL_JOYPAD_UP "Cruceta arriba RetroPad"
#define RETRO_LBL_JOYPAD_DOWN "Cruceta abajo RetroPad"
#define RETRO_LBL_JOYPAD_LEFT "Cruceta izda. RetroPad"
#define RETRO_LBL_JOYPAD_RIGHT "Cruceta dcha. RetroPad"
#define RETRO_LBL_JOYPAD_A "Bot�n A RetroPad"
#define RETRO_LBL_JOYPAD_X "Bot�n X RetroPad"
#define RETRO_LBL_JOYPAD_L "Bot�n L RetroPad"
#define RETRO_LBL_JOYPAD_R "Bot�n R RetroPad"
#define RETRO_LBL_JOYPAD_L2 "Bot�n L2 RetroPad"
#define RETRO_LBL_JOYPAD_R2 "Bot�n R2 RetroPad"
#define RETRO_LBL_JOYPAD_L3 "Bot�n L3 RetroPad"
#define RETRO_LBL_JOYPAD_R3 "Bot�n R3 RetroPad"
#define RETRO_LBL_TURBO_ENABLE "Activar turbo"
#define RETRO_LBL_ANALOG_LEFT_X "X anal�gico izdo."
#define RETRO_LBL_ANALOG_LEFT_Y "Y anal�gico izdo."
#define RETRO_LBL_ANALOG_RIGHT_X "X anal�gico dcho."
#define RETRO_LBL_ANALOG_RIGHT_Y "Y anal�gico dcho."
#define RETRO_LBL_ANALOG_LEFT_X_PLUS "X + anal�gico izdo."
#define RETRO_LBL_ANALOG_LEFT_X_MINUS "X - anal�gico izdo."
#define RETRO_LBL_ANALOG_LEFT_Y_PLUS "Y + anal�gico izdo."
#define RETRO_LBL_ANALOG_LEFT_Y_MINUS "Y - anal�gico izdo."
#define RETRO_LBL_ANALOG_RIGHT_X_PLUS "X + anal�gico dcho."
#define RETRO_LBL_ANALOG_RIGHT_X_MINUS "X - anal�gico dcho."
#define RETRO_LBL_ANALOG_RIGHT_Y_PLUS "Y + anal�gico dcho."
#define RETRO_LBL_ANALOG_RIGHT_Y_MINUS "Y - anal�gico dcho."
#define RETRO_LBL_FAST_FORWARD_KEY "Acelerador"
#define RETRO_LBL_FAST_FORWARD_HOLD_KEY "Alternar acelerador"
#define RETRO_LBL_LOAD_STATE_KEY "Carga r�pida"
#define RETRO_LBL_SAVE_STATE_KEY "Guardado r�pido"
#define RETRO_LBL_FULLSCREEN_TOGGLE_KEY "Alt. pantalla completa"
#define RETRO_LBL_QUIT_KEY "Tecla de abandonar"
#define RETRO_LBL_STATE_SLOT_PLUS "Siguiente ranura r�pida"
#define RETRO_LBL_STATE_SLOT_MINUS "Ranura r�pida anterior"
#define RETRO_LBL_REWIND "Rebobinar"
#define RETRO_LBL_MOVIE_RECORD_TOGGLE "Alt. grabaci�n"
#define RETRO_LBL_PAUSE_TOGGLE "Alternar pausa"
#define RETRO_LBL_FRAMEADVANCE "Avanzar fotograma"
#define RETRO_LBL_RESET "Reiniciar"
#define RETRO_LBL_SHADER_NEXT "Siguiente shader"
#define RETRO_LBL_SHADER_PREV "Shader anterior"
#define RETRO_LBL_CHEAT_INDEX_PLUS "Siguiente �ndice de trucos"
#define RETRO_LBL_CHEAT_INDEX_MINUS "�ndice de trucos anterior"
#define RETRO_LBL_CHEAT_TOGGLE "Alternar trucos"
#define RETRO_LBL_SCREENSHOT "Capturar pantalla"
#define RETRO_LBL_MUTE "Silenciar sonido"
#define RETRO_LBL_OSK "Activar teclado en pantalla"
#define RETRO_LBL_NETPLAY_FLIP "Cambiar usuario de red"
#define RETRO_LBL_SLOWMOTION "C�mara lenta"
#define RETRO_LBL_ENABLE_HOTKEY "Activar teclas r�pidas"
#define RETRO_LBL_VOLUME_UP "Subir volumen"
#define RETRO_LBL_VOLUME_DOWN "Bajar volumen"
#define RETRO_LBL_OVERLAY_NEXT "Siguiente sobreimposici�n"
#define RETRO_LBL_DISK_EJECT_TOGGLE "Alt. expulsar disco"
#define RETRO_LBL_DISK_NEXT "Cambiar a siguiente disco"
#define RETRO_LBL_DISK_PREV "Cambiar a disco anterior"
#define RETRO_LBL_GRAB_MOUSE_TOGGLE "Alternar captura de rat�n"
#define RETRO_LBL_MENU_TOGGLE "Alternar men�"

#endif
