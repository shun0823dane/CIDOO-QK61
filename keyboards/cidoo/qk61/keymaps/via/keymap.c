/* Personal VIA layout imported from cidoo_qk61.layout.json. */
#include QMK_KEYBOARD_H
#include "../../../lib/rdr_lib/rdr_common.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_tkl_ansi(
        QK_GESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7,
        KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC, LT(2,KC_TAB), KC_Q,
        KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O,
        KC_P, KC_LBRC, KC_RBRC, KC_BSLS, MO(1), KC_A, KC_S, KC_D,
        KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT,
        LT(1,KC_ENT), KC_LSFT, KC_Z, KC_X, KC_C, KC_V, LT(2,KC_B), KC_N,
        KC_M, KC_COMM, KC_DOT, KC_SLSH, MT(MOD_LSFT,KC_UP), MT(MOD_LCTL,KC_LNG2), MT(MOD_LALT,KC_LNG2), MT(MOD_LGUI | MOD_RGUI,KC_INS),
        LT(3,KC_SPC), MT(MOD_LGUI | MOD_RGUI,KC_SCRL), KC_LEFT, KC_DOWN, KC_RGHT
    ),
    [1] = LAYOUT_tkl_ansi(
        MC_3, LAG(KC_1), LAG(KC_2), LAG(KC_3), LAG(KC_4), LAG(KC_5), LAG(KC_6), LAG(KC_7),
        LAG(KC_8), MC_6, MC_7, KC_VOLD, KC_VOLU, KC_DEL, KC_NO, KC_NO,
        G(KC_W), C(KC_E), KC_NO, KC_NO, G(KC_Y), KC_NO, KC_DEL, KC_UP,
        KC_UP, MC_4, MC_5, KC_MPLY, OSL(0), C(KC_A), KC_NO, KC_DEL,
        C(S(KC_SCLN)), S(KC_ENT), KC_BSPC, KC_MS_BTN1, KC_LEFT, KC_DOWN, KC_RGHT, KC_CAPS,
        KC_ENT, KC_LSFT, G(KC_Z), KC_NO, KC_NO, KC_NO, KC_NO, C(S(KC_J)),
        C(S(KC_J)), KC_NO, KC_DOWN, S(KC_SLSH), KC_MS_UP, MC_0, KC_LNG2, KC_LNG1, 
        KC_ENT, KC_MS_BTN1, KC_MS_LEFT, KC_MS_DOWN, KC_MS_RIGHT
    ),
    [2] = LAYOUT_tkl_ansi(
        KC_NO, LCA(KC_E), LCA(KC_ENT), LCA(KC_T), KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, G(KC_LEFT),
        G(KC_N), G(KC_RGHT), KC_NO, KC_NO, KC_NO, KC_NO, KC_MS_UP, KC_MS_UP,
        KC_MS_UP, KC_NO, KC_NO, KC_NO, KC_NO, LCA(KC_L), LCA(KC_M), LCA(KC_R),
        KC_NO, KC_NO, KC_NO, KC_MS_BTN1, KC_MS_LEFT, KC_MS_DOWN, KC_MS_RIGHT, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, MD_BLE1,
        MD_BLE2, MD_BLE3, MD_USB, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, RGB_VAD, RGB_TOG
    ),
    [3] = LAYOUT_tkl_ansi(
        LCA(KC_E), LAG(KC_1), LAG(KC_2), LAG(KC_3), LAG(KC_4), LAG(KC_5), LAG(KC_6), LAG(KC_7),
        LAG(KC_8), MC_6, MC_7, KC_VOLD, KC_VOLU, KC_NO, G(KC_UP), KC_NO,
        G(KC_W), G(KC_SPC), G(KC_R), G(KC_T), G(KC_Y), KC_NO, KC_UP, KC_NO,
        KC_NO, G(KC_LBRC), G(KC_RBRC), KC_MPLY, LCA(KC_T), G(KC_A), LSG(KC_S), C(KC_D),
        G(KC_F), LSG(KC_T), KC_BSPC, KC_LEFT, KC_DOWN, KC_RGHT, KC_NO, KC_NO,
        G(KC_ENT), LSG(KC_LBRC), G(KC_Z), KC_NO, G(KC_C), LSG(KC_V), LAG(KC_C), G(KC_N),
        KC_MS_BTN1, S(KC_COMM), S(KC_DOT), LCA(KC_E), LCA(KC_T), LSG(KC_RBRC), G(KC_LEFT), G(KC_RGHT),
        LT(3,KC_SPC), G(KC_ENT), LCA(KC_L), LCA(KC_M), LCA(KC_R)
    )
};
